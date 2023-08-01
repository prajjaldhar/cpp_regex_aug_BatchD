#include<bits/stdc++.h>
using namespace std;

class Person{
private:
    string name;
    int age;
    string occupation;
    
public:
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
    // cout<<"Person age is:"<<p1.age<<endl;
    // cout<<"Person occupation is:"<<p1.occupation<<endl;
    // cout<<"Person name"<<p1.name<<endl;
    p1.getdetails();
    p1.displayInfo();
}