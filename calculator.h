#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <iomanip>
#include <cmath>
/*Namespace*/
using namespace std;

/*Functions*/
void Addition(double x, double y);
void Subtraction(double x, double y);
void Multiply(double x, double y);
void Division(double x, double y);
int Factorial(int x);
void Exponential(double x, double y);
void SquareRoot(double x);
void Logarithm(double x);
void Trigonometric(double x);
void EquationSolving(double x, double y);

/*Prototypes*/

/*Addition*/
void Addition(double x, double y)
{
    double sum = x + y;
    cout << x << " + " << y << " = " << sum << endl;
}
/*Subtraction*/
void Subtraction(double x, double y)
{
   
    int option;
    cout << endl;
    cout << "----------------------" << endl;
    cout << setw(13) << "Choose" << setw(10) <<endl;
    cout << "----------------------" << endl;
    cout << "1. " << setw(5) << "number 1 - number 2" << endl;
    cout << "2. " << setw(5) << "number 2 - number 1" << endl;
    cout << ">> ";
    cin >> option;
    cout << endl;

    double difference;

    switch(option)
    {
        case 1: 
            difference = x - y;
            cout << x << " - " << y << " = " << difference << endl; 
            break;
        case 2: 
            difference = y - x;
            cout << y << " - " << x << " = " << difference << endl; 
            break;
    } 

}
/*Multiplication*/
void Multiply(double x, double y)
{
    double product = x * y;
    cout << x << " * " << y << " = " << product << endl;
}
/*Division*/
 void Division(double x, double y)
 {
    int option;
    cout << endl;
    cout << "----------------------" << endl;
    cout << setw(13) << "Choose" << setw(10) <<endl;
    cout << "----------------------" << endl;
    cout << "1. " << setw(5) << "number 1 / number 2" << endl;
    cout << "2. " << setw(5) << "number 2 / number 1" << endl;
    cout << ">> ";
    cin >> option;
    cout << endl;
    double quotient;

    switch(option)
    {
        case 1: 
            quotient = x / y;
            cout << x << " / " << y << " = " << quotient << endl; 
            break;
        case 2: 
            quotient = y / x;
            cout << y << " / " << x << " = " << quotient << endl; 
            break;
    } 
    
 }
    
/*Factorial*/
int Factorial(int x)
{
    int factorial = 1;

    //default answer
    if(x == 0 || x == 1)
    {
        return factorial;
    }

    for(int i = 2; i <= x; i++)
    {
        factorial = factorial * i; 
    }
    
    cout << x << "! = " << factorial << endl;
    return 0; 
}
/*Exponential*/
void Exponential(double x, double y)
{
    double product;
    if(y == 2)
    {
        product = x * x;
        cout << x << "^" << y << " = " << product << endl; 
    }
    else
    {
        product = 1;
        for(int i = 0; i <= y; i++)
        {
            product = product * x; 
        }
        cout << x << "^" << y << " = " << product << endl;
    }  
}
/*Square Root*/
void SquareRoot(double x)
{
    double root;
    if(x > 0)
    {
        root = sqrt(x);
        cout << "Square Root " << x << " = " << root << endl;
    }
    else 
    {
        cout << "Square root cannot be taken for a negative number..." << endl;
    }
}
/*Logarithm*/
void Logarithm(double x)
{
    int option;
    cout << endl;
    cout << "----------------------" << endl;
    cout << setw(13) << "Choose" << setw(10) <<endl;
    cout << "----------------------" << endl;
    cout << "1. " << setw(5) << "Natural Log" << endl;
    cout << "2. " << setw(5) << "Base 10" << endl;
    cout << ">> ";
    cin >> option;
    cout << endl;
    double result;

    switch(option)
    {
        case 1: 
            result = log(x);
            cout << "ln(" << x << ")" << " = " << result << endl; 
            break;
        case 2: 
            result = log10(x);
          cout << "log10(" << x << ")" << " = " << result << endl;  
            break;
    } 
}
/*Trigonometric*/
void Trigonometric(double x)
{
    int option;
    cout << endl;
    cout << "----------------------" << endl;
    cout << setw(13) << "Choose" << setw(10) <<endl;
    cout << "----------------------" << endl;
    cout << "1. " << setw(3) << "Sine" << endl;
    cout << "2. " << setw(5) << "Cosine" << endl;
    cout << "3. " << setw(5) << "Tangent" << endl;
    cout << "4. " << setw(5) << "ArcSine" << endl;
    cout << "5. " << setw(5) << "ArcCosine" << endl;
    cout << "6. " << setw(5) << "ArcTangent" << endl;
    cout << ">> ";
    cin >> option;
    cout << endl;
    double result;
    double results2Radians = x * (M_PI / 180.0);

    switch(option)
    {
        case 1: 
            result = sin(results2Radians);
            cout << "sin(" << x << ")" << " = " << result << endl; 
            break;
        case 2: 
            result = cos(results2Radians);
            cout << "cos(" << x << ")" << " = " << result << endl;  
            break;
        case 3: 
            result = tan(results2Radians);
            cout << "tan(" << x << ")" << " = " << result << endl;  
            break;
        case 4:
            result = asin(results2Radians);
            cout << "arcsin(" << x << ")" << " = " << result << endl;  
            break;
        case 5:
            result = acos(results2Radians);
            cout << "arccos(" << x << ")" << " = " << result << endl;  
            break;
        case 6:
            result = atan(results2Radians);
            cout << "arctan(" << x << ")" << " = " << result << endl;  
            break;
    } 
}
/*Equation Solving*/
void EquationSolving(double x, double y)
{
    int option;
    cout << endl;
    cout << "----------------------" << endl;
    cout << setw(13) << "Choose" << setw(10) <<endl;
    cout << "----------------------" << endl;
    cout << "1. " << setw(3) << "Linear" << endl;
    cout << "2. " << setw(5) << "Quadratic" << endl;
    cout << ">> ";
    cin >> option;
    cout << endl;
    
    switch(option)
    {
        /*Linear Equation*/
        case 1:
            if(x == 0)
            {
                if(y == 0){cout << "Infinite Solution. " << endl;}
                else{cout << "No Solution. " << endl;}
            }
            else 
            {
                double solution = -y / x;
                cout << "Solution: " << endl;
                cout << "x = " << solution << endl;
            }
        /*Quadratic Equation*/
        case 2:
            double z;
            cout << "Enter the third number: ";
            cin >> z;
            double discriminant = y * y - 4 * x * z;

            if(discriminant > 0)
            {
                double root1 = (-y + sqrt(discriminant) / (2 * x));
                double root2 = (-y - sqrt(discriminant) / (2 * x));

                cout << "Solutions: " << endl;
                cout << "x1 = " << root1 << endl;
                cout << "x2 = " << root2 << endl;
            }
            else if(discriminant == 0)
            {
                double root = -y / (2 * x);
                cout << "Solution: x = " << root << endl;
            }
            else {cout << "No Real Solutions. " << endl;}
            break;
    }
}

#endif