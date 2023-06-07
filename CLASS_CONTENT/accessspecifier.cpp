# include <iostream>
using namespace std;

class vehicle{
    private:


    int platenumber;
    public:


    vehicle (int pnum){
        platenumber=pnum;
        
       cout<<"The number of scooter is:"<<platenumber<<endl;
    }
};
int main(){
    vehicle scooter(8634);
    
    return 0;

}