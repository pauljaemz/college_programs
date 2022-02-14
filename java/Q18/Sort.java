import java.util.*;
public class Sort{
	public static void sortnumbers(int inputarray[])
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
		System.out.println("The numbers in sorted order :");
		for(i=0;i<inputarray.length;i++)
			System.out.print(inputarray[i]+ "\t");

	}
	public static void main(String args[])
	{
		System.out.print("How many numbers would you like to include? ");
		Scanner sc=new Scanner(System.in);
		int len=sc.nextInt();
		int[] arr=new int[len];
		for(int i=0;i<len;i++)
		{
			arr[i]=sc.nextInt();
		}
		sortnumbers(arr);

	}
}