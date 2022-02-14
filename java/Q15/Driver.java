import java.util.*;
class ComplexNumber{
	double real;
	double imag;
	ComplexNumber(double real,double imag){
		this.real=real;
		this.imag=imag;
	}
}
public class Driver{
	public static ComplexNumber add(ComplexNumber cmp_num1,ComplexNumber cmp_num2){
		ComplexNumber result=new ComplexNumber(cmp_num1.real+cmp_num2.real,cmp_num1.imag+cmp_num2.imag);
		return result;
	}
	public static String print_complex_number(ComplexNumber cmp_num){
		return "("+cmp_num.real+"i + "+cmp_num.imag+"j)";
	}
	public static void main(String args[]){
		double r,i;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the real part of complex number 1 : ");
		r=sc.nextDouble();
		System.out.print("Enter the imaginary part of complex number 1 : ");
		i=sc.nextDouble();
		ComplexNumber cmp_num1=new ComplexNumber(r,i);
		System.out.print("Enter the real part of complex number 2 : ");
		r=sc.nextDouble();
		System.out.print("Enter the imaginary part of complex number 2 : ");
		i=sc.nextDouble();
		ComplexNumber cmp_num2=new ComplexNumber(r,i);
		ComplexNumber result=add(cmp_num1,cmp_num2);
		System.out.println(print_complex_number(cmp_num1)+" + "+print_complex_number(cmp_num2)+" = "+print_complex_number(result));
		
	}
}