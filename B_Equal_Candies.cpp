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
        vector<ll> v(n);
        for (ll i = 0; i < v.size(); i++)
        {
            cin >> v[i];
        }
        ll x = *min_element(v.begin(), v.end());
        ll sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > x)
                sum = sum + (v[i] - x);
        }
        cout << sum << endl;
    }
}