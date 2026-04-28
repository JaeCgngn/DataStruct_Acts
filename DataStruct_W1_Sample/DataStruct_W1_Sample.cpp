// DataStruct_W1_Sample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
#include <iostream>
using namespace std;
*/

/*
void twobeep(void);

int main()
{
    char ch;
    twobeep();
    cout << "Type any character";
    cin >> ch;
    twobeep();
}

void twobeep(void) //function definition
{
    cout << "\a"; //1st alarm
                   
    cout << "\a"; //2nd alarm
}*/

/*
string square(void); 

int main()
{
    cout << "***SQUARE OF A NUMBER***"; square();
    cout << "\n***TRY ANOTHER ONE***"; square();
}
string square(void)
{
    int a, sq;
    cout << "\nEnter a number: "; cin >> a;
    sq = a * a;
    cout << "\nThe square of " << a << " is " << sq;
}*/

/*
int addem(int a, int b);
int n1, n2;
int main()
{
    cout << "Enter first value: ";
    cin >> n1;
    cout << "Enter second value: ";
    cin >> n2;
    cout << "The total is " << addem(n1, n2);
}

int addem(int n1, int n2)
{
    return n1 + n2;
}*/

//---------------------------------------
// ACTIVITY
//---------------------------------------

#include <iostream>
using namespace std;

int n1, fact;

int factorial(int n1);

string tryAgain;

int main() 
{
    cout << "Enter Number: ";
    cin >> n1;

    if (n1 < 0) {
        cout << "\n Please input positive integers only!";
    }
    else
        cout << "Factorial of " << n1 << " is equals to " << factorial(n1) << "\n";
    
    cout << "Try Again? [y/n] \n";
    cin >> tryAgain;
    if (tryAgain == "y") {
        main();
    }
    else if (tryAgain == "n") {
        return 0;
    }
    else {
        cout << "Please enter a valid input: ";
        cin >> tryAgain;
    }
 
}

int factorial(int n1)
{
    if (n1 <= 1) {
        return 1;
    }
    else {
        return n1 * factorial(n1 - 1);
         
    }
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu