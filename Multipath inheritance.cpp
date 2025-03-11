#include<iostream>
using namespace std;
class grandparent
{
    private:int data;
    public:void setdata()
           {
            cin>>data;
           }
   void showdata()
   {
    cout<<data;
   }

};
class parent1:virtual public grandparent
{ };
class parent2:public virtual grandparent
{};
class child:public parent1,parent2
{
    public:void showdata1()
    {
        showdata();
    }
};
int main()
{
    child ch;
    ch.setdata();
    ch.showdata1();
    return 0;
}
