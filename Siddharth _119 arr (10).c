#include <stdio.h>
int main() {
 int arr[10], freq[10]={0}, i,j,count;
 printf("Enter 10 values: ");
 for(i=0;i<10;i++) scanf("%d",&arr[i]);
 for(i=0;i<10;i++){
 count=1;
 if(freq[i]) continue;
 for(j=i+1;j<10;j++) if(arr[i]==arr[j]){ count++; freq[j]=1; }
 printf("%d occurs %d times\n", arr[i], count);
 }
 return 0;
}
