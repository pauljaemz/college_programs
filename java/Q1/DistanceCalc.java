import java.util.Scanner;
import java.lang.Math;
public class DistanceCalc{
	public static void main(String[] args) {
		float x1,y1,x2,y2;
		double dist;
		Scanner s =new Scanner(System.in);
		System.out.print("Enter the location of x1 :");
		x1=s.nextFloat();
		System.out.print("Enter the location of y1 :");
		y1=s.nextFloat();
		System.out.print("Enter the location of x2 :");
		x2=s.nextFloat();
		System.out.print("Enter the location of y2 :");
		y2=s.nextFloat();
		dist=Math.sqrt((Math.pow((x2-x1),2))+(Math.pow((y2-y1),2)));
		System.out.println("The distance between (x1,y1) and (x2,y2) is "+dist+".");
	}
}