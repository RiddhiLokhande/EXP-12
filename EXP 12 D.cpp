//RIDDHI LOKHANDE
//EXP 12 D
//23070123107
#include<iostream>
using namespace std;
class student
{
int rollno;
char name[50];
double fee;
public:
student()
{
cout<<"Enter the RollNo:";
cin>> rollno;
cout<<"Enter the Name:";
cin>>name;
cout<<"Enter the Fee:"; cin>>fee; }
void display()
{
cout<<endl<< rollno <<"\t"<<name<<"\t"<<fee;
}
};
int main()

{
student s; //constructor gets called automatically when we create the object of the class
s.display();
return 0;
}
