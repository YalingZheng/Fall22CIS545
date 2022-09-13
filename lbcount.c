#include <stdlib.h>
#include <stdio.h>

int countWords(FILE *f){
   int count = 0;
   char ch;
   while ((ch = fgetc(f)) != EOF){
       if (ch != '\n')
           count++;
   }
   return count;
}
int main(String[] argv){
   int wordCount = 0;
   FILE *rFile = fopen(artv[1], "r");
   wordCount += countWords(rFile);
   printf("File about.me number of characters: %d\n", wordCount);
   return 0;
}
