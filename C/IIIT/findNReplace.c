#include <stdio.h>
#include <string.h>
void main(){
  char sentence[100], find[100], replace[100], new_sentence[100];
  int i, j, k, found = 0;
  printf("Enter a sentence: ");
  gets(sentence);
  printf("Enter the string to find: ");
  gets(find);
  printf("Enter the string to replace it with: ");
  gets(replace);
  sentence[strcspn(sentence, "\n")] = 0;
  find[strcspn(find, "\n")] = 0;
  replace[strcspn(replace, "\n")] = 0;
  for (i = 0; i < strlen(sentence); i++) {
    found = 1;
    for (j = 0; j < strlen(find); j++) {
      if (sentence[i+j] != find[j]) {
        found = 0;
        break;
      }
    }
    if (found)
      break;
  }
  strncpy(new_sentence, sentence, i);
  k = i;
  for (j = 0; j < strlen(replace); j++)
    new_sentence[k++] = replace[j];
  for (j = i + strlen(find); j < strlen(sentence); j++)
    new_sentence[k++] = sentence[j];
  printf("New sentence: %s\n", new_sentence);
}
