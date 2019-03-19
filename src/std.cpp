#include <bits/stdc++.h>

# define ll long long
# define ios ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
# define pb push_back
# define pob pop_back
# define pf push_front
# define pof pop_front

using namespace std;

const ll N = 1e5 + 10;

ll n, m, k, a[N], cnt, x, i, ans;
map <int, int> d;

int main() {
    ios
    cin >> n >> k >> m;
    for(i = 1;i <= n * k;i++){
        cin >> a[i];
        d[a[i]]++;
    }
    sort(a + 1, a + n * k + 1);
    if(a[n] - a[1] > m){
        cout << 0;
        return 0;
    }
    for(i = n;i <= n * k;i++)
    {
        if(a[i] - a[1] <= m)
            x = i;
        else
            break;
    }
    cnt = x - n;
    i = 1;
    while(cnt > 0)
    {
        ans += a[i];
        i += min(cnt,k - 1);
        i++;
        cnt -= min(cnt, k - 1);
    }
    while(i <= x)
    {
        ans += a[i];
        i++;
    }
    cout << ans;
}
