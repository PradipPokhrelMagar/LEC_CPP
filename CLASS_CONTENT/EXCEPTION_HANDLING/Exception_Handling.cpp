# include <iostream>
using namespace std;

int main()
{

    float x= -1.5;
    cout<<"Before try \n";

    try{
        cout<<"Inside try \n";
        if(x<0)
        {
            throw x;
            cout<<"After throw \n";

        }

    cout<<"After throw\n";
    }
    
    catch(int x){

        cout<<"Exception caught,Int type \n";
    }
    catch(float x)
    {
        cout<<"Exception caught,float type\n";
    }
    cout<<"After catch\n";

    return 0;


}