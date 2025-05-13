class TrieNode {
public:

    // pointer array for child nodes of each node
    TrieNode* children[26];

    // Used for indicating ending of string
    bool isLeaf;

    TrieNode() {
      
        // initialize the wordEnd variable with false
        // initialize every index of childNode array with NULL
        isLeaf = false;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};
