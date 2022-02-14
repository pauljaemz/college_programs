import java.util.*;
class MergeArray
  {
  public static void main(String args[])
    {
    int arr1_len,arr2_len,i;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the length of Array 1 :");
    arr1_len=sc.nextInt();
    System.out.println("Enter the length of Array 2 :");
    arr2_len=sc.nextInt();
    int arr1[]=new int[arr1_len];
    
    int arr2[]=new int[arr2_len];
    int merged_arr[]=new int[arr1_len+arr2_len];
    System.out.println("Input the elements of Array 1 :");
    for(i=0;i<arr1_len;i++)
    {
      arr1[i]=sc.nextInt();
      merged_arr[i]=arr1[i];
    }
    System.out.println("Input the elements of Array 2 :");
    for(i=0;i<arr2_len;i++)
    {
      arr2[i]=sc.nextInt();
      merged_arr[arr1_len+i]=arr2[i];
    }
    System.out.println("The merged array is :");
    for(i=0;i<arr1_len+arr2_len;i++)
    {
      System.out.print(merged_arr[i]+"\t");
    }
  }
  } 