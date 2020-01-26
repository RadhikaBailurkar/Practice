//Swapping of two numbers without 3rd variable
#include<stdio.h>
int main(){
int x = 10,y = 5;
x = x + y; // x = 15
y = x - y; // y = 10
x = x - y; // x = 5
printf("After Swapping: x = %d,y = %d",x,y);
return 0;
}
