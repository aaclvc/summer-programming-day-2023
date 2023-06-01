/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem A: https://open.kattis.com/problems/internationaldates
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
#include <algorithm>
#include <regex>
#include <iterator>

#define ll long long
#define ull unsigned long long


using namespace std;

int main(void)
{
    string date;
    getline(cin, date);

    vector<int> v;

    std::stringstream ss(date);

    for (int i; ss >> i;) {
        v.push_back(i);
        if (ss.peek() == '/')
            ss.ignore();
    }

    if(v[0] > 12 && v[1] <= 12)
    {
        cout << "EU" << endl;
    }
    else if(v[1] > 12)
    {
        cout << "US" << endl;
    }
    else
    {
        cout << "either" << endl;
    }
    return 0;
}
