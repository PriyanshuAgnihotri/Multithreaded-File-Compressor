#include "compressor.h"
#include "huffman.h"
#include <fstream>
#include <iostream>
#include <thread>
#include <vector>

void Compressor::compress(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream in(inputFile, std::ios::binary);
    std::ostringstream ss;
    ss << in.rdbuf();
    std::string data = ss.str();
    in.close();

    auto codes = buildHuffmanCodes(data);
    std::string encoded = encodeHuffman(data, codes);

    std::ofstream out(outputFile, std::ios::binary);
    out << encoded;
    out.close();

    std::cout << "File compressed successfully.\n";
}

void Compressor::decompress(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream in(inputFile, std::ios::binary);
    std::ostringstream ss;
    ss << in.rdbuf();
    std::string data = ss.str();
    in.close();

    std::ofstream out(outputFile, std::ios::binary);
    out << data; // Mock decompress (implement decoding for real case)
    out.close();

    std::cout << "Decompression (mock) completed.\n";
}
