import java.lang.Math;
class Volume{
	double vol(double a){
		double v=Math.pow(a,3);
		return v;
	}
	double vol(double r,double h){
		double v=3.14*Math.pow(r,2)*h;
		return v;
	}
	double vol(double l,double b,double h){
		double v=l*b*h;
		return v;
	}
	public static void main(String args[]){
		Volume shape= new Volume();
		double cube_vol=shape.vol(22);
		System.out.println("The volume of cube :"+cube_vol+" cubic metres");
		double rect_vol=shape.vol(2,16);
		System.out.println("The volume of rectangular box :"+rect_vol+" cubic metres");
		double cyli_vol=shape.vol(22,40,6);
		System.out.println("The volume of cylinder :"+cyli_vol+" cubic metres");
	} 
}