#include<stdio.h>
int main(){
   int i,j,a,b,x[10][10];
   printf("enter you the row and coloum number ");
   scanf("%d %d",&a,&b);
   printf("your matrix %dx%d",a,b);
   

   
   for(i=0;i<a;i++){
        for(j=0;j<b;j++)
      scanf("%d",&x[i][j]);
   }
    for(i=0;i<a;i++){
       for(j=0;j<b;j++)
      printf("%d \t",x[i][j]);
      printf("\n");
   }
   printf("the transpote matrix %d x%d\n",b,a);
    for(i=0;i<b;i++){
       for(j=0;j<a;j++)
      printf("%d \t",x[j][i]);
      printf("\n");
   }
   return 0;
}