import java.util.Scanner;
public class Armstrong {

    public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
    int digits,number,sum,l,h,temp,rem;

	System.out.print("Enter the lower limit : ");
    l = sc.nextInt();
	System.out.print("Enter the upper limit : ");
	h= sc.nextInt();
	System.out.println("The Armstrong numbers between "+l+" and "+h+" are-");
        for(number = l + 1; number < h; number++) {
            digits = 0;
            sum = 0;
            temp= number;
            while (temp>0) {
                temp /= 10;
                digits++;
            }

            temp = number;
            while (temp>0) {
                rem = temp % 10;
                sum += Math.pow(rem, digits);
                temp /= 10;
            }
            if (sum == number)
                System.out.print(number + " ");
        }
    }
}