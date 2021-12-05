#include <iostream>

using namespace std;


int num,  fac = 1;
int main()
{
    cout << "Enter Number : ";
    cin >> num;

    for(int i= 1; i <= num; i++)
    {
        fac *= i;
    }

    cout << " Factorial of all Number that user input : " << fac;

    return 0;
}
