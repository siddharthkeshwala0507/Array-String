#include <stdio.h>
int main() {
 int arr[10], res[10]={0}, i,n,dir;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++) scanf("%d",&arr[i]);
 printf("Enter shift (n): "); scanf("%d",&n);
 printf("Direction (0=left,1=right): "); scanf("%d",&dir);
 if(dir==0){ for(i=0;i<10;i++) if(i+n<10) res[i]=arr[i+n]; }
 else{ for(i=9;i>=0;i--) if(i-n>=0) res[i]=arr[i-n]; }
 printf("Shifted: ");
 for(i=0;i<10;i++) printf("%d ",res[i]);
 return 0;
}
