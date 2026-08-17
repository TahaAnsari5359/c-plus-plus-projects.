#include <string>
#include <iostream>
using namespace std;

struct employee{

    // in sturct we can use all value
    string name;
    int EmployeeId;
    int salary;
    string gender;
};

union rashan{
    // in union only 1 value can be taken
    int rice;
    int sugar;
    int wheat;
};




int main() {
    cout<<"Structure"<<endl;
    struct employee taha; //We can Add Multiple Employee
    taha.name = "Taha";
    taha.EmployeeId = 1;
    taha.salary = 120000;
    taha.gender = "male";
    cout<<taha.name<<endl;
    cout<<taha.EmployeeId<<endl;
    cout<<taha.salary<<endl;
    cout<<taha.gender<<endl;

    cout<<"\n";

    cout<<"unions: "<<endl;
    union rashan r1;
    r1.rice = 4;
    cout<<r1.rice<<endl;
    cout<<r1.sugar<<endl;

    cout<<"\n";

    cout<<"Enum: "<<endl;

    enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast; //can do storing in variable
    cout<<m1<<endl;
    cout<<lunch<<endl; // directly acessing also
    cout<<dinner<<endl;
    




    return 0;
}
