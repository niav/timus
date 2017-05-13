/*
 Time limit: 0.5 second
Memory limit: 64 MB
After the personal contest, happy but hungry programmers dropped into the restaurant “Ural Steaks” and ordered n specialty steaks. Each steak is cooked by frying each of its sides on a frying pan for one minute.
Unfortunately, the chef has only one frying pan, on which at most k steaks can be cooked simultaneously. Find the time the chef needs to cook the steaks.
Input
The only input line contains the integers n and k separated with a space (1 ≤ n, k ≤ 1000).
Output
Output the minimal number of minutes in which the chef can cook n steaks.
Sample
input	output
3 2     3
Problem Author: Magaz Asanov
Problem Source: XII USU Open Personal Contest (March 19, 2011)
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    if (k == 0 || n == 0)
        cout << 0;
    else cout << (k >= n ? 2 : ceil(2. * n / k));
    return 0;
}