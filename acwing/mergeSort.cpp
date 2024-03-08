/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-08 22:29:18
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;
int a[N], tmp[N];

int mergerSort(int l, int r) {
    if (l >= r) return a[l];
    int mid = l + r >> 1;
    mergerSort(l, mid), mergerSort(mid + 1, r);
    int i = l, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) tmp[k ++] = a[i ++];
        else tmp[k ++] = a[j ++];
    }
    while (i <= mid) tmp[k ++] = a[i ++];
    while (j <= r) tmp[k ++] = a[j ++];
    for (int k = 0, i = l; i <= r;) {
        a[i ++] = tmp[k ++]; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) cin >> a[i];

    mergerSort(0, n - 1);
    for (int i = 0; i < n; i ++) cout << a[i] << ' ';
    return 0;
}