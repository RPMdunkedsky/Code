// Score
// UVa ID: 1585
// Verdict: Accepted
// Submission Date: 2017-11-04
// UVa Run Time: 0.000s
//
// 版权所有（C）2017，邱秋。metaphysis # yeah dot net

#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);

    int cases;
    string score;

    cin >> cases;
    for (int c = 1; c <= cases; c++)
    {
        cin >> score;
        
        int total = 0, previous = 0;
        for (int i = 0; i < score.length(); i++)
        {
            if (score[i] == 'O') total += ++previous;
            else previous = 0;
        }
        cout << total << '\n';
    }
    
    return 0;
}
