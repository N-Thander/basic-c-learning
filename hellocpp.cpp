#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secrectPassword = sp;
    }

    void printDetails()
    {
        cout << "The name is:  " << this->name << " and his salary is: " << this->salary << endl;
    }

    void getSecrectPassword()
    {
        cout << "The secrect password of employee is " << this->secrectPassword << endl;
    }

private:
    int secrectPassword;
};


class Programmer : public Employee
{
    public:
        int errors;
};






int main()
{
    // cout<<"Hello there\n";
    // cout<<"new line"<<endl;
    // cout<<"third line"<<endl;

    // Camel Case Notation
    // int marksInCP = 95;
    // cout<<"The marks of the student is "<<marksInCP<<endl;

    // Taking user input:

    // int a, b;
    // cout<<"Enter a number" <<endl;
    // cin>>a;

    // cout<<"Enter a number" <<endl;
    // cin>>b;

    // cout<<"The sum of the numbers is:"<<a+b<<endl;

    // Basic operations
    //  cout<<"a + b = "<<a+b<<endl;
    //  cout<<"a - b = "<<a-b<<endl;
    //  cout<<"a * b = "<<a*b<<endl;
    //  cout<<"a / b = "<<(float)a/b<<endl;

    // If - else

    // int age;
    // cout<<"Enter age"<<endl;
    // cin>>age;

    // if (age >= 18)
    // {
    //     cout<<"You are an adult";
    // }
    // else if (10 <= age && age < 18)
    // {
    //     cout<<"You are an teenager";
    // }
    // else
    // {
    //     cout<<"You are a child";
    // }
    // cout<<endl;

    // switch case

    // int age;
    // cout<<"Enter age"<<endl;
    // cin>>age;

    // switch (age)
    // {
    // case 10:
    //     cout<<"The age is 10 years"<<endl;
    //     break;

    // case 20:
    //     cout<<"The age is 20 years"<<endl;
    //     break;

    // default:
    //     cout<<"You are neither 10 nor 20 years old"<<endl;
    //     break;
    // }

    // loops

    // int index = 0;
    //  while (index < 20)
    //  {
    //      cout<<"Index value: "<<index<<endl;
    //      index ++;
    //  }

    // do
    // {
    //     cout<<"Index value: "<<index<<endl;
    // } while (index > 50);

    // for (int i = 0; i < 30; i++)
    // {
    //     cout<<"Value of i: "<<i<<endl;
    // }

    // functions

    // int a, b;
    // cout<<"Enter a number" <<endl;
    // cin>>a;

    // cout<<"Enter a number" <<endl;
    // cin>>b;

    // cout<<"Sum of the numbers is: "<<add(a, b)<<endl;

    // Arrays : Collection of similar data type

    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //     cin>>marks[i];
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of"<<i<<"th student is "<<marks[i]<<endl;
    // }

    // 2D array

    // int arr2D[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr2D[i][j]<<endl;
    //     }

    // }

    // type casting

    // int a = 50;
    // cout<<(float) a/10<<endl;

    // String: strings are a data type in c++

    // string name = "Aether";

    // cout<<"The name of the traveller is "<<name<<endl;
    // cout<<"The length of the name of the traveller is "<<name.length()<<endl;
    // cout<<"A sub string of the name of the traveller is "<<name.substr(2,5)<<endl;
    // cout<<"The name of the traveller is "<<name<<endl;

    // Pointers

    // int a = 100;
    // int * ptr;
    // ptr = &a;

    // cout<<"The value of a is "<<*ptr<<endl;
    // cout<<"The address of a is "<<ptr<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of ptr is "<<&ptr<<endl;

    // object oriented programming

    // Employee nas;
    // nas.name = "Nasir";
    // nas.salary = 200;
    // nas.printDetails();
    // cout<<"The name is:  "<<nas.name<<" and his salary is: "<<nas.salary<<endl;

    // Constructor
    // Employee nascons("nasir", 1000, 46846);
    // nascons.printDetails();
    // nascons.getSecrectPassword();

    return 0;
}
