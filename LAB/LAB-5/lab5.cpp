# include <iostream> 
using namespace std;

class complex{
    
    public:

    int real;
    int imag;

    

    int constant (){
        real=3;
        return real;
    }
    int imaginary(int n){
        imag=n;

    }
    void display(int a, int b);




};
void complex::display(int a, int b){
    cout<<"The value of complex no  is="<<a<<"+"<<"i"<<b<<endl;
};

int main(){

    complex m;
    int a,b;
    a=m.constant();
    b=m.imaginary(4);
    m.display(a,b);
    return 0;
}