# include <iostream>
using namespace std;
main()
{
   int num,i=1;
    cout  <<"Enter a number : ";
    cin >>  num;
   while( i  <=  num  )
    {
        if( num % i == 0 )
        {
            int j = 1, k = 0;
            while( j  <=  i)
            {
                if( i % j == 0 )
                k++;
                j++;
            }
            if( k == 2 )
            {cout<<"\nA prime factor of the entered number is - ";
            cout  << i<<"  ";}
            }
        i++;
    }
 
}
