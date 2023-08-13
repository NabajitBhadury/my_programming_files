#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define random(l, r, T) uniform_int_distribution<T>(l, r)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// ***     Test case generator     ****
void test(string path, int i)
{
    freopen(path.c_str(), "w", stdout); // stdout <- file stream
    // cout <- object that writes in stdout
    // if we link stdout to the target file, cout can write in that file,
    // input file generate
    if (i == 0)
    {
        cout << "3" << endl;
        cout << "6" << endl;
        cout << "aabcca" << endl;
        cout << "6" << endl;
        cout << "baabcb" << endl;
        cout << "4" << endl;
        cout << "cccc" << endl;
    }
    else if (i < 3)
    {
        int t = 1000;
        assert(t >= 2 && t <= 1000);
        cout << t << endl;
        while (t--)
        {
            int n = random(1, 15, int);
            assert(n >= 1 && n <= 2e5);
            cout << 2 * n << endl;
            for (int k = 0; k < 2 * n; k++)
            {
                char ch = random('a', 'z', char);
                assert(ch >= 'a' && ch <= 'z');
                cout << ch;
            }
            cout << endl;
        }
    }
    else if (i < 8)
    {
        int t = 1000;
        assert(t >= 2 && t <= 1000);
        cout << t << endl;
        for (int j = 0; j < t; j++)
        {
            int n = random(1, 100, int);
            assert(n >= 1 && n <= 2e5);
            cout << 2 * n << endl;
            for (int k = 0; k < 2 * n; k++)
            {
                char ch = random('a', 'z', char);
                assert(ch >= 'a' && ch <= 'z');
                cout << ch;
            }
            cout << endl;
        }
    }
    else if (i < 12)
    {
        int t = 100;
        assert(t >= 2 && t <= 1000);
        cout << t << endl;
        int sum = 0;
        for (int j = 0; j < t; j++)
        {
            int n = random(1000, 2000, int);
            assert(n >= 1000 && n <= 2000);
            cout << 2 * n << endl;
            sum += n;
            assert(sum <= 2e5 && sum >= 1);
            for (int k = 0; k < 2 * n; k++)
            {
                char ch = random('a', 'z', char);
                assert(ch >= 'a' && ch <= 'z');
                cout << ch;
            }
            cout << endl;
        }
    }
    else if (i == 12)
    {
        int t = 1;
        assert(t >= 1 && t <= 1000);
        cout << t << endl;
        for (int j = 0; j < t; j++)
        {
            int n = 20000;
            cout << 2 * n << endl;
            for (int k = 0; k < 2 * n; k++)
            {
                if (k % 2 == 0)
                {
                    cout << 'a';
                }
                else
                {
                    cout << 'b';
                }
            }
            cout << endl;
        }
    }
    else if (i == 13)
    {
        int t = 1;
        assert(t >= 1 && t <= 1000);
        cout << t << endl;
        for (int j = 0; j < t; j++)
        {
            int n = 10000;
            assert(n >= 1 && n <= 2e5);
            cout << 2 * n << endl;
            for (int k = 0; k < 2 * n; k++)
            {
                char ch = random('a', 'z', char);
                assert(ch >= 'a' && ch <= 'z');
                cout << ch;
            }
            cout << endl;
        }
    }
    else
    {
        int t = 1;
        assert(t >= 1 && t <= 1000);
        cout << t << endl;
        for (int j = 0; j < t; j++)
        {
            int n = 100000;
            assert(n >= 1 && n <= 2e5);
            cout << 2 * n << endl;
            for (int k = 0; k < 2 * n; k++)
            {
                char ch = random('a', 'z', char);
                assert(ch >= 'a' && ch <= 'z');
                cout << ch;
            }
            cout << endl;
        }
    }
}

// ***     CODE     ****
void solve(string ipath, string opath)
{
    freopen(ipath.c_str(), "r", stdin);
    freopen(opath.c_str(), "w", stdout);
    // solution starts here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int v[26] = {0};
        int ct = 0;
        for (int i = 0; i < 26; i++)
            v[i] = 0;
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - 'a';
            v[x]++;
        }
        for (int i = 0; i < 26; i++)
        {
            v[i] = v[i] % 2;
            if (v[i] > 0)
                ct++;
        }
        int sum = 0, i = 0;
        int ans[ct];
        for (int j = 0; j < 26; j++)
        {
            if (v[j] > 0)
            {
                ans[i] = j;
                i++;
            }
        }
        for (int i = 0; i < ct; i += 2)
        {
            sum += ans[i + 1] - ans[i];
        }
        cout << sum << endl;
    }
}

int main()
{
    int p = 10;
    for (int i = 0; i < p; i++)
    {
        string path = to_string(i);
        if (i < 10)
            path = "0" + path; // "01" "02" "10"
        string ipath = "RECode 26.0/testRECode/Divide the String/input/input" + path + ".txt";
        test(ipath, i);
        string opath = "RECode 26.0/testRECode/Divide the String/output/output" + path + ".txt";
        solve(ipath, opath);
    }
}
