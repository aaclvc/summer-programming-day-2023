/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem C: https://open.kattis.com/problems/addingtrouble
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <utility>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>

#define ll long long
#define ull unsigned long long


using namespace std;

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a >> b >> c;

    if(a+b == c)
    {
        cout << "correct!" << endl;
    }
    else
    {
        cout << "wrong!" << endl;
    }

    return 0;
}
