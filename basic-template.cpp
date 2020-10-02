#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void fast() { ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); }
void file_input() {
	#ifndef ONLINE_JUDGE
	freopen("/home/jam1729/Codes/in.txt","r",stdin);
	freopen("/home/jam1729/Codes/out.txt","w",stdout);
	#endif
}

#define INF 1000000000
const long long INFll=1ll*INF*INF;
#define mp make_pair
#define pb push_back
#define ss second
#define ff first
#define endl '\n'
#define pl cout<<endl;

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define sz(a) int((a).size())

#define debug(x) cout << #x << ": " << x << endl;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
long long genrand(long long L,long long R) {
	return uniform_int_distribution<long long>(L, R)(mt_rng);
}

/* not every bracket sequence is balanced */
#define MOD 1000000007 //998244353
int mul(int a, int b, int mod = MOD) {
	return int(a * 1ll * b % mod);
}
int norm(int a, int mod = MOD) {
	while(a >= mod) a -= mod;
	while(a < 0) a += mod;
	return a;
}
int powmod(ll x, ll y, int mod = MOD) {
	int res = 1;
	x = x % mod;
	while(y > 0) {
		if(y & 1) res = mul(res, x, mod);
		x = mul(x, x, mod);
		y = y / 2;
	}
	return res;
}
int inv(int a, int mod = MOD) {
	return powmod(a, mod - 2);
}
/* /-\-/-\-/-\-/-\-/-\-/-\-/-\-/-\-/-\-/-\-/-\-/-\-/-\ */



void eat_em(){
	
}

int main() {
	
	file_input();
	
	fast();
	int pyramid_samosa = 1;
	// cin >> pyramid_samosa;
	for(int i = 1; i<=pyramid_samosa; i++){
		// cout << "Case #" << i << ": ";
		eat_em();
	}
	return 0;
}