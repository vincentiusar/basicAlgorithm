#include <iostream>

using namespace std;

int main() {
    int sum;        //int (6 bit), long int (8 bit), long long (10 bit)
    float mean;     // float (4 bit), double (6 bit), long double (8 bit)
    char letter;
    string word;
    bool found;

    /*  int = round number. 
            operator        : +, -, *, /, div, % (some program have ^, c++ doesn't)
            logic operator  : <, <=, >, >=, ==, !=
        float = floating point number. 
            operator        : +, -, *, /
            logic operator  : <, <=, >, >=
        string = contain words (include / not include 'space').
            operator        : +, -
            logic operator  : <, <=, >, >=
            string notation : "words", "andyAndTom", "I can do this", " "
        char = contain 1 character
            operator        : +, -
            logic operator  : <, <=, >, >=
            char notation   : 'a', '&', 'p', ' ', '#'
        boolean = true or false value
            operator        : (none)
            logic operator  : && (and), || (or), ! (not), <, <=, >, >=, ==, !=
            boolean example : a && b, a || b, !a, !b    
    */

// cout = output in c++. cout use "<<" that mean output
// cin = input in c++. cin use ">>" that mean input

//-----------------------------------------------------

    cout << "INTEGER OPERATION" << endl;
    int side;

    cin.get();
    
    cout << "How to count square area.\nInput the side of square : ";
    cin >> side;
    cout << "The Area of Square with side " << side << " cm is " << side * side << endl;

//-----------------------------------------------------

    cout << endl << "FLOATING POINT" << endl;
    float a, b, c;

    cin.get();

    cout << "how to count the mean value of 3 float number.\nInput the first number : ";
    cin >> a;
    cout << "Input the second number : ";
    cin >> b;
    cout << "Input the third number : ";
    cin >> c;

    float mean;
    mean = (a + b + c) / 3;
    cout << "The mean value is " << mean << endl;

//-----------------------------------------------------

    cout << endl << "STRING OPERATION";
    string word1, word2;

    cin.get();

    cout << "how to append word 1 and word 2.\nInput the first word : ";
    cin >> word1;
    cout << "Input the second word : ";
    cin >> word2;
    cout << "word 2 append to word 1 become " << word1 + word2 << endl;

    cin.get();
    cout << endl << "IMPORTANT !\nSome of programing language can't input more that 2 word in 1 variable which mean\nprogram can't input a sentenceses with standard input" << endl;
    
    string name;
    cout << "EXAMPLE !\nInput your name here (contain space) : ";   // this mean, you inputing a sentenceses
    cin >> name;
    cout << "Hello, your name is " << name << endl;

    cout << endl << "But C++ can input a sentenceses using getline" << endl;
    cout << "Input your name (contain space) : ";
    getline(cin, name);
    cout << "Hello, your name is " << name << endl;

    cout << endl << "string also can contain an integer or float but it will became string example :" << endl;
    word1 = "1231";
    word2 = "1931,2138";
    cout << word1 + word2 << " is the sum of the two value in string." << endl;

//-----------------------------------------------------

    cout << "BOOLEAN OPERATION" << endl;
    bool flag;

    cin.get();

    int number1, number2;
    cout << "how to compare two integer.\nInput the first integer : ";
    cin >> number1;
    cout << "Input the second integer : ";
    cin >> number2;
    
    flag = number1 > number2;
    cout << "Is number1 > number2? " << boolalpha << flag << endl;
    flag = number1 < number2;
    cout << "Is number1 < number2? " << boolalpha << flag << endl;
    flag = number1 == number2;
    cout << "Is number1 = number2? " << boolalpha << flag << endl;

    // boolean value is false (0) and true (1)

    flag = true;
    flag = false;

//-----------------------------------------------------

    cout << endl << "CHARACTER is the same as string. But char contain only 1 character" << endl;

    cin.get();

    cout << "END OF BASICS PROGRAM";
    cin.get();
}