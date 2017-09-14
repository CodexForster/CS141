#include <iostream> 
using namespace std;
main() 
{
	
	cout<<"\n\n\n\tElectricity Board Charges\n";
	cout<<"\n\tTo Discourage Large Consumption of energy\n\n"; 
	char name[20]; 
	cout<<"\n\nEnter USER name :-";
	cin>>name; 
	cout<<"\n\nEnter Number of Units Consumed:-";
	float unit;
	cin>>unit;
	float tc; 
	if(unit<=100)
	tc=unit*0.40; 
	else if(unit<=300)
	tc=unit*0.50;
	else 
	tc=unit*0.60;
	float surchase=0; 
	if(tc>250) 
	surchase=tc*0.15; 
	float total_cost; 
	total_cost = 500 + surchase + tc; 
	cout<<"\n\nYOUR BILL AMOUNT IS "<<total_cost;
	return 0;
	}
