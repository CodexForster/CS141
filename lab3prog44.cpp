
#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long int factorial = 1;

    cout << "Enter a +ve integer: ";
    cin >> n;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}
