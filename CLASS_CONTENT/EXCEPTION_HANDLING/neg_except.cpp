# include<iostream>
#include<cmath>
using namespace std;

class Number {
    private:
    double num;
    public:
    class NEG{};    //Exception class

    void readnum();
    double sqroot();

};
void Number :: readnum()
{
    cout<<"Enter number:";
    cin>>num;
}
double Number :: sqroot()

{
    if(num<0)
    throw NEG();
    else 
    return (sqrt(num));
}
int main()
{
    Number n1;
    double res;
    n1.readnum();
    try
    {cout<<"\n Trying to find square root ..";
    res=n1.sqroot();
    cout<<"\n square root is :"<<res<<endl;
    cout<<"Sucess ... Exception is not raised"<<endl;
    }
    catch(Number::NEG)
    {
        cout<<"\n squre root of negative number "
        "Not possible!"<<endl;
    }
    return 0;

    }
    

    

