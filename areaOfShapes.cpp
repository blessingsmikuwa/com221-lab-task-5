#include <iostream>
using namespace std;

double triangle_area(double base, double height) {
    return 0.5 * base * height;
}
double rectangle_area(double length, double width) {
    return length * width;
}
double square_area(double side) {
    return side * side;
}
int main() {
    int choice;
    while (true) {
        cout << "Select a shape to calculate the area:"<<endl;
        cout <<"1 Square"<<endl;
         cout <<"2 Rectangle"<<endl;
         cout<< "3 Triangle"<<endl;
          cout<< "4 Quit program"<<endl;
          cout <<"Enter selection: "<<endl;
        cin >> choice;
        switch (choice) {
            case 1: { 
                double side;
                cout << "Enter the length of a side: ";
                cin >> side;
                cout << "The area of the square is: " << square_area(side) << endl;
                break;
            }
            case 2: { 
                double length, width;
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "The area of the rectangle is: " << rectangle_area(length, width) << endl;
                break;
            }
            case 3: { 
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << "The area of the triangle is: " << triangle_area(base, height) << endl;
                break;
            }
            case 4: 
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select again." << endl;
                break;
        }
    }
    return 0;
}
