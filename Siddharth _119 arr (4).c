#include <stdio.h>
int main() {
 int amount, notes[] = {500,200,100,50,20,10,5,2,1}, count, i;
 printf("Enter amount: ");
 scanf("%d", &amount);
 for(i = 0; i < 9; i++) {
 count = amount / notes[i];
 if(count) {
 printf("%d x %d\n", count, notes[i]);
 amount %= notes[i];
 }
 }
 return 0;
 }