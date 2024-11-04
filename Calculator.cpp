#include <iostream> 
using namespace std;

int calculator();

int main() {
   int input;

    cout << "What function would you like to use \n 1. Calculator \n 2. Suprise" << endl;
    cin >> input;
    if  (input == 1){
       
        calculator();
    }
    else if (input == 2){
        ;
        cout << "Suprise!" << endl;
    }
    else {
        cout <<  "Enter either 1 or 2" << endl;
    }
 return 0;
}


int calculator() {
    double num1, num2;
    char operation;


    //user input

    cout << "Enter first number:";
    cin>> num1;
    cout << "Enter and operator:";
    cin >> operation;
    cout << "Enter second number:";
    cin >> num2;

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
     if (num2 != 0) {
      cout << "Result:" << num1/num2 << endl;
     }
     else{ 
      cout<< "Error: Division by zero" << endl;
     }
    break;
default:
    cout << "Error: Invalid Operator" << endl;
}
return 0;

}