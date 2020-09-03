//WAP to print the pos of the smallest no of n nos in array
class MinMax{

  public static void main(String[] args) {
  int [] arr = {45, 89, 4, 20, 1};
  int small=arr[0];
  int large=arr[0];
  for(int i=1; i<arr.length ; i++){
  if(small>arr[i]){
    small=arr[i];

  }
}
  for(int i=0;i<arr.length;i++){
    if(arr[i]>large){
      large=arr[i];
    }
  }

System.out.println("smallest: "+small);
System.out.println("largest: "+large);


  }
}
