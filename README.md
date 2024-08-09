# Loops
Experiment 6
## AIM - 
To explore the use of for and while loops.
## Software Used
VS Code

## Theory
Loops in C++ are control flow structures that allow for the repeated execution of a block of code. They are automate repetitive tasks, iterating over objects and implementing algorithms efficiently.
### Types of Loops
C++ has three primary loops:

#### For Loop:
Used when the number of iterations is known beforehand.  
Syntax -
```
for (initialization; condition; increment/decrement) {
    // loop body
}
```
```cpp
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
    return 0;
}
```
#### While Loop:

Used when the number of iterations is unknown, and the loop continues as long as a condition is true.  
Syntax -
```
while (condition) {
    // loop body
}
```
```cpp
#include <iostream>

using namespace std;

int main() {
    int number = 1;
    while (number <= 5) {
        cout << "Number: " << number << endl;
        number++;
    }
    return 0;
}
```
#### Do-while loop:

Executes the loop body at least once, then checks the condition.
Useful when the loop must run at least once, regardless of the initial condition.  
Syntax -

```
do { // loop body } while (condition);
```
```cpp
#include <iostream>

using namespace std;

int main() {
    int number = 1;
    do {
        cout << "Number: " << number << endl;
        number++;
    } while (number <= 5);
    return 0;
}
```
## Algorithms
### Inverse Right Triangle

1. **Start**

2. **Input**
   - Read the desired height of the triangle (`n`) from the user.

3. **Initialization**
   - Set a counter variable `row` to `n`.

4. **Outer Loop:**
   - Repeat while `row` is greater than or equal to 1.
   - Set a counter variable `col` to 1.

5. **Inner Loop:**
   - Repeat while `col` is less than or equal to `row`:
     - Print the desired character (e.g., `'*'` or `col`) depending on the desired pattern.
     - Increment `col` by 1.

6. **Newline:**
   - Print a newline character to move to the next row.

7. **Decrement:**
   - Decrement `row` by 1.

8. **End**


### Reverse PRN
#### Input:
1. Read an integer `PRN` from the user.

#### Initialization:
2. Create a variable `num` to store the extracted digit.

#### Reversing Loop:
3. **While** `PRN` is greater than 0:
   - Extract the last digit of `PRN` using `num = PRN % 10`.
   - Print the extracted digit `num`.
   - Remove the last digit from `PRN` using `PRN = PRN / 10`.

#### Output:
4. The reversed number is printed to the console.
