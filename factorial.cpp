//factorial of number
#include <iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial of "<< n <<"="<<factorial;
    return 0;
}

//Enter the number:6
//Factorial of 6=720