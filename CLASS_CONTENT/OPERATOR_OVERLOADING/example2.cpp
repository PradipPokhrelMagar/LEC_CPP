#include<iostream>
using namespace std;
class hello{
    private:
    int a,b;
    public:
    void getdata(){
        cout<<"enter the value of a and b:";
        cin>>a>>b;
        
    }
     void display(){
        cout<<a<<endl;
        cout<<b<<endl;
     }
     void operator ++(){
        a=a+b+2;
        b=b+20;
     }
};
int main(){
    hello ha;
    ha.getdata();
    ++ha;
    ha.display();
    ++ha;
    ha.display();
     ++ha;
   /* ha.display(); ++ha;
    ha.display(); ++ha;
    ha.display(); ++ha;
    ha.display(); ++ha;
    ha.display(); ++ha;
    ha.display(); ++ha;
    ha.display();*/
    return 0;

}