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
string s, t;
int bcounts, bcountt, qcount, n;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    int ts, mts;
    cin >> ts;
    mts = ts;
    while (ts--){
        cin >> s >> t;
        bcounts = bcountt = qcount = 0;
        n = len(s);
        for (int i = 0; i < n; i++){
            if (s[i] == '1')
                bcounts++;
            if (s[i] == '?')
                qcount++;
            if (t[i] == '1')
                bcountt++;
        }
        if (bcounts > bcountt){
            cout << "Case " << mts - ts << ": " << "-1\n";
        }else{
            int output = 0;
            for (int i = 0; i < n; i++){
                if (t[i] == '1' && s[i] == '?'){
                    if (bcounts < bcountt){
                        bcounts++;
                        output++;
                        s[i] = '1';
                    }
                }
            }
            if (bcounts < bcountt){          
                for (int i = 0; i < n; i++){
                    if (t[i] == '1' && s[i] == '0'){
                        if (bcounts < bcountt){
                            bcounts++;
                            output++;
                            s[i] = '1';
                        }
                    }
                }
            }
            for (int i = 0; i < n; i++){
                if (s[i] == '?'){
                    output++;
                    if (bcounts < bcountt){
                        bcounts++;
                        s[i] = '1';
                    }else{
                        s[i] = '0';
                    }
                }
            }
            for (int i = 0; i < n; i++){
                if (s[i] == '1' && t[i] == '0')
                    output++;
            }
            cout << "Case " << mts - ts << ": " << output << "\n";
        }
    }
}