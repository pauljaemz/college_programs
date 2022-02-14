
import java.util.*;
public class Number{
	public int rev=0;
	public int sum=0;
	public int value;
	Number (int num){
		this.value=num;
	}
	public int digit_count(){
		int temp=this.value;
		int count=0;
		while(temp>0){
			temp/=10;
			count++;
		}
		return count;
	}
	public void digit_sum(){
		for(int temp=this.value;temp>0;temp/=10){
			int dig=temp%10;
			this.sum=this.sum+dig;
		}
	}
	public void reverse(){
		int dig;
		int temp=this.value;
		for(int i=0;i<this.digit_count();i++){
			dig=temp%10;
			this.rev=(this.rev*10)+dig;
			temp/=10;
		}
	}
	public static void main(String args[])
	{
		System.out.print("Please enter an integer : ");
		Scanner sc=new Scanner(System.in);
		Number numl=new Number(sc.nextInt());
		numl.digit_sum();
		numl.reverse();
		System.out.println("The number you entered is "+numl.value+"."); 
		System.out.println("The sum of digits is "+numl.sum+"."); 
		System.out.println("The reverse is "+numl.rev+"."); 
	}
} 
