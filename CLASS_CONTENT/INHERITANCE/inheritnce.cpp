# include <iostream>
using namespace std;

class parent{

    public:
    int id_protected;

};
class child:private parent{

    public:
    
       void assign(int id){
        id_protected=id;
       }

    
    void display(){
        cout<<"id_protected is"<<id_protected<<endl;
    }

};
int main()
{
    child obj1;
    obj1.assign(2);
    obj1.display();
    return 0;
}