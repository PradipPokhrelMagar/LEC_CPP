// # include <iostream>
// using namespace std;

// class parent{

//     public:

//     void print(){
//         cout<<"This is parent class";
//     }
// };

// class child : public parent{

//     void print(){
//         cout<<"This is child class";
//     }
// };

// int main(){

//     parent *Bptr;
//     child c1;
//     Bptr=& c1;
//     Bptr->print();
//    // Bptr.print();   This is not valid for pointer type object
   

//     return 0;
// }





# include <iostream>        // Next for the use of virtual function
using namespace std;

class parent{

    public:

   virtual void print(){
        cout<<"This is parent class";
    }
};

class child : public parent{

    void print(){
        cout<<"This is child class";
    }
};




int main(){

    parent *Bptr;
    child c1;
    Bptr=& c1;
    Bptr->print();
   // Bptr.print();   This is not valid for pointer type object
   

    return 0;
}