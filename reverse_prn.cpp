//Name - Devarthik Suresh
//PRN - 23070123045
//Aim - Reversing PRN using loops.
#include <iostream>
using namespace std;

int main() {
    int PRN,num;

    cout <<"Enter PRN: "<<endl;
    cin>>PRN;
    while(PRN>0)
    {
        num = PRN%10;
        PRN = PRN/10;
        cout <<num;
    }
    return 0;
}
/*
Enter PRN:
23054
45032
 */