// Author: Riggie Lin
// Date: 09/09/2020
// The program will display 3 integers in reverse order, 3 characters in reverse order and 3 words in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int x, y, z; // Initializes x, y and z as integers
    
    cout << "Enter 3 integers separated by whitespace: "; // user output
    cin >> x >> y >> z; // user input
 
    cout << "In reverse order:" << '\t' << z << '\t' << y << '\t' << x << endl; // Displays integers in reverse order
    cout << "\n"; // New line
   
    char a, b, c; // Initializes a, b and c as characters
    
    cout << "Enter 3 characters separated by whitespace: "; // user output
    cin >> a >> b >> c; // user input

    cout << "In reverse order:" << '\t' << c << '\t' << b << '\t' << a << endl; // Displays characters in reverse order
    cout << "\n"; // New line
 
    string d, e, f; // Initializes d, e and f as strings
    
    cout << "Enter 3 words separated by whitespace: "; // user output
    cin >> d >> e >> f; // user input

    cout << "In reverse order:" << '\t' << f << '\t' << e << '\t' << d; // Displays words in reverse order
    cout << "\n"; // New line

    return 0; // Exit the program
}
