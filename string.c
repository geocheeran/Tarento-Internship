// Program 2:
// - Accept a String input
// - Accept a String of valid chars
// - Remove all the characters that are not present in the valid chars from the input string
// - Print the cleansed String and the count of characters removed

// Eg. If the String input is 
// The name of my dog is #2#Tiger
// and the valid chars is abcdefghijklmnopqrstuvwxyz 123
// then the output should be as below
// The name of my dog is Tiger
// 2 # was removed
// 1 2 was removed




#include <stdio.h>
int main() {
   char line[150];
   int count=-1;
   printf("Enter a string: ");
   fgets(line, sizeof(line), stdin); 


   for (int i = 0, j; line[i] != '\0'; ++i) {
      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] >= '1' && line[i] <= '3') && !(line[i] == ' ') && !(line[i] == '\0')) 
      {
         count=count+1;
         for (j = i; line[j] != '\0'; ++j) {
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(line);
   printf("%d characters removed",count);
   return 0;
}
