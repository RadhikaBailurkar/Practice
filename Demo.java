class Demo{
public static void main(String[] args){
  //Here we have declared array + allocated space in the memory + already know the size of the array so
  // we have used array Literal
int[] intArray = new int[]{1,2,3,4,5};
System.out.println("Output1: Array Literal");
//Accessing the elements using for loop
for(int i = 0;i<intArray.length; i++)
System.out.println("Element at index :"+intArray[i]);

// Java program to illustrate creating an array
// of integers,  puts some values in the array,
// and prints each value to standard output.
int[] arr = new int[5];
arr[0]=90;
arr[1]=91;
arr[2]=92;
arr[3]=93;
arr[4]=94;
System.out.println("Output2:Accessing Java Array Elements using for Loop");
// accessing the elements of the specified array
      for (int i = 0; i < arr.length; i++)
         System.out.println("Element at index " + i +
                                      " : "+ arr[i]);
}

}
