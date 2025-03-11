#include<iostream>
using namespace std;
void calculate()
{
    cout<<"enter value of a & b";
    int a,b;
    cin>>a>>b;
    if(b==0)
    throw b;
    cout<<"Quotient="<<a/b;
}
 int main()
 {
    try
 {
    calculate();
 }
 catch(int c)
 {
    cout<<"division by zero is  indeterminate";
 }
  cout<< "program ended";
  return 0;
  }