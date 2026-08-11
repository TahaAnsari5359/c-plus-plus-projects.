#include <string>
#include <iostream>
using namespace std;
int main() {
    int a,b;
    string c;
    cout<<"simple command Based Calculator"<<endl;
    cout<<"Enter Num 1: "<<endl;
    cin>>a;
    cout<<"Enter num 2"<<endl;
    cin>>b;
    cout<<"Select Sign - +,-,*,/"<<endl;
    cin>>c;
    
    if (c == "+"){
        cout << "Addition Of " << a << " and " << b << " is " << a + b;
    }
    else if (c == "-"){
        cout<<"Substraction Of " << a << " and " << b << " is "<<a-b;
    }
    else if (c == "*"){
        cout<<"Multiplication Of " << a << " and " << b << " is "<<a*b;
    }
    else if (c == "/"){
        cout<<"Division Of " << a << " and " << b << " is "<<a/b;
    }
    
    else{
        cout<<"SomeThing Went Wrong";
    }
    

    return 0;
}
