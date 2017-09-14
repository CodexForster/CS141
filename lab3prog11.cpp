#include<iostream>
#include<cctype>
using namespace std;

int main() {
	int a =1;
	cout<<"enter the week number: ";
	cin>>a;
	switch(a){
	case 1: cout<<"Monday";
		break; 
	case 2: cout<<"Tuesday";
		break;
	case 3: cout<<"Wednesday";
		break;
	case 4: cout<<"Thursday";
		break;
	case 5: cout<<"Wednesday";
		break;
	case 6: cout<<"Thursday";
		break;
	case 7: cout<<"Friday";
		break;
	default: cout<<"\nEnter an number between 1 and 7";
		break;
	}
	return 0;
}
