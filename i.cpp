/* Summer Programming Day 2023
 *
 * Team: Byte Duo
 * Problem I: https://open.kattis.com/problems/monopol
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
    int n = 0;
    cin >> n;
    vector<int> dist;
    vector<int> probs{0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

    double result = 0.0;
    for (int i = 0; i < n; i++)
    {
        double number = 0;
        cin >> number;

        result += probs[number]/36.0;
    }

    if(result >= 1.0)
    {
        cout << setprecision(1) << fixed << result << endl;
    }
    else
    {
        cout << setprecision(17) << fixed << result << endl;
    }



    return 0;
}
