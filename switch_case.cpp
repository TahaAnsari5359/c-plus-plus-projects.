#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Age"<<endl;
    cin>>age;

    switch (age){
        case 10:
        cout<<"Your Age is 10"<<endl;
        break;

        case 20:
        cout<<"Your Age is 20"<<endl;
        break;

        default:
        cout<<"No Other Switch Cases"<<endl;
        break;
    }
    return 0;
}
