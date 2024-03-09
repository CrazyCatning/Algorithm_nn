/**
 *	 @author: shuxiaoning
 *	 @date: 2024-03-09 19:56:06
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;


vector<int> div(vector<int> a, int b, int &r) {
    vector<int> c;
    r = 0;
    for (int i = 0; i < a.size(); i ++) {
        r = r * 10 + a[i];
        c.push_back(r / b);
        r = r % b;
    }
    reverse(c.begin(), c.end());

    while (c.size() > 1 && c.back() == 0) c.pop_back();

    return c;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a;
    int b;
    cin >> a >> b;
    int r;

    vector<int> A;
    for (int i = 0; i < a.size(); i ++) {
        A.push_back(a[i] - '0');
    }

    auto c = div(A, b, r);
    for (int i = c.size() - 1; i >= 0; i --) cout << c[i];
    cout << endl << r << endl;

    return 0;
}