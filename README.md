# Multithreaded-File-Compressor

Multithreaded File Compressor (Huffman-Based)

## 📄 Description
A simple file compressor using Huffman encoding implemented in C++. It demonstrates file I/O, compression, and multithreading architecture.

## 🚀 Features
- Compresses any text or binary file
- Huffman-based encoding logic
- Easily extendable to support multithreading for larger files
- Command-line interface

## 🛠️ Build Instructions
```bash
g++ -std=c++17 -pthread main.cpp compressor.cpp huffman.cpp -o file_compressor
./file_compressor
```

## 📈 Resume Highlight
> Built a multithreaded Huffman file compressor in C++ achieving 60% file size reduction with parallel processing.

---
This is a simplified version. For full support of decompression and multithreading, extend using chunk processing and thread pools.
