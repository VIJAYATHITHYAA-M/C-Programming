#include<iostream.h>
#include<conio.h>
#include<string.h>
class pallindrome
{
public:
char *str1[20],str2[20];
void get()
{
cout<<"Enter the String:";
cin>>*str1;
}
}
void display()
{
strcpy(str2,*str1);
strrev(str2);
if(strcmp(str2,*str1)==0)
cout<<"Pallindrome":
else
cout<<"Not Pallindrome"
}
void main()
{
pallindrone p;
p.get();
p.display();
getch();
}
