#include<stdio.h>
int main(){
    int a,b,c,max,min,average;
    printf("enter the first value in interger = ");
    scanf("%d",&a);
    printf("enter the first value in interger = ");
    scanf("%d",&b);
    printf("enter the first value in interger = ");
    scanf("%d",&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    min=(a<b)?(a<c?a:c):(b<c?b:c);
    average=(a+b+c)/3;
    printf(" according your input value maximum %d\n",max);
    printf(" according your input value minimun %d\n",min);
    printf(" according your input value average %d\n",average);
    return 0;
}