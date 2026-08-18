
#include <iostream>
using namespace std;

void swaps(int* a, int* b ){
    int c = *a;
    *a = *b;
    *b = c;
}


int main() {
    cout<<"call by reference"<<endl;
    int x,y;
    cout<<"Enter 1st num: "<<endl;
    cin>>x;
    cout<<"Emter 2nd num: "<<endl;
    cin>>y;

    cout<<"before swaped x = "<<x<< " Y, = " <<y<<endl;
    swaps(&x,&y);
    cout<<"After swaped x = "<<x<< " Y, = " <<y<<endl;
    return 0;
}
