#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(x, n) for(int i = x; i < n; i++)
#define kpop(x, n) for(int k = x; k < n; k++)
#define small_black_cock cout

using namespace std;
using ll = long long;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;  cin >> t;
    vector<vector<int>> p(t);
    loop(0, t-1){
        int a, b;
        cin >> a >> b;
        a--, b--;
        p[a].pb(b);
        p[b].pb(a);
    }
    int maxx = 0;
    for(auto i: p){
        int c = i.size();
        maxx = max(maxx, c );
    }
    cout << maxx+1;


    return 0;
}
