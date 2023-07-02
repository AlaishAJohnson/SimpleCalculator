/*Libaries*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>
#include "calculator.h"

/*Namespace*/
using namespace std;

/*Main Body*/
int main()
{
    //Variables
    int option;
    double number_1, number_2;
    int num1;

    while (true)
    {
        //Create Menu & Options 
        cout << "----------------------" << endl;
        cout << setw(13) << "MENU" << setw(10) << endl;
        cout << "----------------------" << endl;
        //Options 
        cout << "1. " << setw(5) << "Addition" << endl;
        cout << "2. " << setw(5) << "Subtraction" << endl;
        cout << "3. " << setw(5) << "Multiplication" << endl;
        cout << "4. " << setw(5) << "Division" << endl;
        cout << "5. " << setw(5) << "Factorial" << endl;
        cout << "6. " << setw(5) << "Exponential" << endl;
        cout << "7. " << setw(5) << "Square Root" << endl;
        cout << "8. " << setw(5) << "Logarithim" << endl;
        cout << "9. " << setw(5) << "Trigonometric" << endl;
        cout << "10. " << "Equation Solving" << endl;
        cout << "0. " << setw(3) << "EXIT" << endl;
        cout << "----------------------" << endl;

        //Choose Option
        cout << "Select an option (1-6): ";
        cin >> option;

        //Menu Switch 
        switch(option)
        {
            /*Addition Option*/
            case 1:
                 cout << "----------------------" << endl;
                cout << "Enter the first number: ";
                cin >> number_1;
                cout << "Enter the second number: ";
                cin >> number_2;

                Addition(number_1,number_2);
                cout << "----------------------" << endl;
                cout << endl;
                break;
            /*Subtraction Option*/
            case 2: 
                cout << "----------------------" << endl;
                cout << "Enter the first number: ";
                cin >> number_1;
                cout << "Enter the second number: ";
                cin >> number_2;
                
                Subtraction(number_1, number_2);
                cout << "----------------------" << endl;
                cout << endl;
                break; 
            /*Multiplication Option*/
            case 3: 
                cout << "----------------------" << endl;
                cout << "Enter the first number: ";
                cin >> number_1;
                cout << "Enter the second number: ";
                cin >> number_2;

                Multiply(number_1, number_2);
                cout << "----------------------" << endl;
                cout << endl;
                break; 
            /*Division Option*/
            case 4:
                cout << "----------------------" << endl;
                cout << "Enter the first number: ";
                cin >> number_1;
                cout << "Enter the second number: ";
                cin >> number_2;

                Division(number_1, number_2);
                cout << "----------------------" << endl;
                cout << endl;
                break;
            /*Factorial Option*/
            case 5: 
                cout << "----------------------" << endl;
                cout << "Enter a number: ";
                cin >> num1; 

                Factorial(num1);
                cout << "----------------------" << endl;
                cout << endl;
                break;
            /*Exponential Option*/
            case 6: 
                cout << "----------------------" << endl;
                cout << "Enter the base: ";
                cin >> number_1;
                cout << "Enter the exponent: ";
                cin >> number_2; 
                
                Exponential(number_1, number_2);
                cout << "----------------------" << endl;
                cout << endl;
                break;
            /*Square Root Option*/
            case 7:
                cout << "----------------------" << endl;
                cout << "Enter a number: ";
                cin >> number_1; 

                SquareRoot(number_1);
                cout << "----------------------" << endl;
                cout << endl;
                break;
            /*Logarithm Option*/
            case 8:
                cout << "----------------------" << endl;
                cout << "Enter a number: ";
                cin >> number_1;

                Logarithm(number_1);
                cout << "----------------------" << endl;
                cout << endl;
                break;
            /*Trigonometric Option*/
            case 9: 
                cout << "----------------------" << endl;
                cout << "Enter a number: ";
                cin >> number_1;

                Trigonometric(number_1);
                cout << "----------------------" << endl;
                cout << endl;
                break;
            /*Equation Solving Option*/
            case 10: 
                cout << "----------------------" << endl;
                cout << "Enter the first number: ";
                cin >> number_1;
                cout << "Enter the second number: ";
                cin >> number_2;

                EquationSolving(number_1, number_2);
                cout << "----------------------" << endl;
                break;
            /*EXIT*/
            case 0:
                cout << "GoodBye!" << endl;
                return 0;
         }
    }
    return 0; 
}