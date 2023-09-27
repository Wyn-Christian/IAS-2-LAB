# Implementation of Vigenere Cipher

## Aim:

To implement the Vigenere Cipher substitution technique using C program.

## Description:

To encrypt, a table of alphabets can be used, termed a tabula recta, **Vigenère square**, or **Vigenère table**.
It consists of the alphabet written out 26 times in different rows, each alphabet shifted cyclically to the left compared to the previous alphabet, corresponding to the 26 possible Caesar ciphers.
At different points in the encryption process, the cipher uses a different alphabet from one of the rows.
The alphabet used at each point depends on arepeating keyword.

Each row starts with a key letter. The remainder of the row holds the letters A to Z.
Although there are 26 key rows shown, you will only use as many keys as there are unique
letters in the key string, here just 5 keys, `{L, E, M, O, N}`. For successive letters of the
message, we are going to take successive letters of the key string, and encipher each message
letter using its corresponding key row. Choose the next letter of the key, go along that row to find the column heading that matches the message character; the letter at the intersection of
`[key-row, msg-col]` is the enciphered letter.

## Algorithm:

1. Arrange the alphabets in row and column of a 26\*26 matrix.
2. Circulate the alphabets in each row to position left such that the first letter is attached to last.
3. Repeat this process for all 26 rows and construct the final key matrix.
4. The keyword and the plain text is read from the user.
5. The characters in the keyword are repeated sequentially so as to match with that of the plain text.
6. Pick the first letter of the plain text and that of the keyword as the row indices and column indices respectively.
7. The junction character where these two meet forms the cipher character.
8. Repeat the above steps to generate the entire cipher text.
