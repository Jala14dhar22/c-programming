#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[100];
    printf("your string input sentance:");
    gets(str);
    int i,a;
   a=strlen(str);
    printf("reverse stracture of your string: ");
    for(i=a-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    
    return 0;
}