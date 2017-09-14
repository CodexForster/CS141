#include <iostream> 
using namespace std;
int main()
{ 	
		int mark[5], i;
		float sum=0,avg; 
		cout<<"Enter marks obtained in 5 subjects :";
		for(i=0; i<5; i++) 
		{ 		
			cin>>mark[i];
			sum=sum+mark[i];
		}
		avg=sum/5;
		cout<<"Your Grade is ";
		if(avg>90) 
		cout<<"A";  	
		else if(avg>80 && avg<=90) 	
		cout<<"B";  	
		else if(avg>70 && avg<=80) 	
		cout<<"C"; 	
		else if(avg>60 && avg<=70)
		cout<<"D"; 	
		else if(avg>50 && avg<=60)
		cout<<"E"; 
		else
		cout<<"F";	
	
		return 0;
}
