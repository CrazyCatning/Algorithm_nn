/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-09 20:28:49
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;
int a[N], b[N];

void insert(int l, int r, int c) {
    b[l] += c;
    b[r + 1] -= c;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) cin >> a[i];
    for (int i = 1; i <= n; i ++) insert(i, i, a[i]);

    while (m --) {
        int l, r, c;
        cin >> l >> r >> c;
        insert(l, r, c);
    }

    for (int i = 1; i <= n; i ++) b[i] = b[ i - 1] + b[i];
    for (int i = 1; i <= n; i ++) cout << b[i] << ' '; 
    return 0;
}