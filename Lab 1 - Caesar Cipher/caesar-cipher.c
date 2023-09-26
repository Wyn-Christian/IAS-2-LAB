#include <stdio.h>
#include <string.h>

int main() {
  char text[50];
  int key;

  printf("Enter plain text: ");
  scanf("%[^\n]s", text);

  printf("Enter key: ");
  scanf("%d", &key);

  int i;
  for (i = 0; text[i] != '\0'; i++) {
    char ch = text[i];

    if (ch >= 'A' && ch <= 'Z') text[i] = ((ch - 'A' + key) + 26) % 26 + 'A';
    if (ch >= 'a' && ch <= 'z') text[i] = ((ch - 'a' + key) + 26) % 26 + 'a';
    printf("%c -> %c\n", ch, text[i]);
  }

  printf("Encryted text: %s\n", text);
}