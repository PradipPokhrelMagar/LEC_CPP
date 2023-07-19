# include <iostream>
using namespace std;

class Student{

    public:

    
    int age;
    int rollno;
    int mark;

    void display_mark(int m)

    {
        mark=m;
        cout<<"The marlk is "<<mark<<endl;

    }


};
class Test : public Student{

    int internal_marks;
};

class Result : public Test{

void print(){

    cout<<"The result is ="<<mark<<endl;
}

};

int main()
{   Student s;
    s.display_mark(100);
    Result a;
    a.display_mark(80);

    return 0;
}
