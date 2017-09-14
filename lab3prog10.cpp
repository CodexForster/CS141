#include<iostream>
#include<cctype>
using namespace std;

int main() {
	char a='a';
	cout<<"Enter an aplhabet";
	cin>>a;
	if(isalpha(a))
 	 {
	  if(isupper(a))
	   cout<<"\nThe entered alphabet is in upper case";
	  else
	   cout<<"\nThe entered alphabet is in lower case";
	 }
	else
	cout<<"\nEnter an alphabet";
	return 0;
}
