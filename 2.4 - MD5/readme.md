# Implementation of MD5

## Aim:

To write a C program to implement the MD5 hashing technique.

## Description:

**MD5** processes a variable-length message into a fixed-length output of 128 bits.
The input message is broken up into chunks of 512-bit blocks.
The message is _padded_ so that its length is divisible by 512.
The padding works as follows: first a single bit, 1, is appended to the end of the message.
This is followed by as many zeros as are required to bring the length of the message up to 64 bits less than a multiple of 512.
The remaining bits are filled up with 64 bits representing the length of the original message, $`modulo 2^{64}`$.
The main MD5 algorithm operates on a 128-bit state, divided into four 32-bit words, denoted `A`, `B`, `C`, and `D`.
These are initialized to certain fixed constants.
The main algorithm then uses each 512-bit message block in turn to modify the state.

## Algorithm:

1. Read the 128-bit plain text.
2. Divide into four blocks of 32-bits named as `A`, `B`, `C` and `D`.
3. Compute the functions `f`, `g`, `h` and `i` with operations such as, rotations, permutations, etc,.
4. The output of these functions are combined together as `F` and performed circular shifting and then given to key round.
5. Finally, right shift of ‘`s`’ times are performed and the results are combined together to produce the final output.
