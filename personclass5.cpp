#include<bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int age;
    string occupation;
public:
     Person()
    {
        name="undefined";
        age=0;
        occupation="undefined";
    }
    
     void getdetails()
    {
        cin>>name;
        cin>>age;
        cin>>occupation;
    }

   
    void displayInfo()
    {
        cout<<"Name:"<<name<<"\n";
        cout<<"Age:"<<age<<endl;
        cout<<"Occupation:"<<occupation<<endl;

    }
};
int main()
{
    //datatype object
    Person p1;
    Person p2;
    p1.displayInfo();//object initial state
    p2.displayInfo();
}