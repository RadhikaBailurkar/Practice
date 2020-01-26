//C Program to swap two arrays without using Temp VAriable
//Bitwise OR operator
#include<stdio.h>
int main(){

  int Size, i, a[10], b[10];
  printf("\nEnter the size of the Array");
  scanf("%d", &Size);
  printf("\nEnter the 1st Array Elements");
  for(i = 0;i< Size;i++){
    scanf("%d",&a[i]);
  }
  printf("\nEnter the 2nd Array Elements");
  for(i=0;i<Size;i++){
    scanf("%d",&b[i]);
  }
//Swapping two arrays
  for(i=0;i<Size;i++){
    a[i] = a[i]^b[i];
    b[i] = a[i]^b[i];
    a[i] = a[i]^b[i];
  }
  printf("\n a[%d] Array Elements After Swapping", Size);
  for(i=0;i<Size;i++){
    printf("\n%d\t",a[i]);
  }
  printf("\n\n b[%d] Array Elements After Swapping",Size);
  for(i=0;i<Size;i++){
    printf("\n%d\t",b[i]);
  }
  return 0;
}
