#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class file
{
char name[20];
int rollno;
public:
void get();
void show();
};
void file::get()
{
  ofstream out("students");
cout<<"\n Enter the rollno and name:";
cin>>rollno;
out<<rollno;
cin>>name;
out<<name;
out.close();
}
void file::show()
{
  ifstream in("students");
cin>>rollno;
cin>>name;
cout<<"\n\n\t"<<"rollno""<<"\n"<<"name"<<"\n";
cout<<"\t"<<rollno<<"\t"<<name;
in.close()
  }
void main()
{
  clrscr();
  file f;
f.get();
f.show();
getch();
}
