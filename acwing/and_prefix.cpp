/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-09 20:15:55
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;
int a[N], s[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) cin >> a[i];

    for (int i = 1; i <= n; i ++) s[i] = s[i - 1] + a[i];

    while (m --) {
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}