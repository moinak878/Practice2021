    #include<bits/stdc++.h>
    #define ll long long 
    using namespace std;
    int main(){
            ll n,k;
            cin>>n>>k;
            vector<ll> c(n);
            ll ans = 0 ;
            for(ll i=0;i<n;i++)
                    cin>>c[i];
            map<ll,ll> m;
            for(int i=0;i<k;i++)
                    m[c[i]]++;
            ans = m.size();
            for(ll i=k;i<n;i++){
                    m[c[i]]++;
                    m[c[i-k]]--;
                    if(m[c[i-k]]==0)
                            m.erase(c[i-k]);
                    ans = max(ans,(ll)m.size());
            }
            cout<<ans<<"\n";
            return 0;
    }