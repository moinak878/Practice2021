#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll q;
    cin >> q;
    ll incr = 0;
    set<ll> s;
    map<ll, ll> m;
    while (q--)
    {
        ll type;
        cin >> type;
        if(type == 1){
            ll x;
            cin >> x;
            //add x to multiset
            x = x - incr; //nice trix :D
            s.insert(x);
            if(m.find(x) == m.end()){
                m[x] = 1;
            }
            else
                m[x]++;
        }
        else if(type == 2){
            //add x to all elements in multiset
            ll x;
            cin >> x;
            incr += x; 
        }
        else{
            //find min in multiset
            
            if(s.empty())
                cout << "0\n";
            else{
                ll mini = *s.begin();
                cout << mini +incr<< "\n";
                if (m[mini] == 1)
            {
                m.erase(mini);
                s.erase(mini);
            }
            else{
                m[mini]--;
            }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

