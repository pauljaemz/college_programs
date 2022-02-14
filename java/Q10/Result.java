import java.util.*;
import java.lang.*;
class Student
{
  public String name;
  public String batch;     
  public int roll_no;
  public void read(){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter student details below-");
    System.out.print("Student Name\t: ");
    name=sc.nextLine();
    System.out.print("Batch\t\t: ");
    batch=sc.nextLine();
    System.out.print("Roll Number\t: ");
    roll_no=sc.nextInt();
  }
  public void display(){
    System.out.println(String.format("%-15s", "Student Name")+
      ": "+name+"\n"+String.format("%-15s", "Batch")+
      ": "+batch+"\n"+String.format("%-15s", "Roll Number")+
      ": "+roll_no);
  }
   
}
public class Result extends Student{
  int marks[]=new int[5];
  int total=0;
  char grade;
public void read(){
  super.read();
  for(int i=0;i<5;i++){
    System.out.print("Enter marks for Subject "+(i+1)+" : ");
    Scanner sc=new Scanner(System.in);
    marks[i]=sc.nextInt();
  }
}
public void gradecalc(){
  for(int n:marks){
    total+=n;
  }
  float avg=(float)total/5;
  if(avg>=90)
    grade='A';
  else if(avg>=80)
    grade='B';
  else if(avg>=70)
    grade='C';
  else if(avg>=60)
    grade='D';
  else if(avg>=50)
    grade='E';
  else
      grade='F';

}
public void display(){
  super.display();
  for(int i=0;i<5;i++)
    System.out.print(String.format("%9s|", "Subject "+(i+1)));
  System.out.println ();
  for(int n:marks)
    System.out.print(String.format("%-9s|", n));
  System.out.println ();
  System.out.println("Total Marks : "+total);
  System.out.println("Grade : "+grade);
}
public static void main(String args[])
   {
    Result r1=new Result();
    r1.read();
    r1.gradecalc();
    r1.display();

   }
}
