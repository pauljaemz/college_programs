import java.util.*;
class Odd implements Runnable{ 
  public static int num; 
  Odd(int limit){
    num=limit;
  }
  public void run(){  
  for(int i=1;i<=num;i+=2)
    System.out.println("Odd : "+i);
  }  
}  
  
class Even implements Runnable{
  public static int num;  
  Even(int limit){
    num=limit;
  }
  public void run(){  
  for(int i=2;i<=num;i+=2)
    System.out.println("Even : "+i);  
 }  
}  
  
public class MultiThread{  
  public static void main(String args[]){ 
    System.out.print("Enter the limit : ");   
    Scanner sc=new Scanner(System.in);
    int limit=sc.nextInt();
    Thread t1=new Thread(new Odd(limit));  
    Thread t2=new Thread(new Even(limit));  
  
  t1.start();  
  t2.start();  
 }  
}  