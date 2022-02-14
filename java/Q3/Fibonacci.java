import java.util.Scanner;
public class Fibonacci{
	public static void main(String[] args){
		int limit,a=0,b=1,c=0;
		Scanner s=new Scanner(System.in);
		limit=s.nextInt();
		if(limit>0)
		{
				System.out.println(a+" ");
				System.out.println(b+" ");
				c=a+b;
				do{
				System.out.println(c+" ");
				a=b;
				b=c;
				c=a+b;
				}while(c<=limit);
			
		}
		
		else
			System.out.print("Invalid Input");
		}
	}
				
		
