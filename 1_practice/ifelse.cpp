# include <iostream>

using namespace std;

int main(){

    int a;

    cout<<" Enter an integer: ";
    cin>>a;

    if(a!=0){
        if(a>0){
            cout<<" The number is positive:";
        }
        if(a<0){
            cout<<"The number is negative:";
        }

    else{
        cout<<"The number iasneither positive nor negative. ";
    }  
    return 0;  
    }


    
}