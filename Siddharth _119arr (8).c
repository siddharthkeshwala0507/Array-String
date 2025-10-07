#include <stdio.h>
int main() {
 int a[5], b[10]={0}, i;
 printf("Enter 5 values: ");
 for(i=0;i<5;i++) scanf("%d",&a[i]);
 for(i=0;i<5;i++) b[i*2]=a[i];
 printf("Copied array: ");
 for(i=0;i<10;i++) printf("%d ",b[i]);
 return 0;
}
