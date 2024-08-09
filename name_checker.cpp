//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:Implemention of Decision Making Statements Loops to Check Name using Do While Loop

#include <iostream>
using namespace std;

int main() {
    string name;
    
    do {
        cout << "Enter the Name: ";
        cin >> name;
        if (name != "SIT") {
            cout << name << endl;
        }
    } 
    while (name != "SIT");
}


/*Output:
Enter the Name: Hello
Hello
Enter the Name: SIT
*/
