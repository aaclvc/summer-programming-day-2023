/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem K: https://open.kattis.com/problems/vemvinner
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

bool checkH(vector<string> v, string p)
{
    bool win = false;
    if(v[0] == p && v[1] == p && v[2] == p)
    {
        win = true;
    }
    if(v[3] == p && v[4] == p && v[5] == p)
    {
        win = true;
    }
    if(v[6] == p && v[7] == p && v[8] == p)
    {
        win = true;
    }
    return win;
}

bool checkV(vector<string> v, string p)
{
    bool win = false;
    if(v[0] == p && v[3] == p && v[6] == p)
    {
        win = true;
    }
    if(v[1] == p && v[4] == p && v[7] == p)
    {
        win = true;
    }
    if(v[2] == p && v[5] == p && v[8] == p)
    {
        win = true;
    }
    return win;
}

bool checkD(vector<string> v, string p)
{
    bool win = false;
    if(v[0] == p && v[4] == p && v[8] == p)
    {
        win = true;
    }
    if(v[6] == p && v[4] == p && v[2] == p)
    {
        win = true;
    }
    return win;
}


int main(void)
{
    vector<string> field;

    string line;

    for(int i = 0; i < 3; i++)
    {
        getline(cin, line);
        stringstream ss(line);

        string s;
        while (getline(ss, s, ' '))
        {
            field.push_back(s);
        }
    }

    if(checkH(field, "O") || checkV(field, "O") || checkD(field, "O"))
    {
        cout << "Abdullah har vunnit" << endl;
    }
    else if(checkH(field, "X") || checkV(field, "X") || checkD(field, "X"))
    {
        cout << "Johan har vunnit" << endl;
    }
    else
    {
        cout << "ingen har vunnit" << endl;
    }
    return 0;
}
