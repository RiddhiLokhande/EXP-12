
# EXP-12
## Aim

- To study and implement Constructors and Destructors. 

## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
• The name of the constructor is same as its class name.

• Constructors are mostly declared in the public section of the class though it can be
declared in the private section of the class.

• Constructors do not return values; hence they do not have a return type.

• A constructor gets called automatically when we create the object of the class.

• Constructors are used when variables need to be initiated before object is called.

• Constructors can be overloaded.

• Constructor cannot be declared virtual.

### TYPES OF CONSTRUCTORS:
• Default Constructor 🡪 Default constructor is the constructor which doesn’t take any
argument. It has no parameters. It is also called a zero-argument constructor.

• Parametrized Constructor 🡪 To create a parameterized constructor, simply add
parameters to it the way you would to any other function. When you define the
constructor’s body, use the parameters to initialize the object.

• Copy Constructor 🡪 A copy constructor is a member function that initializes an
object using another object of the same class. In simple terms, a constructor which
creates an object by initializing it with an object of the same class, which has been
created previously is known as a copy constructor.

(A) <br> 
```cpp
//NAME-RIDDHI LOKHANDE
//ENTC B2
//23070123107
//EXP 12 A
#include<iostream> 
#include<string>
using namespace std; 
class Data {
    string name;
    int roll_no;
    char dept[50];
    char division;

    public:
    Data() {
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll Number: ";
        cin>>roll_no;
        cout<<"Department: ";
        cin>>dept;
        cout<<"Division: ";
        cin>>division;
    }
    void display() {
        cout<<"\n"<<"DETAILS:"<<"\n"<<name<<"  "<<roll_no<<"  "<<dept<<"  "<<division<<"\n";
    }
};
int main() 
{
    Data d1;
    d1.display();
} 

```

### Output
<img width="630" alt="EXP 12 A OUTPUT" src="https://github.com/user-attachments/assets/f8bdf8fa-323b-4c25-95e6-b9effad6a592">

(B) <br> 
```cpp
//NAME-RIDDHI LOKHANDE
//ENTC B2
//23070123107
//EXP 12 B
#include<iostream>
using namespace std;
class Num
{
    public:
    Num(int c, int d)
    {
        if(c>d)
        {
            cout<<c<<" is greater.";
        }
        else 
        {
            cout<<d<<" is greater.";
        }
    }
};
int main()
{
    Num n1(4,3);
} 
```

### Output
<img width="617" alt="EXP 12 B OUTPUT" src="https://github.com/user-attachments/assets/d69346ea-6c6a-4e39-adcd-05ca2daf8a38">

(C) <br> 
```cpp
//NAME-RIDDHI LOKHANDE
//ENTC B2
//23070123107
//EXP 12 C
#include<iostream>
using namespace std;
int count=0;
class destruct{
    public:
    destruct()
    {
        count++;
        cout<<"Number of objects created: "<<count<<"\n";
    }
    ~destruct()
    {
        count--;
        cout<<"Number of objects destroyed: "<<count<<"\n";
    }
};
int main()
{
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
} 
```
### Output
<img width="623" alt="EXP 12 C OUTPUT" src="https://github.com/user-attachments/assets/ce453b44-00bc-459f-923e-56da2d450016">

(D) <br>
```cpp
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
```
### Output
<img width="638" alt="EXP 12 D OUTPUT" src="https://github.com/user-attachments/assets/540c4692-560e-46e8-b47c-af10862a6993">


(E) <br>
```cpp
//RIDDHI LOKHANDE
//23070123107
//EXP 12 E
#include<iostream>
using namespace std;
class student
{
int rno;
char name[50];
double fee;
public:
student();
void display(); };
student::student()
{
cout<<"Enter the RollNo:";
cin>>rno;
cout<<"Enter the Name:";
cin>>name;
cout<<"Enter the Fee:";
cin>>fee;
}
void student::display()
{
cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
int main()
{
student s;
s.display();
return 0;
}
```
### Output
<img width="633" alt="EXP 12 E OUTPUT" src="https://github.com/user-attachments/assets/9dac9467-d6a4-4a09-90b8-9a264b8ac5fe">


## Conclusion
We learnt to study and implement Constructors and Destructors. 
