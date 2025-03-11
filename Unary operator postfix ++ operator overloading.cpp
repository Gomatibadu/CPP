#include<iostream>
using namespace std;
class counter
{
    int count;
    public:counter()
           {
            count=0;
           }
    void operator ++(int);
    void display()
    {
        cout<<"count="<<count<<endl;
    }
};
 void counter::operator ++(int)
 {
    count ++;
 }
 int main()
 {
    counter c;
    cout<<"initial value of counter="<<endl;
    c.display();
    c++; 
    c++;
    cout<<"After increment count="<<endl;
    c.display();
    return 0;

 }
