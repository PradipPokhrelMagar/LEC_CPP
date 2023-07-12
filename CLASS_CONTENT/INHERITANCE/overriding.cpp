# include <iostream>
using namespace std;

class base{
    protected:
    int n,m;
    public:

    void print(){
        cout<<"This is print function of base class";
    }

};

class derived : public base{
    public:
    int i,j;

    void print(){
        cout<<"This is the print function of derived class";
    }


};

int main(){
    base b1;
    derived d1;
   d1.print();
//    b1.print();
    return 0;

}