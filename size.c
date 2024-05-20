#include<stdio.h>
int main(){ 
int arr[10];
    printf("size of character  in : %d byte\n", sizeof( char ));
    printf("size of integer  in : %d byte \n", sizeof( int ));
    printf("size of decimal  in : %d byte \n", sizeof( float ));
    printf("size of long_integer  in : %d byte \n", sizeof( long  ));
    printf("size of double_integer  in : %d byte \n", sizeof( double ));
    printf("size of array_size  in : %d byte \n", sizeof( arr[10]));
    printf("size of long_long  in : %d byte \n", sizeof( long long ));
    
    return 0;
}