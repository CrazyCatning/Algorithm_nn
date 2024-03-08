/**
 *	 @author: shuxiaoning
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;
int a[N];

int quickSort(int a[], int l, int r, int k) {
    if (l >= r) return a[l];

    int x = a[l + r >> 1];
    int i = l - 1, j = r + 1;
    while (i < j) {
        do i ++; while (a[i] < x);
        do j --; while (a[j] > x);
        if (i < j) swap(a[i], a[j]);

    }
    int sl = j - l + 1;
    if (sl >= k) {
        quickSort(a, l, j, k);
    } else {
        quickSort(a, j + 1, r, k - sl);
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i ++) cin >> a[i];

    cout << quickSort(a, 0, n - 1, k) << endl;
    return 0;
}