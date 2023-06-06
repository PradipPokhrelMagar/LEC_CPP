# include <iostream>
using namespace std;
class friends{

    public:
    char Name[20];
    int Phnumber;
    char address[20];

void information()
{
    
    cout<<"Enter the name: \n";
    cin>>Name;
    cout<<"Enter your number: \n";
    cin>>Phnumber;
    cout<<"Enter your address: \n";
    cin>>address;

      
      
}

void display()
{
    
    cout<<"Your name is: "<<Name<<endl;
    cout<<"Your number is: "<<Phnumber<<endl;
    cout<<"You address is: "<<address<<endl;

}



};
int main()
{
    friends ram,sita,hari;
    ram.information();
    ram.display();
    
    return 0;
}