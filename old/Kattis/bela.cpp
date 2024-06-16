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
int t;
char d;
int sc = 0;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> t >> d;
    while (t--){
        for (int i = 0; i < 4; i++){
            char c, s;
            cin >> c >> s;
            switch (c){
                case 'A':
                sc += 11;
                break;
                case 'K':
                sc += 4;
                break;
                case 'Q':
                sc += 3;
                break;
                case 'J':
                sc += ((s == d)? 20 : 2);
                break;
                case 'T':
                sc += 10;
                break;
                case '9':
                sc += ((s == d)? 14 : 0);
                break;
                case '8':
                case '7':
                sc += 0;
                break;
            }
        }
    }
    cout << sc;
    
}