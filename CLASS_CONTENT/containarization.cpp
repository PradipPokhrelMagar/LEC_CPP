# include <iostream>
using namespace std;
class A{
    public:
    int data;
    void getdata(){
        cout<<"Enter the value of data:";
        cin>>data;
        
    
    cout<<" The value of data is:"<<data<<endl;
    }
};
class B{
    public:
    A a;
    int  b;
    void getdata(){
        

        cout<<"Enter the value of b";
        cin>>b;
        a.getdata();
    }
    void showdata(){
        
    
    
    cout<<"The value of b is:",b;
    }

    



};
int main(){
    B b1;
    b1.getdata();
    b1.showdata();

return 0;


}