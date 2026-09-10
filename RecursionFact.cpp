
#include <iostream>
using namespace std;

int fact(int n){
    if (n<=1){
        return 1;
    }
    return n* fact(n-1);
}


int main()
{
    int a;
    cout<<"Recursion and Recursive Function :- "<<endl;
    cout<<"FActorial using recursion - "<<endl;
    cout<<"Enter Number"<<endl;
    cin>>a;
    cout<<"The Factorial is " << fact(a);

    return 0;
}
