#include<bits/stdc++.h>
using namespace std;

class Person{
     
public:
    string name;
    int age;
    string occupation;

    Person(string n, int a, string o)
    {
        name=n;
        age=a;
        occupation=o;
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
    Person p1("Object1",1,"cpp1");
    Person p2("Object2",2,"cpp2");
    p1.displayInfo();
    p2.displayInfo();
}