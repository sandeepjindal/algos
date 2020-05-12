#include <iostream>
using namespace std;
const int N = 2.5e5 + 5;
const int BLOCK = 555;
int n;
int q;
pair < long long , int > arr[N];

bool ok(int i , int j) {
    long long int u = arr[i].first ;
    long long int v = arr[i].second;
    long long int l = arr[j].first;
    long long int r = arr[j].second;
    return !(u > r | v < l);
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int X ;
    cin >> X;
    cin >> n;
    int idx = 0;
    for(int i = 1; i <= n; ++i) {
        long long u , v;
        cin >> u >> v;
        arr[++idx] = make_pair(u,1);
        arr[++idx] = make_pair(v,2);
    }
    sort(arr + 1 , arr + 1 + idx);
    int cur = 0;
    int mx = 1;
    for(int i = 1; i <= idx; ++i) {
        if(arr[i].second == 1) {
            cur++;
        } else cur--;
        mx = max(mx , cur);
    }
    if(X >= mx) {
        cout << 0 << endl;
    } else cout << mx - X << endl;
    return 0;
}
