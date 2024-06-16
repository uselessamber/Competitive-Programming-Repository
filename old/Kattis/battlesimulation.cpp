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
string inp;
string output = "SKHC";
int n;

int conv(char c){
    switch (c){
        case 'R':
            return 0;
        case 'B':
            return 1;
        case 'L':
            return 2;
    }
    return 0;
}

bool seq_check(int l, int r){ // [l, r]
    int seen = 0;
    if (l < 0 || r >= n) return false;
    for (int i = l; i <= r; i++){
        int p = conv(inp[i]);
        if (!(seen & (1 << p))){
            seen |= (1 << p);
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> inp;
    n = len(inp);
    for (int i = 0; i < n; i++){
        if (seq_check(i, i + 2)){
            cout << output[3];
            i += 2;
        }else{
            cout << output[conv(inp[i])];
        }
    }
}