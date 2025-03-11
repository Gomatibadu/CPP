#include<iostream.h>
#include<fstream.h>
using namespace std;
class student
{
    char name[30];
    int roll;
    public:void read_data()
           {
            cout<<"enter name and roll";
            cin>>name>>roll;
           }
        void show_data
        {
            cout<<"name and roll="<<name<<roll;

        }
};
 void write2file()
 {
    student stu;
    ofstream outfile("record.dat",ios::binary/ios::app);
    stu.read_data();
    outfile.write(& stu,size of(stu));
 }
 void readfromfile()
 {
    student stu;
    ifstream infile("record.dat",ios::binary);
    while(!infile.eof())
    {
        if(infile.read(& stu,sizeof(stu)>0))
        stu.show.data();
    }
 }
 void readonerec()
 {
    student std;
    int n;
    ifstream infile("record.dot",ios::binary);
    cout<<"enter record no.to read";
    cin>>n;
    infile.seekg((n-1)*size of(stu));
    infile.read(& stu,size of(stu));
    stu.showdata()
 }
  int main()
  {
    int choice;
    cout<<"1 for writing into file";
    cout<<"\n 2 for read all records";
    cout<<"\n 3 for reading one record";
    cout<<"\n 4 exit from file";
    while(true)
    { 
        cout<<"enter choice no:";
        cin>>choice;
        switch(choice)
        {
            case 1:write 2 file();
                   break;
            case 2:read from file();
                   break;
            case 3 :readonerec();
                   break;
            case 4 :exit(0);
                   break;
            default:cout<<"invalid choice";
                    exit(0);
      

          }
    }
      return 0;
  }