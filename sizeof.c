/*
sizeof(): it is a unary operatot and it is used to find the size of the given variable.
format:-
sizeof(variable_name);
*/
#include<stdio.h>
void main(){
    int a;float b; char c; double d;

    printf("The size of integer data type is %lu bytes\n",sizeof(a));
    printf("The size of float data type is %lu bytes\n",sizeof(b));
    printf("The size of character data type is %lu bytes\n",sizeof(c));
    printf("The size of double data type is %lu bytes\n",sizeof(d));

}