#include <iostream>
#include <string>
#include <vector>

// Alice and Bob are playing a game. They have a binary string s (a string such
// that each character in it is either 0 or 1). Alice moves first, then Bob,
// then Alice again, and so on.

// During their move, the player can choose any number (not less than one) of
// consecutive equal characters in s and delete them.

// For example, if the string is 10110, there are 6 possible moves:
// 1. *1*0110
// 2. 1*0*110
// 3. 10*1*10
// 4. 101*1*0
// 5. 10*11*0
// 6. 1011*0*

// After the characters are removed, the characters to the left and to the right
// of the removed block become adjacent. I.e. the following sequence of moves
// is valid: 10110: 10*11*0 -> 100: 1*00* -> 1.

// The game ends when the string becomes empty, and the score of each player is
// the number of 1-characters deleted by them.

// Each player wants to maximise their score. Calculate the score of each
// player, and print it out in the game function.

void game(std::string s) {
    // TODO: add your code here!
}

int main(void) {
    std::vector<std::string> games;         // expected output:
    games.push_back("01111001");        // Alice = 4, Bob = 1
    games.push_back("0000");            // Alice = 0, Bob = 0
    games.push_back("111111");          // Alice = 6, Bob = 0
    games.push_back("101010101");       // Alice = 3, Bob = 2
    games.push_back("011011110111");    // Alice = 6, Bob = 3
    for (std::string s : games) {
        game(s);
    }
    return 0;
}