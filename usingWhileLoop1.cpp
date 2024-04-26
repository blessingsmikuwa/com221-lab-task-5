#include <iostream>
using namespace std;

int main() {
    int intValue;
    cout << "Enter an integer value between 5 and 10: " << endl;
    cin >> intValue;


    while (intValue < 5 || intValue > 10) {
        cout << " Sorry you entered an invalid number .  Try again! " << endl;
        cout << "you entered   " << intValue << "  please enter the number between 5 and 10" <<endl;
    
        cin >> intValue; 
        cout << "your input value " << intValue << "  has been accepted"<< endl;
    }

    return 0;
}