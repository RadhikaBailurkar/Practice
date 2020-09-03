//Array of Objects

class Student{
  public int rollno;
  public String name;
  Student(int rollno, String name){
    this.rollno = rollno;
    this.name = name;
  }
}

public class GFG{
  public static void main(String[] args){
  System.out.println("Enter upto 5 Students rollno and name");
  Student[] arr = new Student[1];
  arr[0] = new Student(1,"ABC");
  arr[1] = new Student(2, "XYZ");
  for(int i = 0;i<arr.length;i++)
  System.out.println("Element at " + i + " : " +
                        arr[i].roll_no +" "+ arr[i].name);
}
}
