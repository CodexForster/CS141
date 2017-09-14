#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int m;
    cout<<"enter the number - ";
    cin>>s;
    cout<<"\nThe first digit of the number is - "<<s[0];
    m=strlen(s);
    cout<<"\nThe last digit of the number is - "<<s[m-1];
 	return 0;
}
