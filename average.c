#include <stdio.h>
#define total 3

int main () {
   int scores[total], sum = 0;
   float average;

   printf("-------------------------------------------");
   printf("\nWelcome! Let's calculate your average score\n");
   printf("-------------------------------------------\n");

   for (int i = 0; i < total; i++) {
       printf("Enter score %d: ", i + 1);
       scanf("%d", &scores[i]);
       sum += scores[i];
   }
   average = sum / total;

   printf("\nYour average is %.1f\n", average);
   return 0;
}