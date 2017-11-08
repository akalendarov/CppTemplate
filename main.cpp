#ifndef LOCAL
#pragma GCC optimize ("O3")
#endif

#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef double ld;

/* ________ CODE ________ */

inline void mainFunction()
{

}

/* ________ CODE ________ */

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	time_t _start = clock();
#else
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << setprecision(18);
	//cout << fixed;	
	mainFunction();
#ifdef LOCAL
	cout << "Time: " << (clock() - _start) / (ld)CLOCKS_PER_SEC << endl;
#endif
}
