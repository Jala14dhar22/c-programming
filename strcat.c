#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s1[15],s2[15];
    printf("enter your e-mail id(without use common think):");
    gets(s1);
printf("----------|\n");
gets(s2);
    strcat(s1,s2);
     printf("ready your e-mail addrass: \n");
    puts(s1);
    return 0;
}