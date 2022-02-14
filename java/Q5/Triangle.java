import java.util.Scanner;
public class Triangle {

    public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
    int s1,s2,s3;
    boolean triangle=false;
    float p;
    double area;
	System.out.print("Enter the length of first side (in metres): ");
    s1 = sc.nextInt();
	System.out.print("Enter the length of second side (in metres): ");
	s2= sc.nextInt();
	System.out.print("Enter the length of third side (in metres): ");
    s3= sc.nextInt();
    if((s1+s2)>s3&&(s2+s3)>s1&&(s3+s1)>s2)
        triangle=true;
    if(triangle)
    {
        p=(s1+s2+s3)/2;
        area=Math.sqrt(p*(p-s1)*(p-s2)*(p-s3));
        if(s1==s2&&s2==s3){
            System.out.println("An equilateral triangle can be formed with the given dimesions");
            System.out.println("The area of the triangle is "+area+" m.sq.");
        }
        else if(s1==s2||s2==s3||s1==s3){
            System.out.println("An isosceles triangle can be formed with the given dimesions");
            System.out.println("The area of the triangle is "+area+" m.sq.");
        }
        else{
            System.out.println("A scalene triangle can be formed with the given dimesions");
            System.out.println("The area of the triangle is "+area+" m.sq.");
        }
    }
    else
        System.out.println("A triangle cannot be formed with the given dimensions.");
    }
}