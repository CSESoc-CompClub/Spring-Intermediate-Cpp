// Welcome to... SPY X Family's super secret Huffman Encoder!!! Today, we will
// be developing this Huffman encoder to super secretly encrypt our information
// in a way that can still be decrypted knowing the input probabilities.

// ========== INCLUDED LIBRARIES ==========
#include <iostream>
#include <vector>
#include <algorithm>

// ========== CONSTANTS ==========
// Challenge: if you finish with only combining two nodes, think about how
// conbining more than 3 nodes changes things...
#define RADIX 2

// ========== DATA TYPES ==========
struct codeword_node {
    std::string word;       // the word being encoded
    double prob;            // the probability of the word occurring
    std::string codeword;   // stores the codeword created for this word
};

struct huff_node {
    double prob;                // the combined probability for this node occurring
    std::vector<int> feeders;   // the indices that feed into this node
};

// ========== FUNCTION PROTOTYPES ==========
std::vector<codeword_node> read_input(void);
std::vector<huff_node> list_to_huffman(std::vector<codeword_node> &codewords);
void do_huffman(std::vector<huff_node> &old_huff, std::vector<codeword_node> &codewords);
bool compareByProb(const huff_node &a, const huff_node &b);

// ========== MAIN LOGIC ==========
int main(void) {
    // Reads input from stdin and converts into codeword_nodes
    std::vector<codeword_node> codewords = read_input();
    // Converts codeword_nodes into initial huff_nodes
    std::vector<huff_node> huffman = list_to_huffman(codewords);

    // Repeatedly combine huff_nodes until only one left,
    // calculating the codewords as you go
    while (huffman.size() != 1) {
        do_huffman(huffman, codewords);
    }

    // Output words, and the associated probabilities and computed codewords
    for (codeword_node node : codewords) {
        std::cout << node.word << " with probability " << node.prob << " has codeword " << node.codeword << "\n";
    }

    return 0;
}

// Given user input of probabilities, filters out into nodes for codewords
std::vector<codeword_node> read_input(void) {
    // Reads number of words to be encoded
    std::cout << "How many words are you encoding? ";
    int num_words;
    std::cin >> num_words;

    std::vector<codeword_node> codewords;

    // Creates a node for each word
    for (int i = 0; i < num_words; i++) {
        codeword_node new_node;
        std::cout << "Enter the next word: ";
        std::cin >> new_node.word;
        std::cout << "Enter the next word's probability as a decimal: ";
        std::cin >> new_node.prob;
        new_node.codeword = "";
        codewords.push_back(new_node);
    }

    return codewords;
}

// Create initial huff_nodes from the given codeword_nodes for combining
// during the algorithm
std::vector<huff_node> list_to_huffman(std::vector<codeword_node> &codewords) {
    std::vector<huff_node> huffman;
    int i = 0;
    for (codeword_node codeword : codewords) {
        huff_node new_huff;
        new_huff.prob = codeword.prob;
        new_huff.feeders.push_back(i);
        huffman.push_back(new_huff);
        i++;
    }
    return huffman;
}

// Perform one step in the huffman algorithm
void do_huffman(std::vector<huff_node> &old_huff, std::vector<codeword_node> &codewords) {
    // New node to be combined into
    huff_node new_node;
    new_node.prob = 0;

    // Combine as many nodes as the radix indicates
    for (int i = 0; i < RADIX; i++) {
        // extract the last node
        huff_node n = old_huff.back();
        // add its probabilities and feeders to the new node
        new_node.prob += n.prob;
        for (int feeder : n.feeders) {
            new_node.feeders.push_back(feeder);
            // For each feeder node, assign the appropriate extra bit to the codeword
            codewords.at(feeder).codeword = std::to_string(RADIX - 1 - i) + codewords.at(feeder).codeword;
        }
        // delete the last node
        old_huff.pop_back();
    }
    // Insert the new node into the vector of huff_nodes
    old_huff.insert(old_huff.begin(), new_node);
    // Sort the huff_nodes
    std::stable_sort(old_huff.begin(), old_huff.end(), compareByProb);
}

// Comparison function for sorting in descending order
bool compareByProb(const huff_node &a, const huff_node &b) {
    return a.prob > b.prob;
}
