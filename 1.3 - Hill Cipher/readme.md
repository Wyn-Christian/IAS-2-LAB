# Implementation of Hill Cipher

## Aim:

To write a C program to implement the hill cipher substitution techniques.

## Description:

Each lette is represented by a number `modulo 26`. Often the simple scheme `A = 0, B = 1... Z = 25`, is used, but this is not an essential feature of the cipher. To encrypt a message, each block of n letters is multiplied by an invertible `n × n` matrix, against modulus 26. To decrypt the message, each block is multiplied by the inverse of the matrix used for encryption. The matrix used for encryption is the cipher key, and it should be chosen randomly from the set of invertible `n × n` matrices (modulo 26).

## Algorithm:

1. Read the plain text and key from the user.
2. Split the plain text into groups of length three.
3. Arrange the keyword in a `3*3` matrix.
4. Multiply the two matrices to obtain the cipher text of length three.
5. Combine all these groups to get the complete cipher text.
