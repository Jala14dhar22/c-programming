#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[100];
    printf("your string input sentance:");
    gets(str);
    printf("length of your input sentance :%d \n",strlen(str));
    puts(str);
    return 0;
}