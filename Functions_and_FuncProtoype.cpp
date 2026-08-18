
#include <iostream>
using namespace std;


int sum(int a, int b); // This is Function Prototyping

int main() {
    cout<<"Functions"<<endl;
    
    int num1, num2;
    cout<<"Enter Number 1: "<<endl;
    cin>>num1;
    cout<<"Enter Number 2: "<<endl;
    cin>>num2;

    cout<<"The sum od 2 number is: "<<sum(num1,num2);

   

    return 0;
}

int sum(int a, int b){ // functions
    int c = a+b;
    return c;

}
