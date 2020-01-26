//Swapping of two nos in C,by using a temporary variable
#include<stdio.h>
int main(){
int x,y,t;
printf("Enter two numbers\n");
scanf("%d%d",&x,&y);
printf("Before Swapping\n First Int = %d\n Second Int = %d\n",x,y);
t = x;
x = y;
y = t;
printf("After Swapping\n First Int = %d\n Second Int = %d\n",x,y);
return 0;
}
