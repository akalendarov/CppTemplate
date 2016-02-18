/*
 * C++11 code template for contests.
 * @author: Andrey Kalendarov
 * @e-mail: andreykalendarov@gmail.com
 */

/* ______ TEMPLATE ______ */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

class Reader
{
private:
	void setup()
	{ cin.tie(nullptr), ios_base::sync_with_stdio(false); }

public:
	Reader()
	{ setup(); }

	Reader(const char *s)
	{ setup(), freopen(s, "r", stdin); }

	~Reader()
	{ fclose(stdin); }

	template<typename T>
	inline void operator()(T &t)
	{ cin >> t; }

	template<typename T, typename... Args>
	inline void operator()(T &t, Args &... args)
	{ operator()(t), operator()(args...); }
};

class Writer
{
private:
	void setup()
	{ /*cout.precision(20);*/ }

public:
	Writer()
	{ setup(); }

	Writer(const char *s)
	{ setup(), freopen(s, "w", stdout); }

	~Writer()
	{ fflush(stdout), fclose(stdin); }

	template<typename T>
	inline void raw(T x)
	{ cout << x; }

	template<typename T, typename... Args>
	inline void raw(T x, Args... args)
	{ raw(x), raw(args...); }

	inline void operator()()
	{ raw('\n'); }

	template<typename T>
	inline void operator()(T t)
	{ raw(t), raw('\n'); }

	template<typename T, typename... Args>
	inline void operator()(T x, Args... args)
	{ raw(x), raw(' '), operator()(args...); };
};

class Debug
{
public:
	Debug()
	{ }

	~Debug()
	{ operator()("Time:", clock() / (ld) CLOCKS_PER_SEC); }

	template<typename T>
	inline void raw(T x)
	{
#ifdef ANDREIKKAA
		cout << x;
#endif
	}

	template<typename T>
	inline void fmt(T t)
	{ raw(t); }

	template<typename T, typename... Args>
	inline void fmt(T x, Args... args)
	{ raw(x), raw(' '), fmt(args...); };

	template<typename... Args>
	inline void operator()(Args... args)
	{ raw("<<"), fmt(args...), raw(">>"), raw('\n'); };
};

/* ________ CODE ________ */

class Solution
{
public:
	Reader in;
	Writer out;
	Debug deb;

	inline void solve()
	{

	}

	Solution() :

#ifdef ANDREIKKAA
			in("input.txt"), out(), deb()
#else
	in(), out(), deb()
#endif
	{ }
};

int main()
{
	static Solution s;
	s.solve();
}