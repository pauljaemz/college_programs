import java.util.*;
public class BaseConversion{
	public static void main(String[] args) {
		System.out.print("Enter the integer value for base conversion : ");
		Scanner sc=new Scanner(System.in);
		int decimal=sc.nextInt();
		String binary = Integer.toString(decimal, 2);
		String octal = Integer.toString(decimal, 8);
		String hex = Integer.toString(decimal, 16);
		System.out.println("Binary\t\t: " + binary);
		System.out.println("Octal\t\t: " + octal);
		System.out.println("Hexadecimal\t: " + hex);
	}
}