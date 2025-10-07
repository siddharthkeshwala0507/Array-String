#include <stdio.h>
int main() {
 int arr[10], pos,n,i;
 printf("Enter 9 numbers: ");
 for(i=0;i<9;i++) scanf("%d",&arr[i]);
 printf("Enter new number and position (0-9): ");
 scanf("%d%d",&n,&pos);
 for(i=9;i>pos;i--) arr[i]=arr[i-1];
 arr[pos]=n;
 printf("Array: ");
 for(i=0;i<10;i++) printf("%d ",arr[i]);
 return 0;
}