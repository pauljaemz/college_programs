class User{
	static int num_id=1;
	String emp_id="EMP"+num_id;
	User(){
		System.out.println("Constructor for class User invoked.");
		num_id++;
	}
	String get_id(){
		return emp_id;
	}
}
class Customer extends User{
	int customer_class=1;
	//1 means online and 2 means offline
	boolean subscribed_rewards=false;
	Customer(){
		System.out.println("Constructor for class Customer invoked.");

	}
	int get_customer_class(){
		return customer_class;
	}
	boolean get_subscribed_rewards(){
		return subscribed_rewards;
	}
}
class BetaTester extends Customer{
	int product_selected=1;
	BetaTester(){
		System.out.println("Constructor for class BetaTester invoked.");
	}
	int get_product_selected(){
		return product_selected;
	}
	public static void main(String args[]){
		BetaTester jiotv001=new BetaTester();
		System.out.println("Customer code : "+jiotv001.get_id()+"\n"+
			"Customer class : "+jiotv001.get_customer_class()+"\n"+
			"Rewards Subscription : "+jiotv001.get_subscribed_rewards()+"\n"+
			"Product selected : "+jiotv001.get_product_selected());
	}
}