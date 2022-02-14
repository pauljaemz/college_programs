import java.io.*;
class ObjectCount
{
	static int objcount=0;
	ObjectCount(){
		objcount++;
	}
	public static void main(String args[]){
		ObjectCount obj1=new ObjectCount();
		ObjectCount obj2=new ObjectCount();
		ObjectCount obj3=new ObjectCount();
		System.out.println(objcount+" objects of ObjectCount class have been created.");
	}
}