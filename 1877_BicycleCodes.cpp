/*
 Time limit: 0.5 second
Memory limit: 64 MB
Problem illustration
Den has two four-digit combination locks for protecting his bicycle from thieves. Every evening he arms the bicycle antitheft alarm and fastens the bicycle to a special stand with one of the locks. Den never uses the same lock two evenings in a row. One night a thief tried to open the lock using the code 0000. The alarm went off and the thief hurried away. The next night the thief decided to try the code 0001, then 0002, and so on in ascending order of the number.
Den never changes the codes of his locks. On the night when the thief came for the first time the bicycle was fastened with the first lock.
Input
The first line contains the combination that opens the first lock and the second line contains the combination that opens the second lock. Both combinations are strings consisting of four digits from 0 to 9.
Output
Output “yes” if the thief will open the lock sooner or later and “no” otherwise.
Samples
input	output
0001       no
0000

0002        yes
0001

Problem Author: Denis Mukhametianov
Problem Source: Ural Regional School Programming Contest 2011
 */


#include <iostream>

using namespace std;


int main(){

    string first;
    string second;

    cin >> first >> second;

    int code_first = stoi(first);
    int code_second = stoi(second);

    cout << (!code_first || code_first % 2 == 0 || code_second % 2 != 0 ? "yes" : "no");

    return 0;
}