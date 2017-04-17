/*
Sum
Time limit: 2.0 second
Memory limit: 64 MB
Your task is to find the sum of all integer numbers lying between 1 and N inclusive.
Input
The input consists of a single integer N that is not greater than 10000 by it's absolute value.
Output
Write a single integer number that is the sum of all integer numbers lying between 1 and N inclusive.
Sample
input	output
-3         -5
Problem Source: 2000-2001 ACM Northeastern European Regional Programming Contest (test tour)
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    int sum{0};
    cin >> N;

    if (N>1) {
        for (int i = 1; i <= N; ++i) {
            sum += i;
        }
    }
    else {
        for (int i = N; i <= 1; ++i) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}