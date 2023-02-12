/*
Ternary Operators:ternary operator for decision making in place of longer 
if and else conditional statements.
The ternary operator take three arguments:

The first is a comparison argument
The second is the result upon a true comparison
The third is the result upon a false comparison

It helps to think of the ternary operator as a shorthand way or writing an if-else statement. 
Here’s a simple decision-making example using if and else:

format of ternary oparator:
condition ? value_if_true : value_if_false


*/
#include<stdio.h>
void main(){
    int a=10,b =20,c;
    c  = (a<b)?a:b;
    printf("%d",c);
}