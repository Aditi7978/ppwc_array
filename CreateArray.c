#include <stdio.h>
void main(){
int arr[10];
int i;
printf("enter 10 elements");
for(i=0;i<10;i++){
printf("elemets %d =",i);
scanf("%d",&arr[i]);
}
printf("");
for(i=0;i<10;i++){
printf("%d",arr[i]);
}
return 0;
}
