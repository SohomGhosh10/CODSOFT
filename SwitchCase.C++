//Task 2
// Calculator using switch case 

#include<iostream>
using namespace std;
#include<math.h>

int main(){

    int a , b; // Number inputs
    char c;
    cout << "Making a manual calculator" << endl;

    cout << "Enter the value for a" << endl;
    cin >> a;
    
    cout << "Enter the value for b" << endl;
    cin >> b;

    // Users choice
    cout << "Enter the operator (+, -, *, /): ";
    cin >> c;

    switch(c){
        // For addition
    case '+':
      cout << a << " + " << b << " = " << a + b << endl;
      break;

        // For subtraction
    case '-':
      cout << a << " - " << b << " = " << a - b << endl;
      break;

        // For Multiplication
    case '*':
      cout << a << " * " << b << " = " << a * b << endl;
      break;

       // For division
    case '/':
      cout << a << " / " << b << " = " << a / b << endl;
      break;

       // Default case
    default:
      cout << "Invalid operator" << endl;
      break;
    }
}