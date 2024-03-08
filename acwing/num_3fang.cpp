/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-08 23:00:42
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double n;
    cin >> n;
    double l = -10000, r = 10000;

    while (r - l > 1e-8) {
        double mid = (l + r) / 2;
        if (mid * mid * mid >= n) {
            r = mid;
        } else {
            l = mid;
        }

    }
    printf("%.6f", l);
    return 0;
}