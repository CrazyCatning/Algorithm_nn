/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-09 19:48:47
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;


vector<int> mul(vector<int> a, int b) {
    int t = 0;
    vector<int> c;
    for (int i = 0; i < a.size() || t; i ++) {
        if (i < a.size()) t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');

    auto c = mul(A, b);

    for (int i = c.size() - 1; i >= 0; i --) cout << c[i];

    

    return 0;
}
