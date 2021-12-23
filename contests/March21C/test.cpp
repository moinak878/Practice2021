// Failed Test Cases FIX THEM
// 1                  
// 7 10 20 1 100 2 --> 11

// 1          
// 5 7 6 3 8 5 ---> 21

// 1
// 850000 9500000 70000 250000 100000 650000  --> 20009....


#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long int 
#define INF 1e9

using namespace std;

bool possible(ll n,ll e , ll h){
    ll x = 0;
    if(e==h)
        x = h;
    else if(e>h)
        x = h + (e - h) / 2;
    else
        x = e + (h - e) / 3;
    if(n>x)
        return false;
    return true;
}

int main(){
    ll t = 0;
    cin >> t;
    while(t--){
        ll n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;
        if(n<=0)
            cout << 0 << endl;
        else
        {
            if (possible(n, e, h))
            {
                //dp solution
                ll p[] = {a, b, c};
                ll dp[3][n];
                for (ll i = 0; i < 3; i++)
                {
                    for (ll j = 0; j < n; j++)
                        dp[i][j] = INF;
                }
                pair<ll, ll> q[3][n+1];
            if(e-2>=0){
            q[0][0] = make_pair(e-2, h); //omlette
            dp[0][0] = a;
            }

            for (ll i = 0; i < 3; i++)
            {
                for (ll j = 0; j < n ;j++){
                    
                    if(i==0 && j!=0){
                        if(q[i][j-1].first-2>=0){
                            dp[i][j] = dp[i][j - 1] + a;
                            q[i][j] = make_pair(q[i][j-1].first-2,q[i][j-1].second);
                        }
                    } //first row filled   -- only omelettes

                    if(i==1 &&j==0){
                        
                            dp[i][j] = dp[i - 1][j];
                            q[i][j] = q[i - 1][j];
                        
                            if(h-3>=0 && b<dp[i][j]){
                            dp[i][j] = b;
                            q[i][j] = make_pair(e, h - 3);
                        }
                    }
                    if(i==1 && j!=0){
                        dp[i][j] = dp[i - 1][j];
                        q[i][j] = q[i - 1][j];

                        if(q[i - 1][j - 1].first - 2>=0 && dp[i-1][j-1]+a<dp[i][j]){
                            dp[i][j] = dp[i - 1][j - 1] + a;
                            q[i][j] = make_pair(q[i-1][j-1].first-2,q[i-1][j-1].second);
                        }

                        if(q[i - 1][j - 1].second - 3>=0 && dp[i-1][j-1]+b<dp[i][j]){
                            dp[i][j] = dp[i - 1][j - 1] + b;
                            q[i][j] = make_pair(q[i-1][j-1].first,q[i-1][j-1].second-3);
                        }

                        if(q[i][j - 1].first - 2>=0 && dp[i][j-1]+a<dp[i][j]){
                            dp[i][j] = dp[i][j - 1] + a;
                            q[i][j] = make_pair(q[i][j-1].first-2,q[i][j-1].second);
                        }

                        if(q[i][j - 1].second - 3>=0 && dp[i][j-1]+b<dp[i][j]){
                            dp[i][j] = dp[i][j - 1] + b;
                            q[i][j] = make_pair(q[i][j-1].first,q[i-1][j-1].second-3);
                        }
                        if(e-2*(j+1)>=0 && a*(j+1)<dp[i][j]){
                            dp[i][j] = a * (j + 1);
                            q[i][j] = make_pair(e - 2 * (j + 1), h);
                        }
                        if(h-3*(j+1)>=0 && b*(j+1)<dp[i][j]){
                            dp[i][j] = b * (j + 1);
                            q[i][j] = make_pair(e,h-3*(j+1));
                        }
                    } //2nd row filled


                    if(i==2 &&j==0){
                        
                            dp[i][j] = dp[i - 1][j];
                            q[i][j] = q[i - 1][j];
                        
                        if(h-1>=0 && e-1>=0 && c<dp[i][j]) {
                            dp[i][j] = c;
                            q[i][j] = make_pair(e-1, h - 1);
                        }
                    }
                    if(i==2 && j!=0){
                        dp[i][j] = dp[i - 1][j];
                        q[i][j] = q[i - 1][j];

                        if(q[i - 1][j - 1].first - 2>=0 && dp[i-1][j-1]+a<dp[i][j]){
                            dp[i][j] = dp[i - 1][j - 1] + a;
                            q[i][j] = make_pair(q[i-1][j-1].first-2,q[i-1][j-1].second);
                        }

                        if(q[i - 1][j - 1].second - 3>=0 && dp[i-1][j-1]+b<dp[i][j]){
                            dp[i][j] = dp[i - 1][j - 1] + b;
                            q[i][j] = make_pair(q[i-1][j-1].first,q[i-1][j-1].second-3);
                        }

                        if(q[i-1][j - 1].first - 1>=0 && q[i-1][j - 1].second - 1>=0 && dp[i-1][j-1]+c<dp[i][j]){
                            dp[i][j] = dp[i-1][j - 1] + c;
                            q[i][j] = make_pair(q[i-1][j-1].first-1,q[i-1][j-1].second-1);
                        }

                        if(q[i][j - 1].first - 2>=0 && dp[i][j-1]+a<dp[i][j]){
                            dp[i][j] = dp[i][j - 1] + a;
                            q[i][j] = make_pair(q[i][j-1].first-2,q[i][j-1].second);
                        }

                        if(q[i][j - 1].second - 3>=0 && dp[i][j-1]+b<dp[i][j]){
                            dp[i][j] = dp[i][j - 1] + b;
                            q[i][j] = make_pair(q[i][j-1].first,q[i][j-1].second-3);
                        }

                         if(q[i][j - 1].first - 1>=0 && q[i][j - 1].second - 1>=0 && dp[i][j-1]+c<dp[i][j]){
                            dp[i][j] = dp[i][j - 1] + c;
                            q[i][j] = make_pair(q[i][j-1].first-1,q[i][j-1].second-1);
                        }

                        if(e-2*(j+1)>=0 && a*(j+1)<dp[i][j]){
                            dp[i][j] = a * (j + 1);
                            q[i][j] = make_pair(e - 2 * (j + 1), h);
                        }
                        if(h-3*(j+1)>=0 && b*(j+1)<dp[i][j]){
                            dp[i][j] = b * (j + 1);
                            q[i][j] = make_pair(e,h-3*(j+1));
                        }
                        if(e-1*(j+1)>=0 && h-1*(j+1)>=0 && c*(j+1)<dp[i][j]){
                            dp[i][j] = c * (j + 1);
                            q[i][j] = make_pair(e-1*(j+1),h-1*(j+1));
                        }

                    } //3rd and the last row yayyy

                } 
            }
            for (int i = 0; i < 3;i++){
                for (int j = 0; j < n;j++){
                    if(dp[i][j]==INT_MAX)
                        cout << "INF ";
                    else
                        cout << dp[i][j] << " ";
                    }
                cout << endl;
            }
            cout<<endl<<endl;
            cout <<dp[2][n-1]<<endl;
        }
        else
            cout <<-1<<endl;
        }
    }
    return 0;
}