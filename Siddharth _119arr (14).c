#include <stdio.h>
int main() {
 int arr[10], n,i;
 printf("Enter 9 numbers: ");
 for(i=0;i<9;i++) scanf("%d",&arr[i]);
 printf("Enter new number: "); scanf("%d",&n);
 arr[9]=n;
 printf("Array: ");
 for(i=0;i<10;i++) printf("%d ",arr[i]);
 return 0;
}