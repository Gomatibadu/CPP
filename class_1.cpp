#include<iostream
using namespace std;
class student
{
private:
    char name;
    int roll;
    float marks;
    void enter();
public:
    int age;
    void input()
    {
        cout<<"enter name, roll no, marks and age"<<endl;
        cin>>name>>roll>marks>>age;
    }
    void display()
    {
        cout<<name<<roll<<marks<<age;
    }
};
 int main()
{
    student ram, om;
    ram.input();
    ram.display();
    ram.enter();
    om.input();
    om.display();
    return 0;
}