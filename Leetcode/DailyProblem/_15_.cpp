#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oSet; // [find_by_order ==> given address at index] |==| [order_of_key ==> Number of element smaller then X]y
#define int long long
#define ld long double
const int mod = 1e9 + 7;
int t, n, m, q, x;

class MyCalendar
{
    tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> oSet;

public:
    MyCalendar()
    {
    }

    bool book(int start, int end)
    {
        bool flag = true;
        int idx = oSet.order_of_key({start, end});
        if (idx && (*oSet.find_by_order(idx - 1)).second > start)
        {
            flag = false;
        }
        if (idx < oSet.size() && (*oSet.find_by_order(idx - 1)).first < end)
        {
            flag = false;
        }
        oSet.insert({start, end});
        return flag;
    }
};

int32_t main()
{
    fastio;
    t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n;
    }

    return 0;
}
