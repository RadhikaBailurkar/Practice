//Write a program to convert Decimal to Binary
#include<stdio.h>
int main(){
  int n;
  printf("\nEnter Decimal No:");
  scanf("%d", &n);
  DecToBin(n);
  return 0;
}
void DecToBin(int n) {
  //array to store binary number
  int binaryNum[32];
  //counter for binary array
  int i = 0;
  while(n>0){
    //store remainder in binary array
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }
  //print binary array in reverse order
  printf("Binary No:");
  for(int j = i - 1;j>=0;j--){
    printf("%d",binaryNum[j]);
  }
}
