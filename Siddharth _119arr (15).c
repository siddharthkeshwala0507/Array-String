#include <stdio.h>
int main() {
 int arr[10], i;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++) scanf("%d",&arr[i]);
 for(i=0;i<9;i++) arr[i]=arr[i+1];
 printf("After deletion: ");
 for(i=0;i<9;i++) printf("%d ",arr[i]);
 return 0;
}