#include<stdio.h>
void main(){
    int a,s=1,i;
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    s*=i;
    }
    printf("%d",s);
}
