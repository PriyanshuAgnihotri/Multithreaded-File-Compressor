#pragma once
#include <unordered_map>
#include <queue>
#include <string>
#include <vector>

struct HuffmanNode {
    char ch;
    int freq;
    HuffmanNode *left, *right;

    HuffmanNode(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(HuffmanNode* l, HuffmanNode* r) {
        return l->freq > r->freq;
    }
};

std::unordered_map<char, std::string> buildHuffmanCodes(const std::string& data);
std::string encodeHuffman(const std::string& data, const std::unordered_map<char, std::string>& codes);
