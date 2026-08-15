
#include <iostream>
using namespace std;
int main() {
    //Array Examples - 
    cout<<"Arrays in c++"<<endl;
    int data[4] = {11,22,33,44};
    int marks[4];
    marks[0] = 55;
    marks[1] = 88;
    marks[2] = 77;

    cout<<"value at index 2  "<<data[2]<<endl;
    cout<<"value at index 0 "<<marks[0]<<endl;
    // changing value at index 0 55 to 56
    marks[0] = 56;
    cout<<"Value at index 0 55 changes to "<<marks[0]<<endl;

    cout<<"\n";
    //printing array using loops - 
    cout<<"printing elements in Array Data using for loop "<<endl;
    for (int i = 0; i<5; i++){
        cout<<data[i]<<endl;
    }

    cout<<"\n";
    cout<<"using While loop"<<endl;

    int j = 0;
    while(j<=4){
        cout<<data[j]<<endl;
        j++;
    }

    cout<<"\n";
    cout<<"using do while loop"<<endl;

    int k = 0;
    do {
        cout << data[k] << endl;
        k++;
    }
    while(k <= 4);

    return 0;
}
