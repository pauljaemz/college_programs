import java.util.*;
public class NumberSort{
	public static void sort(int inputarray[])
	{
		int i,j,temp;
		for(i=0;i<inputarray.length-1;i++)
		{
			for(j=i+1;j<inputarray.length;j++)
			{
				if(inputarray[i]>inputarray[j])
				{
					temp=inputarray[i];
					inputarray[i]=inputarray[j];
					inputarray[j]=temp;
				}
			}
		}

	}
	public static void main(String args[])
	{
		while(true)
		{
			System.out.print("How many numbers would you like to include? ");
			Scanner sc=new Scanner(System.in);
			int len=sc.nextInt();
			if(len<10){
				System.out.println("Atleast 10 numbers required!");
				continue;
			}
			int[] arr=new int[len];
			for(int i=0;i<len;i++)
			{
				arr[i]=sc.nextInt();
			}
			sort(arr);
			System.out.println("The smallest element in the array : "+arr[0]);
			System.out.println("The largest element in the array : "+arr[len-1]);
			System.out.println("The second largest element in the array : "+arr[len-2]);

			System.exit(0);
		}
	}
}