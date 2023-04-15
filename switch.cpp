#include <iostream>
using namespace std;
int main()
{
//simple calculator 
int a, b;
char op;
cout<<"enter 2 numbers"<<endl;
cin >> a >> b;
cout << "enter your operater : ";
cin >> op;

switch (op)
{
case '+':
    cout << "add : "<<a+b << endl;
    break;
case '-':
    cout << "sub :"<<a-b << endl;
    break;

case '*':
    cout << "Mul: " <<a*b<< endl;
    break;

case '/':
    cout << "Division: " <<a/b<< endl;
    break;

default:
    cout << "unknown operater  " << endl;
    break;
    }
}