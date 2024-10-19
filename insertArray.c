#include <stdio.h>
#define max 100
int main(){
int p[max],i,k,j,n;
printf("Enter length");
scanf("%d",&n);

for(i=0;i<n;i++)
	scanf("%d",&p[i]);
printf("print array");
for(i=0;i<n;i++)
	printf("%d",p[i]);
printf("enter position to enter");
scanf("%d",&k);
k--;

for(j=n-1;j>=k;j--)
	p[j+1]=p[j];
	
printf("enter the value to insert");
scanf("%d",&p[k]);
printf("array after insert");

for(int i=0;i<=n;i++)
	printf("%d",p[i]);
return 0;
}
