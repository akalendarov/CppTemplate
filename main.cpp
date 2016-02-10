/*
 * C++11 code template for contests.
 * @author: Andrey Kalendarov
 * @e-mail: andreykalendarov@gmail.com
 */

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

/* ________ CODE ________ */

class Solution
{
public:
	array<int, 10000000> a;

	inline void solve()
	{

	}


/* ______ TEMPLATE ______ */
	Solution()
	{
		//cout.precision(20);
		cin.tie(nullptr);
#ifdef ANDREIKKAA
		assert(freopen("input.txt", "r", stdin));
		//assert(freopen("output.txt", "w", stdout));
#else
		//assert(freopen("input.txt", "r", stdin));
		//assert(freopen("output.txt", "w", stdout));
#endif
	}

	~Solution()
	{
		del("---\nTime: ", clock() / (ld) CLOCKS_PER_SEC);
		cout.flush();
		fclose(stdin);
		fclose(stdout);
	}

private:
	template<typename T>
	inline void in(T &t)
	{
		cin >> t;
	}

	template<typename T, typename... Args>
	inline void in(T &t, Args &... args)
	{
		cin >> t;
		in(args...);
	}

	template<typename T>
	inline void oul(T t)
	{
		cout << t;
	}

	template<typename T, typename... Args>
	inline void oul(T x, Args... args)
	{
		cout << x;
		oul(args...);
	};

	template<typename... Args>
	inline void out(Args... args)
	{
		oul(args...);
		cout << "\n";
	};

	template<typename... Args>
	inline void del(Args... args)
	{
#ifdef ANDREIKKAA
		out(args...);
#endif
	};

	template<typename... Args>
	inline void deb(Args... args)
	{
#ifdef ANDREIKKAA
		out(args...);
#endif
	};
};

int main()
{
	static Solution s;
	s.solve();
}
