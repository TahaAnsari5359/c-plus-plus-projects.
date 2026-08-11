#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Control Structure - IF, ELSE IF, ELSE"<<endl;
    
    cout<<"Enter Age: "<<endl;
    cin>>age;
    
    if (age < 18 and age > 1){
        cout<<"Sorry You Cannot Vote"<<endl;
        
    }
    else if (age < 1){
        cout<<"InValid Age"<<endl;
        
    }
    else{
        cout<<"You Can Vote"<<endl;
    }
  cout<<"Exiting Program..."<<endl;
}
