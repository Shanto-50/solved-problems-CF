#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> b(n);
        for (ll i = 0; i < b.size(); i++)
        {
            cin >> b[i];
        }
        vector<ll> a;
        a.push_back(b[0]);
        for (ll i = 1; i < b.size(); i++)
        {
            if (b[i] < b[i - 1])
                a.push_back(b[i]);
            a.push_back(b[i]);
        }
        cout << a.size() << endl;
        for (ll i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
    }
}