# include<iostream>
using namespace std;

class A{
    int x;
    public:
    void getnum(int x){
       this-> x=x;
    }
    void shownum(){
        cout<<x;
    }
};
int main(){
    A obj1,obj2;
    obj1.getnum(5);
    obj1.shownum();
    obj2.getnum(7);
    obj2.shownum();
    return 0;


}
