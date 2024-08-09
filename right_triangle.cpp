//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:Implemention of Decision Making Statements Loops to print simple right angle triangle.

#include <iostream>
using namespace std;
 
int main() {
    int n;
 
    cout<<"Enter The Value for n: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}


/*Output:
Enter The Value for n: 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/
