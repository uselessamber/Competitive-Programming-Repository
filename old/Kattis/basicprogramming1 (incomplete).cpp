#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <time.h>
#include <math.h>
#define fileio(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
#define len(v) (int)v.size()
#define FS first
#define SC second
#define PB push_back
#define LSOne(i) i & (-i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
const bool open_file = true;
const int N = 1e6 + 7;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare
int n, t;
ll min_med, max_med;
ll a[N];
string translated = "";
ll sum = 0;
ll even_sum = 0;
int idx = 0;
bool visit[N];

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += (ll)a[i];
        even_sum += (ll)((a[i] & 1)? 0 : a[i]);
        translated = translated + (char)('a' + (a[i] % 26));
    } //O(n)
    switch (t){
        case 1:
            cout << 7;
            break;
        case 2:
            if (a[0] > a[1])
                cout << "Bigger";
            else if (a[0] == a[1])
                cout << "Equal";
            else
                cout << "Smaller";
            break;
        case 3:
            cout << a[0] + a[1] + a[2] - min({a[0], a[1], a[2]}) - max({a[0], a[1], a[2]});
            break;
        case 4:
            cout << sum;
            break;
        case 5:
            cout << even_sum;
            break;
        case 6:
            cout << translated;
            break;
        case 7:
        visit[idx] = true;
            while (true){
                idx = a[idx];
                if (idx < 0 || idx > n - 1){
                    cout << "Out";
                    break;
                }
                if (idx == n - 1){
                    cout << "Done";
                    break;
                }
                if (visit[idx]){
                    cout << "Cyclic";
                    break;
                }
                visit[idx] = true;
            }
            break;
    }
}