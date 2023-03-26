#ifndef LOCAL_RUN
#pragma GCC optimize("O3,no-stack-protector")
#endif

#define first x
#define second y

#include "bits/stdc++.h"
using namespace std;

#undef assert
//#define assert(EXPR) ((void)0)
#define assert(EXPR) if(!(EXPR)) assert_terminate(__LINE__, #EXPR);

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

#ifndef LOCAL_RUN
#define endl '\n'
#endif

template<class T, class U> inline ostream &operator<< (ostream &, const pair<T, U> &);
template<class T, class U> inline istream &operator>> (istream &, pair<T, U> &);
template<class T> inline ostream &operator<< (ostream &, const vector<T> &);
template<class T> inline istream &operator>> (istream &, vector<T> &);
template<class T> inline ostream &operator<< (ostream &, const set<T> &);
template<class T> inline ostream &operator<< (ostream &, const multiset<T> &);
template<class T> inline ostream &operator<< (ostream &, const unordered_set<T> &);
template<class T> inline ostream &operator<< (ostream &, const unordered_multiset<T> &);
template<class T, class U> inline ostream &operator<< (ostream &, const map<T, U> &);
template<class T, class U> inline ostream &operator<< (ostream &, const unordered_map<T, U> &);
template<class T, size_t N> inline ostream &operator<< (ostream &, const array<T, N> &);
template<class T, size_t N> inline ostream &operator>> (ostream &, array<T, N> &);
void assert_terminate(int, const char *);

#ifdef LOCAL_RUN
//#define INPUT_FILE_NAME "input.txt"
//#define OUTPUT_FILE_NAME "output.txt"
#else
//#define INPUT_FILE_NAME "input.txt"
//#define OUTPUT_FILE_NAME "output.txt"
#endif

//#define POOL_SIZE_MB 200
using ll [[maybe_unused]] = long long;
using ld [[maybe_unused]] = double;
[[maybe_unused]] const ld PI = 3.14159265358979323846;
[[maybe_unused]] mt19937 rd(228); // chrono::steady_clock::now().time_since_epoch().count()


/* ________ CODE ________ */

void run_testcase([[maybe_unused]] int testcase) {

}

void run_solution() {
    int t = 1;
    //cin >> t;

    for(int i = 0; i < t; ++i) {
        run_testcase(i);
    }
}

/* ________ CODE ________ */

int main() {
#if defined(LOCAL_RUN)
    time_t _start = clock();
#endif
#ifdef INPUT_FILE_NAME
    assert(freopen(INPUT_FILE_NAME, "r", stdin) != nullptr);
#endif
#ifdef OUTPUT_FILE_NAME
    assert(freopen(OUTPUT_FILE_NAME, "w", stdout) != nullptr);
#endif
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cout << setprecision(20);
    cout << fixed;

    run_solution();
#if defined(LOCAL_RUN)
    cout << "Time: " << (ld)(clock() - _start) / CLOCKS_PER_SEC << endl;
#endif
}

template<class T, class U> inline ostream &operator<< (ostream &_out, const pair<T, U> &_p) {
    _out << _p.x << ' ' << _p.y;
    return _out;
}
template<class T, class U> inline istream &operator>> (istream &_in, pair<T, U> &_p) {
    _in >> _p.x >> _p.y;
    return _in;
}
template<class T> inline ostream &operator<< (ostream &_out, const vector<T> &_v) {
    if (_v.empty()) { return _out; }
    _out << *_v.begin();
    for (auto _it = ++_v.begin(); _it != _v.end(); ++_it) { _out << ' ' << *_it; }
    return _out;
}
template<class T> inline istream &operator>> (istream &_in, vector<T> &_v) {
    for (auto &_i : _v) { _in >> _i; }
    return _in;
}
template<class T> inline ostream &operator<< (ostream &_out, const set<T> &_s) {
    if (_s.empty()) { return _out; }
    _out << *_s.begin();
    for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; }
    return _out;
}
template<class T> inline ostream &operator<< (ostream &_out, const multiset<T> &_s) {
    if (_s.empty()) { return _out; }
    _out << *_s.begin();
    for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; }
    return _out;
}
template<class T> inline ostream &operator<< (ostream &_out, const unordered_set<T> &_s) {
    if (_s.empty()) { return _out; }
    _out << *_s.begin();
    for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; }
    return _out;
}
template<class T> inline ostream &operator<< (ostream &_out, const unordered_multiset<T> &_s) {
    if (_s.empty()) { return _out; }
    _out << *_s.begin();
    for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; }
    return _out;
}
template<class T, class U> inline ostream &operator<< (ostream &_out, const map<T, U> &_m) {
    if (_m.empty()) { return _out; }
    _out << '(' << _m.begin()->x << ": " << _m.begin()->y << ')';
    for (auto _it = ++_m.begin(); _it != _m.end(); ++_it) { _out << ", (" << _it->x << ": " << _it->y << ')'; }
    return _out;
}
template<class T, class U> inline ostream &operator<< (ostream &_out, const unordered_map<T, U> &_m) {
    if (_m.empty()) { return _out; }
    _out << '(' << _m.begin()->x << ": " << _m.begin()->y << ')';
    for (auto _it = ++_m.begin(); _it != _m.end(); ++_it) { _out << ", (" << _it->x << ": " << _it->y << ')'; }
    return _out;
}

template<class T, size_t N> inline ostream &operator<< (ostream &_out, const array<T, N> &a) {
    for(int i = 0; i < N; ++i) {
        _out << a[i];
        if(i + 1 < N) {
            _out << ' ';
        }
    }
    return _out;
}
template<class T, size_t N> inline istream &operator>> (istream &_in, array<T, N> &a) {
    for(int i = 0; i < N; ++i) {
        _in >> a[i];
    }
    return _in;
}

#ifdef POOL_SIZE_MB
const size_t POOL_SIZE_B = size_t(POOL_SIZE_MB) * 1024 * 1024;
byte pool[POOL_SIZE_B];
size_t ptr = 0;
void* operator new(size_t x) {
    ptr += x;
    assert(ptr <= POOL_SIZE_B);
    return pool + ptr - x;
}
void operator delete (void*) noexcept { }
#endif

void assert_terminate(int line, const char *expr) {
    cout << endl << "ASSERTION FAILED: LINE " << line << "; EXPR `" << expr << "`" << endl;
    cout.flush();
    exit(1);
}