#include <stdio.h>
#define max 100
int main(){
int p[max],i,pos,j,n;
printf("Enter length");
scanf("%d",&n);

for(i=0;i<n;i++)
	scanf("%d",&p[i]);
	
printf("print array");
for(i=0;i<n;i++)
	printf("->%d ",p[i]);
	
printf("enter position to enter");
scanf("%d",&pos);
pos--;

for(j=pos;j<=n-1;j++)
	p[j]=p[j+1];
	
printf("array after delete");

for(int i=0;i<n-1;i++)
	printf("->%d ",p[i]);
return 0;
}
