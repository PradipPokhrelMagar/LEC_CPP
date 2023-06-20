# include <iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    int c;
    public:
    A(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void operator -()
    {
        a=-a;
        b=-b;
        c=-c;
    }
    void display(){
        cout<<"\n The value after operator overloading is:"<<a<<b<<c<<endl;
        

    }

};
int main(){
    A obj(1,2,3);
    -obj;
    obj.display();
    return 0;

}