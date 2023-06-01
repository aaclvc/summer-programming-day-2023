/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem F: https://open.kattis.com/problems/stickykeys
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
    string s;
    getline(cin, s);

    string newS;
    int i = 0;
    int j = 0;

    while (j < s.length())
    {
        if (s[i] == s[j])
        {
            j++;
        }
        else if (s[j] != s[i] || j == s.length() - 1)
        {
            newS += s[i];
            i = j;
            j++;
        }
    }

    newS += s[j - 1];
    cout << newS << endl;
    return 0;
}
