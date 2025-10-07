#include <stdio.h>
int main() {
 int arr[10], val,i,j;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++) scanf("%d",&arr[i]);
 printf("Enter value to delete: "); scanf("%d",&val);
 for(i=0;i<10;i++){ if(arr[i]==val){ for(j=i;j<9;j++) arr[j]=arr[j+1]; break; } }
 printf("After deletion: ");
 for(i=0;i<9;i++) printf("%d ",arr[i]);
 return 0;
}