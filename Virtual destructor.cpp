#include<iostream>
using namespace std;

class vehicle
{
  public:vehicle()
{
    cout<<"\n constructor of vehicle";
}
virtual void showdata()
{
 cout<<" I am vehicle";
}
 virtual~vehicle()
{
 cout<<"Destructor of vehicle";
}
};
class car:public vehicle
{
    public:car()
    {
        cout<<"constructor of car";
    }
        void showdata()
    {
        cout<<"I am car";
    }
    ~car()
    {
        cout<<"Destructor of car";
    }
};
 int main()
 {
    vehicle*vp;
    vp=new vehicle;
    vp->showdata();
    delete vp;
    vp=new car;
    vp->showdata();
    delete vp;
    return 0;

 }


