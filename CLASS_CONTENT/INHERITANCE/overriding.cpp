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

    void display(){
        cout<<"This is the print function of derived class";
    }


};

int main(){
    base b1;
    derived d1;
    // b1.display();    This is error
     b1.print();
    return 0;

}