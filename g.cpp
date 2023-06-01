/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem G: https://open.kattis.com/problems/sangbok
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
    int m = 0;
    int songs = 0;

    cin >> m >> songs;

    vector<int> times;
    for (int i = 0; i < songs; i++)
    {
        int tmp = 0;
        cin >> tmp;
        times.push_back(tmp);
    }

    int minInSec = m * 60;
    int result = 0;

    for(auto & i : times)
    {
        if (minInSec > i)
        {
            minInSec -= i;
            result += i;
        }
    }
    cout << result << endl;
    return 0;
}
