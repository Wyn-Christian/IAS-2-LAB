#include <ctype.h>
#include <stdio.h>
#include <string.h>

void displayTable(char preparedKey[5][5]) {
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%c ", preparedKey[i][j]);
    }
    printf("\n");
  }
}

// Function to prepare the key for the Playfair cipher
void prepareTable(char key[], char prepared_key[5][5]) {
  int keyLength = strlen(key);
  int k = 0;
  int used[26] = {0};

  for (int i = 0; i < keyLength; i++) {
    if (!used[toupper(key[i]) - 'A']) {
      if (toupper(key[i]) == 'J') {
        used['I' - 'A'] = 1;
        prepared_key[k / 5][k % 5] = 'I';
        k++;
      } else if (key[i] != ' ') {
        used[toupper(key[i]) - 'A'] = 1;
        prepared_key[k / 5][k % 5] = toupper(key[i]);
        k++;
      }
    }
  }

  for (char ch = 'A'; ch <= 'Z'; ch++) {
    if (ch != 'J' && !used[ch - 'A']) {
      prepared_key[k / 5][k % 5] = ch;
      k++;
    }
  }
}

// Function to find the position of a character in the prepared key
void findPosition(char prepared_key[5][5], char ch, int *row, int *col) {
  if (ch == 'J') ch = 'I';

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (prepared_key[i][j] == ch) {
        *row = i;
        *col = j;
        return;
      }
    }
  }
}

// Function to perform encryption using the Playfair cipher
void playfairEncrypt(char prepared_key[5][5], char prepared_plaintext[]) {
  int len = strlen(prepared_plaintext);
  char ciphertext[len * 2];
  int c = 0;

  for (int i = 0; i < len; i += 2) {
    int row1, col1, row2, col2;
    findPosition(prepared_key, toupper(prepared_plaintext[i]), &row1, &col1);
    findPosition(prepared_key, toupper(prepared_plaintext[i + 1]), &row2,
                 &col2);

    if (row1 == row2) {
      ciphertext[c++] = prepared_key[row1][(col1 + 1) % 5];
      ciphertext[c++] = prepared_key[row2][(col2 + 1) % 5];
    } else if (col1 == col2) {
      ciphertext[c++] = prepared_key[(row1 + 1) % 5][col1];
      ciphertext[c++] = prepared_key[(row2 + 1) % 5][col2];
    } else {
      ciphertext[c++] = prepared_key[row1][col2];
      ciphertext[c++] = prepared_key[row2][col1];
    }
  }

  ciphertext[c] = '\0';
  printf("Encrypted Text: %s\n", ciphertext);
}

// Function to remove all spaces from a given string
void removeSpaces(char *str) {
  int count = 0;

  for (int i = 0; str[i]; i++)
    if (str[i] != ' ') str[count++] = str[i];

  str[count] = '\0';
}

void preparePlainText(char plaintext[], char prepared_plaintext[]) {
  int len = strlen(plaintext);
  removeSpaces(plaintext);

  int i, count = 0;
  for (i = 0; i < len; i++) {
    prepared_plaintext[count] = plaintext[i];

    if (count % 2 != 1 && i + 1 != len) {
      if (plaintext[i] == plaintext[i + 1]) {
        prepared_plaintext[++count] = 'X';
      }
    }
    count++;
  }

  // Add bogus character at the end of letters if length is odd
  if (count % 2) {
    prepared_plaintext[count] = 'X';
    count++;
  }
  prepared_plaintext[count] = '\0';
}

int main() {
  char key[100];
  char plaintext[100];

  printf("Enter the key (up to 26 characters): ");
  scanf("%[^\n]s", key);

  printf("Enter the plaintext: ");
  scanf(" %[^\n]s", plaintext);

  char prepared_key[5][5];
  prepareTable(key, prepared_key);
  displayTable(prepared_key);

  char prepared_plaintext[100];
  preparePlainText(plaintext, prepared_plaintext);
  playfairEncrypt(prepared_key, prepared_plaintext);

  return 0;
}
