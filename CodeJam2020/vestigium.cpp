//https://www.encyclopediaofmath.org/index.php/Latin_square

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int mod = 1000000007;
const int N = 3e5, M = N;


int main()
{
    int t, i, j, n,x,k;
    si(t);
    vector<vector<int>> ip;
    unordered_set<int> row;
    unordered_set<string> full_row_set_x;
    unordered_set<string> full_row_set_y;

    string full_row;
    // std::map<int,int> x_count;
    // std::map<int,int> y_count;

    fo(k, t)
    {
        int sum = 0;
        int result_x = 0;
        int result_y = 0;
        ip.clear();
        full_row_set_y.clear();
        full_row_set_x.clear();
        si(n);
        fo(i, n)
        {
            std::vector<int> v1;
            fo(j, n)
            {
                si(x);
                if (i == j)
                {
                    sum = sum + x;
                }
                v1.pb(x);
            }
            ip.push_back(v1);
        }

        fo(i, n)
        {
            row.clear();
            full_row = "";
            bool greater=false;
            fo(j, n)
            {   
                // cout << " " << ip[i][j];
                row.insert(ip[i][j]);
                if(ip[i][j] > n){
                    greater=true;
                }
                full_row.append(to_string(ip[i][j]));
            }
            // cout << endl << "----------" << endl;
            full_row_set_x.insert(full_row);
            if (row.size() != n || greater)
            {
                result_x++;
            }
            // cout << "result_x is" << result_x << endl;
        }

        fo(j, n)
        {
            row.clear();
            full_row = "";
            bool greater=false;
            fo(i, n)
            {
                // cout << " " << ip[i][j];
                row.insert(ip[i][j]);
                if(ip[i][j] > n){
                    greater=true;
                }
                full_row.append(to_string(ip[i][j]));
            }
            // cout << endl<< "----------" << endl;
            full_row_set_y.insert(full_row);
            if (row.size() != n || greater)
            {
                result_y++;
            }
        }
        // if (result_x == 0)
        // {
        //     // cout << "entering second check for x and unique strings are "<< full_row_set_x.size()<< endl;
        //     result_x = result_x + (n - full_row_set_x.size());
        // }

        // if (result_y == 0)
        // {
        //     // cout << "entering second check for y and unique strings are " << full_row_set_y.size()<< endl ;
        //     result_y = result_y + (n - full_row_set_y.size());
        // }
        cout << "Case #" << k+1 << ": " << sum << " " << result_x << " " << result_y << endl;
    }
    return 0;
}