# include <iostream>
# include "Person.h"
using namespace std;
void Person::getdata(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
}
void Person::display(){
    cout<<"\n Name"<<name;
    cout<<"\n Age"<<age;
    
}