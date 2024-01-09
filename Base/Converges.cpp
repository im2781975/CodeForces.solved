#include <iostream>
using namespace std;

int calculateSquareSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += (num % 10) * (num % 10);
        num /= 10;
    }
    return sum;
}
int checkConvergence(int y, int maxIterations) {
    int current = y, original = y, iterations = 0;
    do {
        y = current;
        current = calculateSquareSum(y);

        if (current == 1) 
            return 1;
        if (current == original) 
            return 0; 

        iterations++;
    } while (iterations < maxIterations);

    return 0; 
}
int main() {
    int inputNumber = 123;
    int result = checkConvergence(inputNumber, 1000);

    if (result == 1)
        cout << inputNumber << " converges to 1\n";
    else
        cout << inputNumber << " enters into a cycle or doesn't converge\n";
    return 0;
}
