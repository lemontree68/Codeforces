#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define ps(x,y)         fixed<<setprecision(y)<<x
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod             1000000007
#define inf             1e18
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0, lim - 1);
	return uid(rang);
}




//=======================

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}




void solve() {

	ll n; cin >> n;
	ll arr[n];
	ll countz(0);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] == 0)
		{
			countz++;
		}

	}




	sort(arr, arr + n);



	if (n == 1 || arr[0] > 0)
	{
		cout << "1\n";
		return;
	}


	if (arr[n - 1] <= 0)
	{
		cout << n << "\n";
		return;
	}

	if (countz > 1)
	{
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] > 0)
			{
				cout << i << "\n";
				return;
			}
		}
	}

	ll least_diff = INT_MAX;

	for (ll i = 0; i < n - 1; ++i)
	{
		if (arr[i] <= 0 && arr[i + 1] <= 0)
		{
			least_diff = min(least_diff, abs(arr[i] - arr[i + 1]));
		}
	}



	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > 0 && arr[i] > least_diff )
		{
			cout << i << "\n";
			return;
		}
		else if (arr[i] > 0 && arr[i] <= least_diff)
		{
			cout << i + 1 << "\n";
			return;
		}




	}


}

int main() {

	c_p_c();

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}




