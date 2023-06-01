/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem B: https://open.kattis.com/problems/alienmath
 * Status: Wrong Answer  14/26
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

#define ll long long
#define ull unsigned long long


using namespace std;

ull myPow(ull x, ull y)
{
    ull res = 1;
    for (int i = 0; i < y; i++)
    {
        res *= x;
    }
    return res;
}

int main(void)
{
    int b = 0;
    cin >> b;
    vector<string> digits;

    for(int i = 0; i < b; i++)
    {
        string tmp;
        cin >> tmp;
        digits.push_back(tmp);
    }

    string number;
    cin >> number;

    vector<string> final;
    for(int i = 0; i < number.size(); i++)
    {
        for(auto d : digits)
        {
            string current = number.substr(i, d.size());
            if( current == d)
            {
                final.push_back(current);
                i += d.size()-1;
            }
        }
    }

    int exp = final.size();
    ull res = 0;
    for (int i = 0; i < final.size(); i++)
    {
        auto itr = find(digits.begin(), digits.end(), final[i]);
        int index = distance(digits.begin(), itr);
        res += index * myPow(b,exp-1);
        // res += index * pow(b,exp-1);
        exp--;
    }
    cout << res << endl;
    return 0;
}
