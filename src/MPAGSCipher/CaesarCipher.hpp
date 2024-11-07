#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>
#include <vector>
#include <cstddef>

#include "CipherMode.hpp"

class CaesarCipher{
public:
    explicit CaesarCipher(const std::size_t key);
    explicit CaesarCipher(const std::string& key);

    std::string applyCipher(const std::string& inputText, 
                            const CipherMode mode) const;

private:
    std::size_t key_ {0};
    // Create the alphabet container
    const std::vector<char> alphabet_ = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const std::size_t alphabetSize_{alphabet_.size()};
};

#endif    // MPAGSCIPHER_CAESARCIPHER_HPP