/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 *
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
    ull a = 0;
    ull b = 0;
    ull c = 0;
    ull d = 0;
    cin >> a >> b >> c >> d;

    ull count = 0;
    for(ull i = a; i <= b; i++)
    {
        if (i % c == 0 && i % d == 0)
        {
            count++;
        }
    }
    cout << count<< endl;
    return 0;
}
