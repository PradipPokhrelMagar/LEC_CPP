# include <iostream>
using namespace std;

class sathiharu(){
    
    
    
    public:

    string name;
    string address;
    int age;
    sathiharu(){
        cout<<"constructor call bhayo ta"<<endl;
    }

public:
    void ghumeprogram(){
        cout<<" oi sathi ghumna jam  "<<name<<"bujis"<<age<<"ko umerma hike jana sakincha"
        <<address<<"jane ta hola ni?<<";
    }

};
int main(){
    sathiharu f1,f2;
    // firstfriend.name="Ram";
    // firstfriend.address="KTM"
    // firstfriend.age=25;
    return 0;
}