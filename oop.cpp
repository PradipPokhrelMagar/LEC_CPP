# include <iostream>

using namespace std;

class Account{

public:
float salary = 60000;
Account(int x, int y)
{
    cout<<"The Account is: "<<x+y<<endl;

}
};
// base class

// class programmer: public Account{

// public:
// float bonus = 5000;

// };
// // derived class
// int main(void){

//     programmer p1;
//     Account a1;
//     cout<<"salary: "<<p1.salary<<endl;
//     cout<<"salary: "<<a1.salary<<endl;
//     cout<<"Bonus: "<<p1.bonus<<endl;
//     return 0;

// }
int main(){

    Account a1(3,4);
    return 0;
}