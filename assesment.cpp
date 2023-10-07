// assesment 2
#include<iostream>
using namespace std;
class food
{
	public:
 	int choice,food,Quantity,total;
 	char name[250];
 	void order()
 	{
	cout<<"\t\t\t\t----------Top Tech. Food Ordering.------------"<<endl<<endl;
	cout<<"Please enter your name:";
	cin>>name;
	cout<<"Hello "<<name<<endl<<endl;
	
	cout<<"What woud you like to order?"<<endl;
	cout<<"\t\t\t\t----------Top Tech. Food Ordering.------------"<<endl<<endl;
	cout<<"1) Pizzas."<<endl;
	cout<<"2) Burger."<<endl;
	cout<<"3) Sandwich."<<endl;
	cout<<"4) Rolls."<<endl;
	cout<<"5) Biryani."<<endl<<endl;
}
	void swit(){
	cout<<"Please enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"1. Veg.Cheese Pizza Rs.450\n";
			cout<<"2. Veg.Pizza Rs.150\n";
			cout<<"3. Veg. Magarita Pizza Rs.500\n";
			cout<<"Please enter which pizzas you would like to have?:"<<endl;
			cin>>food;
			cout<<"Enter your Quantity:";
			cin>>Quantity;
			cout<<"\t\t\t\t--------Your order--------\n"<<endl;
			switch(food)
			{
				case 1:cout<<"1.Veg.Cheese Pizza \n";
				       total=Quantity*450;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes"<<endl;
		               cout<<"Thank you for ordering from tops tech fast food"<<endl;
		               break;
		        case 2:cout<<"2. Veg.Pizza"<<endl;
				       total=Quantity*150;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 3:cout<<"3.Veg. Magarita Pizza\n";
				       total=Quantity*500;
		               cout<<"Total bill is :"<<total;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		               
	    	}
	        break; // case 1 end
			case 2:
			cout<<"1.Veg.Burgers Rs.100\n";
			cout<<"2.Veg.Cheese Burgers Rs.200\n";
			cout<<"3. Veg.Special Burgers Rs.500\n";
			cout<<"Please enter which Burgers you would like to have?: "<<endl;
			cin>>food;
			cout<<"Enter your Quantity:";
			cin>>Quantity;
			cout<<"\t\t\t\t--------Your order--------\n";
			switch(food)
			{
				case 1:cout<<"1.Veg.Burgers \n";
				       total=Quantity*100;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 2:cout<<"2.Veg.Cheese Burgers\n";
				       total=Quantity*200;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 3:cout<<"3.Veg.Special Burgers\n";
				       total=Quantity*500;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		               
	    	} 
	        break; // case 2 end
			case 3:
			cout<<"1.Club Sandwich Rs.240\n";
			cout<<"2.Veg.crispy Sandwich Rs.160\n";
			cout<<"3.Extream Veg.Sandwich Rs.100\n";
			cout<<"Please enter which Sandwich you would like to have?:"<<endl;
			cin>>food;
			cout<<"Enter your Quantity:";
			cin>>Quantity;
			cout<<"\t\t\t\t--------Your order--------\n";
			switch(food)
			{
				case 1:cout<<"1.Club Sandwich \n";
				       total=Quantity*240;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 2:cout<<"2.Veg.crispy Sandwich\n";
				       total=Quantity*160;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 3:cout<<"3.Extream Veg.Sandwich\n";
				       total=Quantity*100;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		               
	    	} 
	        break; // case 3 end
			case 4:
			cout<<"1.Veg. Roll Rs.240\n";
			cout<<"2.Veg.crispy Roll Rs.160\n";
			cout<<"3.Extream Veg.Roll Rs.100\n";
			cout<<"Please enter which Roll you would like to have?: \n";
			cin>>food;
			cout<<"Enter your Quantity:";
			cin>>Quantity;
			cout<<"\t\t\t\t--------Your order--------\n";
			switch(food)
			{
				case 1:cout<<"1.Veg. Roll \n";
				       total=Quantity*240;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 2:cout<<"2.Veg.crispy Roll\n";
				       total=Quantity*160;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 3:cout<<"3.Extream Veg.Roll\n";
				       total=Quantity*100;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		               
	    	} 
	        break; // case 4 end
			case 5:
			cout<<"1.Veg. Biryani Rs.60\n";
			cout<<"2.Veg.crispy Biryani Rs.100\n";
			cout<<"3.Extream Veg.Biryani Rs.130\n";
		    cout<<"Please enter which Biryani you would like to have?: \n";
			cin>>food;
			cout<<"Enter your Quantity:";
			cin>>Quantity;
			cout<<"\t\t\t\t--------Your order--------\n";
			switch(food)
			{
				case 1:cout<<"1.Veg. Biryani \n";
				       total=Quantity*60;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 2:cout<<"2.Veg.crispy Biryani\n";
				       total=Quantity*100;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food";
		               break;
		        case 3:cout<<"3.Extream Veg.Birayani\n";
				       total=Quantity*130;
		               cout<<"Total bill is :"<<total<<endl;
		               cout<<"Your Order Will be delivered in 40 minutes\n";
		               cout<<"Thank you for ordering from tops tech fast food\n\n";
		               break;
		               
	    	} 
	        break; // case 5 end
			default: printf("wrong input..!Please try again.");
 	}
 	}
};
int main()
{
	food get;
	get.order();
	get.swit();
}
