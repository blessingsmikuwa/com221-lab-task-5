#include <iostream>
#include <string>

using namespace std;

int main() {
    string array1[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterate through each element of the array
    for (const string & element : array1) {

        if (element[0] == 'B') {
            cout << element << endl;
        }
    }

    return 0;
}