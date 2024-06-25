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
#include <iomanip>
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

class Solution {
public:
    bool speedTest(vector<int>& dist, int length, int speed, double hour){
        double t = 0;
        for (int i = 0; i < length - 1; i++){
            t += ceil((double)dist[i] / (double)speed);
        }
        t += (double)dist[length - 1] / (double)speed;
        return (t <= hour);
    }

    int minSpeedOnTime(vector<int>& dist, double hour){
        int n = (int)dist.size();
        if (hour <= (n - 1)) return -1;
        int l = 1, r = 1e7;
        while (l < r){
            int mid = (l + r) >> 1;
            if (this->speedTest(dist, n, mid, hour)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        if (this->speedTest(dist, n, l, hour)) return l;
        return -1;
    }
};

Solution tester;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    vector <int> input;
    int n;
    double hour;
    cin >> n >> hour;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        input.push_back(val);
    }
    cout << tester.minSpeedOnTime(input, hour);
}