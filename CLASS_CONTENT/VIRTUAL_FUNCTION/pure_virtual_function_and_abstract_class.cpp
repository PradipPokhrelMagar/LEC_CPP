# include <iostream>
using namespace std;

class parent{

    public:

    virtual int num()=0;       // pure virtual function
};

int main()
{
    // parent p1;    // ERROR[object of pure virtual function can't be created]

    parent *p1;     // pointer type object is alloweded
    

}