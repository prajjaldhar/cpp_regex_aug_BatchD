#include<bits/stdc++.h>
using namespace std;

class Person{
     
public:
    string name;
    int age;
    string occupation;
   
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
    p1.name="Prajjal";
    p1.occupation="xyz";
    p1.age=145;
    cout<<p1.age<<"\n";
    p1.displayInfo();
}