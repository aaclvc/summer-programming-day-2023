/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem H: https://open.kattis.com/problems/pakethanterare
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

int main(void)
{
    int t = 0;
    int b = 0;
    cin >> t >> b;

    vector<int> numPackages;
    for (int i = 0; i < b; i++)
    {
        int tmp;
        cin >> tmp;
        numPackages.push_back(tmp);
    }

    //read lates packages verions
    vector<string> packages;
    vector<int> versions;

    for (int i = 0; i < t; i++)
    {
        string s;
        int v;
        cin >> s >> v;
        packages.push_back(s);
        versions.push_back(v);
    }

    for (int i = 0; i < numPackages.size(); i++)
    {
        int upgrade = 0;
        for (int j = 0; j < numPackages[i]; j++)
        {
            string s;
            int v;
            cin >> s >> v;

            auto itr = find(packages.begin(), packages.end(), s);
            int index = distance(packages.begin(), itr);

            upgrade += versions[index]-v;

        }
        cout << upgrade << endl;
    }

    return 0;
}
