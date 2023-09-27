# Implementation of Cipher

## Aim:

To write a C program to implement Data Encryption Standard (DES) using C Language.

## Description:

DES is a symmetric encryption system that uses 64-bit blocks, 8 bits of which are
used for parity checks. The key therefore has a "useful" length of 56 bits, which means that
only 56 bits are actually used in the algorithm. The algorithm involves carrying out
combinations, substitutions and permutations between the text to be encrypted and the key,
while making sure the operations can be performed in both directions. The key is ciphered on
64 bits and made of 16 blocks of 4 bits, generally denoted k1 to k16. Given that "only" 56 bits
are actually used for encrypting, there can be 256 different keys.

#### The main arts of the algorithm are as follows:

- Fractioning of the text into 64-bit blocks
- Initial permutation of blocks
- Breakdown of the blocks into two parts: left and right, named L and R
- Permutation and substitution steps repeated 16 times
- Re-joining of the left and right parts then inverse initial permutation

## Algorithm:

1. Read the 64-bit plain text.
2. Split it into two 32-bit blocks and store it in two different arrays.
3. Perform XOR operation between these two arrays.
4. The output obtained is stored as the second 32-bit sequence and the original second 32-bit sequence forms the first part.
5. Thus the encrypted 64-bit cipher text is obtained in this way. Repeat the same process for the remaining plain text characters.
