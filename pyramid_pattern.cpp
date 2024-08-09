//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:Implemention of loops to print a pyramidal pattern.

#include <iostream>
using namespace std;

int main(){
   
    int n;

    cout<<"Enter The Value for n: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
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
