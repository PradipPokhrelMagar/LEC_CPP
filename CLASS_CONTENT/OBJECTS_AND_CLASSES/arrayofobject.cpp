# include <iostream>
using namespace std;

class student{
    int age;
    int rollno;
    

    public:
    int getinformation()
    {   int i;
        for(i=0;i<5;i++){
            cout<<"Enter the age:\n";
            return age;
            
            cout<<"Enter the roll number:\n";
            return rollno;
            
        }
    
    
    
    }
    void display()
{
    int i;

    for(i=0;i<5;i++){
        cout<<"The age is:"<<age<<endl;
        continue;
        cout<<"The roll no is:"<<rollno<<endl;
    }
}



};
int main()
{
    student s[5];
    int i;
    s[i].getinformation();
    s[i].display();
    return 0;


}