
#include <iostream>
using namespace std;
int main() {
    cout<<"Pointer Arithmetic"<<endl;
    int arr[4] = {1,2,3,4};

    int*p = arr;
    cout<<"The value or arr[0] is: "<<*p<<endl;
    cout<<"The value or arr[1] is: "<<*p+1<<endl;
    cout<<"The value or arr[2] is: "<<*p+2<<endl;
    cout<<"The value or arr[3] is: "<<*p+3<<endl;



    return 0;
}
