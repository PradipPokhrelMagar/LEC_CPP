# include <iostream> 
using namespace std;

class Course{
    protected:

    int no_of_syllabus;


};
class Mathematics : public Course{



};

class science : public Course{
    protected:
    int mark;
    public:
    void readdata()
    {
        cout<<"Enter the mark in science class "<<endl;
        cin>>mark;
    }
    void display(){
        cout<<"The mark in science class is ="<<mark<<endl;
    }



};

class Engineering : public Course 
{


};

class Physics : public science{

    public:
    int mark;
    void readdata()
    {
        cout<<"Enter the mark in derived class physics "<<endl;
        cin>>mark;
    }

    void display(){

        cout<<"The mark in derived Physics class is ="<<mark<<endl;
    }


};

class Chemistry : public science{
    private:
    int mark;
    void readdata()
    {
        cout<<"Enter the mark in derived chemistry class"<<endl;
        cin>>mark;
    }

    void display()
    {
        cout<<"The mark in derived chemistry class is ="<<mark<<endl;
    }


};

int main()
{
    science *s;
    Physics p;
    s = &p;
    s->readdata();
    s->display();
    p.readdata();
    p.display();

    return 0;

}