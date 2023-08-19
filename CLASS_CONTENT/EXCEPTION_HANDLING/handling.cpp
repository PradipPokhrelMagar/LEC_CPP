#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter value of a and b:\n";
    cin>>a>>b;
    int x=(a-b);
    try{
        if(x !=0)
        {
            cout<<"result:"<<(a/(a-b));

        }
        else 
        throw(x);


    }

    catch(int i)
    {
        cout<<"division by zero is not allowed"<<endl;

    }
    cout<<"next statement"<<endl;
    return 0;
}