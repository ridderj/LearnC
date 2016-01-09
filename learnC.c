#include <stdio.h>

int main()
{
   int decks;
   puts("Enter a number of decks");
   scanf("%i", &decks);
   if (decks < 1) {
      puts("Thats not valid");
      return 1;
   }
   
   
   printf("There are %i cards\n", (decks * 52));
   puts("C Rocks!");
   return 0;
}