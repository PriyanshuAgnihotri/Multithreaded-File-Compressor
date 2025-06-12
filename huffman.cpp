#include "huffman.h"

void generateCodes(HuffmanNode* root, std::string str, std::unordered_map<char, std::string>& codes) {
    if (!root) return;
    if (!root->left && !root->right) codes[root->ch] = str;
    generateCodes(root->left, str + "0", codes);
    generateCodes(root->right, str + "1", codes);
}

std::unordered_map<char, std::string> buildHuffmanCodes(const std::string& data) {
    std::unordered_map<char, int> freq;
    for (char c : data) freq[c]++;

    std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> pq;
    for (auto& pair : freq)
        pq.push(new HuffmanNode(pair.first, pair.second));

    while (pq.size() > 1) {
        HuffmanNode* left = pq.top(); pq.pop();
        HuffmanNode* right = pq.top(); pq.pop();
        HuffmanNode* node = new HuffmanNode('\0', left->freq + right->freq);
        node->left = left;
        node->right = right;
        pq.push(node);
    }

    std::unordered_map<char, std::string> codes;
    generateCodes(pq.top(), "", codes);
    return codes;
}

std::string encodeHuffman(const std::string& data, const std::unordered_map<char, std::string>& codes) {
    std::string encoded;
    for (char c : data) encoded += codes.at(c);
    return encoded;
}
