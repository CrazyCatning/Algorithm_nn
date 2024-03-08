/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-08 22:42:23
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;
int a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q, k;
    cin >> n >> q;
    for (int i = 0; i < n; i ++) cin >> a[i];

    while (q --) {
        cin >> k;
        int l = 0, r = n - 1;

        while (l < r) {
            int mid = l + r >> 1;
            if (a[mid] >= k) r = mid;
            else l = mid + 1;
        }
        if (a[l] == k) cout << l << ' ';
        else {
            cout << "-1 -1" << endl;
            continue;
        }
        l = 0, r = n - 1;
        
        while (l < r) {
            int mid = (l + r + 1) >> 1;
            if (a[mid] <= k) l = mid;
            else r = mid - 1;
        }
        cout << l << endl;
    }
    return 0;
}