#include <iostream>
using namespace std;

void main(){
   int input;

    cout << "What function would you like to use /n 1. Calculator /n 2. Suprise" << endl;
    cin >> input;
    if{
        cin = 1; 
        calculator();
    }
    else{
        cin = 2;
        cout << "Suprise!" << endl;
    }
 return 0;   



int calculator(){
    double num1, num2;
    char operation;

//user input

cout << "Enter first number:";
cin>> num1;
cout << "Enter and operator:"
cin >> operation;
cout >> "Enter second number:"
cin>>num2;

switch (operation){
//Addition Operation
    case '+':
    cout << "Result:" << num1 + num2 <<endl;
    break;

    case  '-':
    cout << "Result:" << num1 - num2 << endl;
    break;

    case '*':
    cout << "Result:" << num1 * num2 << endl;
    break;

    case '/':
     if num2 != 0 {
      cout << "Result:" << num1/num2 << endl;
     }
     else{ 
      cout<< "Error: Division by zero" << endl;
     }
    break;
default
    cout << "Error: Invalid Operator" << endl;

return 0;
}
}