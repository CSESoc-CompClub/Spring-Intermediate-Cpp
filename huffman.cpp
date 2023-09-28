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
bool compareByProb(const huff_node &a, const huff_node &b);

// ========== MAIN LOGIC ==========
int main(void) {
    // Step 1: we need to read from input to gather all the words and their
    // associated probabilities, and store in a collection of codeword_nodes
    //  – HINT: how can we store all the codeword_nodes together?
    //  – HINT: what should the codewords be initially?



    // Step 2: The codeword_nodes have more information that is necessary
    // for the combining phase. So, next we need to convert the codeword_nodes
    // into a collection of huff_nodes.
    //  – HINT: The huffman nodes we create should only store information for
    //      one of the codeword_nodes. What should be stored in feeders?



    // Step 3: Now, we need to repeatedly combine our huff_nodes until there are
    // none left to combine.
    //  – HINT: How do we know when to stop combining nodes?
    //  – HINT: How can we be sure we are always combining the two lowest
    //      probabilities?
    //  – HINT: Where should we place our combined node in the collection?
    //  – HINT: This would be a good place to start generating the codewords



    // Step 4: Now that we have combined all our huff_nodes and computed the
    // codewords for each word, we can write the information to output.



    // Step 5: Congratulations! You should now have a working huffman encoder!
    // If there's time, have a think about some extra challenges you could
    // incorporate:
    //  – Does the location we place the combined node, relative to
    //      sorted order, matter?
    //  – What if we want to combine more than 2 nodes at once?
    //      • Will we always have enough nodes to do so?

    return 0;
}


// Comparison function for sorting in descending order
bool compareByProb(const huff_node &a, const huff_node &b) {
    return a.prob > b.prob;
}
