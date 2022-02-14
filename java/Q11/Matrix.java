import java.util.*;
public class Matrix
{
  public static void main(String args[])
  {
  int i,j,row,col,tr=0;
  Scanner sc=new Scanner(System.in);
  System.out.print("Enter the number of rows :");
  row=sc.nextInt();
  System.out.print("Enter the number of columns :");
  col=sc.nextInt();
  int m[][]=new int[row][col];
  System.out.println("Input the values of the matrix in row-column arrangement :");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      m[i][j]=sc.nextInt();
      }
    }
  if(col==row){
    for(i=0;i<col;i++)
    {
      tr+=m[i][i];
    }
    System.out.println("The trace of the given matrix is : "+tr);
  }
  else
    System.out.print("The given matrix is not a square matrix. So, trace is not applicable");
  System.out.println("The transpose of the given matrix is :");
  for(i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
      System.out.print(m[j][i]+"\t");
    }
    System.out.println();
    }
  }
}