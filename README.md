# EXP-12
## Aim

- To study and implement Constructors and Destructors. 

## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
 
(A) <br> 
```cpp
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


## Conclusion
We learnt to study and implement Constructors and Destructors. 
