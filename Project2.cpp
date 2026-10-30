#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char package; // stores the selected package (A, B, or C)
    int messageUnits; // stores the number of message units

    double costA; // price of package A
    double costB; // price of package B
    double costC; // price of package C
    double selectedCost; // price of the package the customer selected

    char again; // stores user choice to run the program again

    cout << fixed << setprecision(2);

    do {  

    cout << "Which package are you shopping for? (enter A, B, C)? ";
    cin >> package;

        // Validate input
        while (package != 'A' && package != 'a' && package !='B' && package !='b' && package != 'C' && package != 'c') {

            cout << "Invalid package. Enter A,B, or C: ";
            cin >> package;

    }

    cout << "How many message units(1 - 672)? ";
    cin >> messageUnits;

        // Validate input
        while (messageUnits < 1 || messageUnits > 672) { 

            cout << "Invalid message units. Enter 1-672: ";
            cin >> messageUnits;
     
    }

    // Calculate the prices of all three packages; Package C is unlimited
    costA = 19.99; 
    costB = 39.99; 
    costC = 59.99; 

     if (messageUnits > 20) {
            costA = costA + (messageUnits - 20) * 0.25;
        }

    if (messageUnits > 100) {
            costB = costB + (messageUnits - 100) * 0.10;
        }

        // Use switch to determine the selected package cost
        switch(package) {
            case 'A':
            case 'a':
                selectedCost = costA;
                break;

            case 'B':
            case 'b':
                selectedCost = costB;
                break;

            case 'C':
            case 'c':
                selectedCost = costC;
                break;
            
        }

    cout << "The charges are $" << selectedCost << endl; 

    // Display savings only when another package is cheaper
    if(costA < selectedCost) {
        cout << "By switching to Package A you would save $" << selectedCost - costA << endl;
    }

    if(costB < selectedCost) {
        cout << "By switching to Package B you would save $" << selectedCost - costB << endl;
    }

    if(costC < selectedCost) {
        cout << "By switching to Package C you would save $" << selectedCost - costC << endl;
    }

    cout << "Do you want to go again (y/n)? ";
    cin >> again;

    }

        // Repeat until the user enters n or N
        while (again != 'n' && again != 'N');

            cout << "Thank you for using this program. Goodbye." << endl;

    

    return 0;
}