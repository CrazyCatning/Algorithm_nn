/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-08 22:36:40
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;
int a[N], tmp[N];
LL mergerSort(int l, int r) {
    if (l >= r) return 0;
    int mid = l + r >> 1;
    LL res = mergerSort(l, mid) + mergerSort(mid + 1, r);
    int i = l, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) tmp[k ++] = a[i ++];
        else tmp[k ++] = a[j ++], res += mid - i + 1;
    }
    while (i <= mid) tmp[k ++] = a[i ++];
    while (j <= r) tmp[k ++] = a[j ++];
    for (int k = 0, i = l; i <= r;) {
        a[i ++] = tmp[k ++]; 
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) cin >> a[i];

    cout << mergerSort(0, n - 1) << endl;

    return 0;
}