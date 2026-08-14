
#include <iostream>
using namespace std;
int main() {
    
    // & - ADDRESS OF OPERATOR
    // * - DEREFERENCE OPERATOR 


    cout<<"POINTERS IN C++"<<endl;
    int a = 20;
    int* b = &a;
    cout<<"Memory Address at b - "<<b<<endl;
    cout<<"Data at b - "<<*b<<endl;

    cout<<"\n";

    cout<<"POINTERS TO POINTERS"<<endl;
    int **c = &b;
    cout<<"Memory Address at c - "<<c<<endl;
    cout<<"Data at c - "<<**c<<endl;

    return 0;
}
