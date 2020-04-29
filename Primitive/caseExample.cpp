#include <iostream>

using namespace std;

int main() {

    cout << "an integer is multiple of three" << endl;
    int n;
    cout << "Input 1 integer : ";
    cin >> n;

    cout << n << "mod by 3 is " << n % 3 << endl;

//-----------------------------------------------------

    cout << endl << "Check an integer is multiple of three and five" << endl;
    int n;
    bool isMultiple;
    cout << "Input 1 integer : ";
    cin >> n;
    isMultiple = (n % 3 == 0) && (n % 5 == 0);
    cout << n << " is multiple of three and five? " << boolalpha << isMultiple << endl;

//-----------------------------------------------------

    cout << endl << "swap value of a and b" << endl;
    int a, b, temp;
    cout << "Input a : ";
    cin >> a;
    cout << "input b : ";
    cin >> b;

    cout << "the value of a and b before swap is " << a << " and " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "the value of a and b after swap is " << a << " and " << b << endl;

//-----------------------------------------------------

    cout << endl << "X seconds to hours, minutes, seconds" << endl;
    int second;
    cout << "Input how many seconds : ";
    cin >> second;
    
    int hour, minute;
    hour = second / 3600;
    second = second % 3600;
    minute = second / 60;
    second = second % 60;
    cout << "it was " << hour << " hour(s) " << minute << " minute(s) " << second << " second(s)" << endl;

//-----------------------------------------------------

    cout << "END OF PROGRAM";
    cin.get();
}