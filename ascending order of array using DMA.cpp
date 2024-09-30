#include<iostream>
using namespace std;
int main()
{
 int i,j,temp,*ptr;
 ptr=new int[5];
 cout<<"enter 5 integers";
 for(i=0; i<5; i++)
 cin>>ptr[i];
 for(i=0;i<4;i++)
 {
 for(j=i+1;j<5;j++)
 {
 if(ptr[j]<ptr[i])
 {
 temp=ptr[i];
 ptr[i]=ptr[j];
 ptr[j]=temp;
 }
 }
 }
 cout<<("numbers in ascending order are:");
 for(i=0; i<5;i++)
 {
 cout<< ptr[i]<<"\t";
 }
 delete[]ptr;
 return 0;
 }
