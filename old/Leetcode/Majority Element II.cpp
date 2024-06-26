#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
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
class Solution{
public:
    vector<int> majorityElement(vector<int>& nums){
        unordered_map<int, int> mp;
        vector<int> output;
        int n = (int)nums.size(), lim = n / 3;
        for (int val : nums){
            if (mp.find(val) == mp.end()) mp[val] = 0;
            mp[val]++;
            if (mp[val] == lim + 1) output.push_back(val);
        }
        return output;
    }
};

Solution tester;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    
}