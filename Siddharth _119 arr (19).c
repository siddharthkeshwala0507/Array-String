#include <stdio.h>
int main() {
 int arr[10], val,i,found=0;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++) scanf("%d",&arr[i]);
 printf("Enter value to search: "); scanf("%d",&val);
 for(i=0;i<10;i++) if(arr[i]==val){ printf("Found at %d\n", i); found=1; break; }
 if(!found) printf("Not found\n");
 return 0;
}
