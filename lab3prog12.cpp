#include<iostream>
#include<cctype>
#include<stdio.h>
using namespace std;

int main() {
	int a=1;
	cout<<"enter a month number";
	cin>>a;
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	cout<<"\nThe number of days in the entered month number is 31";
	else if(a==2)
	cout<<"\nThe number of days in the entered month number is 28";
	//i'm not considering a leap year here
	else
	cout<<"\nThe number of days in the entered month number is 30";
	return 0; 
}
