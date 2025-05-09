#include<bits/stdc++.h>
using namespace std;

class TrieNode{
public:
    TrieNode* children[26];
    bool EndOfWord;

    // Constructor
    TrieNode(){
        EndOfWord = false;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
    }
};

int main(){
    vector<string> words = {"the", "a", "there", "their", "any"};
    TrieNode root = TrieNode();

    /*
    Insert words into the Trie
        - Time Complexity : O(L) Length of the word
    How insert:
        - if ch is not present in the children of the current node, create a new TrieNode and insert it.
        - Move to the child node corresponding to the character.
        - Mark the end of the word when we reach the last character.
    */

    return 0;
}

// Tutorial: https://www.youtube.com/watch?v=m9zawMC6QAI
// Time : 32:40/2:16:34