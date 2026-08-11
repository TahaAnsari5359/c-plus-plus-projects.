#include <iostream>
using namespace std;

int main(){
    cout<<"Table using loops"<<endl;


    int j;
    cout<<"Enter Number To generate Table"<<endl;
    cin>>j;

    for(int i = 1; i<=10; i++){
        cout<<j<< "*" <<i<< "=" <<j*i<<endl;
    }

return 0;
}
