# Implementation of Caesar Cipher

## Aim:

To implement the simple substitution technique named Caesar cipher using C language.

## Description:

To encrypt a message with a Caesar cipher, each letter in the message is changed using a simple rule: shift by three. Each letter is replaced by the letter three letters ahead in the alphabet. A becomes D, B becomes E, and so on. For the last letters, we can think of alphabet as a circle and "wrap around". W becomes Z, X becomes A, Y becomes B, and Z becomes C. To change a message back, each letter is replaced by the one three before it.

## Algorithm:

1. Read the plain text from the user.
2. Read the key value from the user.
3. If the key is positiv then encrypt the text by adding the key with each character in the plain text.
4. Else subtract the key from the plain text.
5. Display the cipher text obtained above.
