#include<bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int age;
    string occupation;
public:
     Person(string n, int a, string o)
    {
        name=n;
        age=a;
        occupation=o;
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
    Person p1("Object1",1);
    Person p2("Object2",2);
    p1.displayInfo();//object initial state
    p2.displayInfo();
    p1.getdetails();
    p1.displayInfo();//after getdetails
}