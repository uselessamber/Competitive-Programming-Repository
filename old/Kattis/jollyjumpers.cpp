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
const int N = 3e3 + 7;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare
int n;
int a[N];
bool d[N];

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    while (cin >> n){
        for (int i = 0; i < n; i++){
            d[i] = false;
        }
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i > 0){
                d[abs(a[i] - a[i - 1])] = true;
            }
        }
        bool output = true;
        for (int i = 1; i < n; i++){
            output &= d[i];
        }
        cout << ((output)? "Jolly" : "Not jolly") << "\n";
    }
}