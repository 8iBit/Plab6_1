#include<iostream>
using namespace std;

int main()
{
    int even=0;
    int odd=0;
    int n=10;
    while ( n != 0 )
    {
        cout << "Enter an integer: ";
        cin >> n;
        if( n%2 == 0 && n!=0)
        {
            even++;
        }
        else if (n%2 !=0 && n!=0)
        {
            odd++;
        }
    }
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd << "\n";
    return 0;
}