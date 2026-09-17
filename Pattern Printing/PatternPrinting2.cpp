#include <iostream>
using namespace std;
int main() {

    cout<<"Pattern Printing"<<endl;
    cout<<"Printing A B C D"<<endl;

    int n = 3;
    for(int i = 0; i<n; i ++){
        char ch = 'A';
        for(int j = 0; j <n; j ++){
            cout<<ch<<" "; 
            ch+=1;
        }
        cout<<endl;
    }

    

    return 0;
}
