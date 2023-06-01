/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem L: https://open.kattis.com/problems/risdomare
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

pair<ull, vector<size_t>> FindMaxElements(vector<ull> const& v)
{
    vector<size_t> indices;
    double current_max = 0;

    for (size_t i = 0; i < v.size(); ++i)
    {
        if (v[i] > current_max)
        {
            current_max = v[i];
            indices.clear();
        }

        if (v[i] == current_max)
        {
            indices.push_back(i);
        }
    }

    return make_pair(current_max, indices);
}

int main(void)
{
    int n = 0;
    cin >> n;

    string str;
    cin >> str;

    vector<int> a;
    vector<int> s;
    vector<ull> sums;

    for (int i = 0; i < n; i++)
    {
        ull num, size;
        cin >> num >> size;
        sums.push_back(num+size);
        a.push_back(num);
        s.push_back(size);
    }

    auto res =  FindMaxElements(sums);

    if (res.second.size() == 1)
    {
        cout << res.second[0]+1 << endl;
    }
    else
    {
        if(str == "antal")
        {
            auto max = distance(a.begin(), max_element(a.begin(), a.end()))+1;
            cout << max << endl;
        }
        else
        {
            auto max = distance(s.begin(), max_element(s.begin(), s.end()))+1;
            cout << max << endl;
        }
    }

    return 0;
}
