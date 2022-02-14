public class Calculator{
	public static void main(String[] args) {
		int num1=Integer.parseInt(args[0]);
		int num2=Integer.parseInt(args[1]);
		System.out.println("Number 1 : "+num1);
		System.out.println("Number 2 : "+num2);
		System.out.println("The sum is "+(num1+num2));
		System.out.println("The difference is "+(num1-num2));
		System.out.println("The product is "+(num1*num2));
		System.out.println("The quotient is "+(num1/num2));
		System.out.println("The remainder is "+(num1%num2));
	}
}