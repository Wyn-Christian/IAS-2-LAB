# Implementation of SHA-I

## Aim:

To implement the SHA-I hashing technique using C program.

## Description:

In cryptography, **SHA-1** (**Secure Hash Algorithm 1**) is a cryptographic hash function.
SHA-1 produces a 160-bit hash value known as a message digest.
The way this algorithm works is that for a message of size < 264 bits it computes a 160-bit condensed output called a message digest.
The SHA-1 algorithm is designed so that it is practically
infeasible to find two input messages that hash to the same output message.
A **hash function** such as SHA-1 is used to calculate an alphanumeric string that serves as the cryptographic representation of a file or a piece of data.
This is called a **digest** and can serve as a digital signature.
It is supposed to be unique and non-reversible.

## Algorithm:

1. Read the 256-bit key values.
2. Divide into five equal-sized blocks named `A`, `B`, `C`, `D` and `E`.
3. The blocks `B`, `C` and `D` are passed to the function `F`.
4. The resultant value is permuted with block `E`.
5. The block `A` is shifted right by ‘`s`’ times and permuted with the result of step-4.
6. Then it is permuted with a weight value and then with some other key pair and taken as the first block.
7. Block `A` is taken as the second block and the block `B` is shifted by ‘`s`’ times and taken as the third block.
8. The blocks `C` and `D` are taken as the block `D` and `E` for the final output.
