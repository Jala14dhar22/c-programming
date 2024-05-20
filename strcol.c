#include<stdio.h>
#include<maths.h>
int main(){
   int i,j,a,b;
   printf("enter you the row and coloum number ");
   scanf("%d %d",&a,&b);
   printf("your matrix %dx%d",a,b);
   int x[10][10];
   x[a][b];
   
   for(i=0;i<a;i++){
        for(j=0;j<b;j++)
      scanf("%d",&x[i][j]);
   }
    for(i=0;i<a;i++){
       for(j=0;j<b;j++)
      printf("%d",x[i][j]);
   }
   return 0;
}