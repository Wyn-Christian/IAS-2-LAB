# Implementation of Rail Fence - Row & Column Transformation Technique

## Aim:

To write a C program to implement the rail fence transposition technique.

## Description:

In the rail fence cipher, the plain text is written downwards and diagonally on
successive "**rails**" of an imaginary fence, then moving up when we reach the bottom rail.
When we reach the top rail, the message is written downwards again until the whole plaintext
is written out. The message is then read off in rows

## Algorithm:

1. Read the Plain text.
2. Arrange the plain text in row columnar matrix format.
3. Now read the keyword depending on the number of columns of the plain text.
4. Arrange the characters of the keyword in sorted order and the corresponding columns of the plain text.
5. Read the characters row wise or column wise in the former order to get the cipher text.
6.
