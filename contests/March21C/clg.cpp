
// // #include<iostream>
// // #include<algorithm>
// // #include<vector>
// // #include<cmath>
// // #define ll long long int 
// // #define INF 1e15

// // using namespace std;
// // ll minv(ll a,ll b){
// //     if(a<b)
// //         return a;
// //     return b;
// // }

// // ll maxv(ll a,ll b){
// //     if(a>b)
// //         return a;
// //     return b;
// // }

// // ll res(ll n,ll e,ll h , ll a , ll b , ll c){
// //     ll sol=1e15;
// //     if (n <= 0)
// //         sol = 0;
// //     if (n <= e && n <= h)
// //     {
// //         sol = minv(sol, n * c); //cake
// //             }
// //         if(3*n<=h){
// //             sol = minv(sol, n * b);
// //         }
// //         if(2*n<=e){
// //             sol = minv(sol, n * a);
// //         }
// //         if((h-n)/2>=1 && (h-n)/2 >=n-e ){
// //             if(b<c){
// //                 ll temp = minv(n - 1, (h - n) / 2);
// //                 sol = minv(sol, (b - c) * temp + n * c);
// //             }
// //             else{
// //                 ll temp = maxv(1, n - e);
// //                 sol = minv(sol, (b - c) * temp + n * c);
// //             }
// //         }
// //         if(e-n>=1 && e-n >=n- h){
// //             if(a<c){
// //                 ll temp = minv(n - 1, e - n);
// //                 sol = minv(sol, (a - c) * temp + n * c);
// //             }
// //             else{
// //                 ll temp = maxv(1, n - h);
// //                 sol = minv(sol, (a - c) * temp + n * c);
// //             }
// //         }
// //         if(e/2>=1 && e/2>=(3*n-h+2)/3){
// //             if(a<b){
// //                 ll temp = minv(n - 1, e / 2);
// //                 sol = minv(sol, (a - b) * temp + n * b);
// //             }
// //             else{
// //                 ll temp = maxv(1, (3 * n - h + 2) / 3);
// //                 sol=minv(sol, (a - b) * temp + n * b);
// //             }
// //         }
// //         if(e>=3 && h>=4 && n>=3){
// //             sol = minv(sol, a + b + c + res(n - 3, e - 3, h - 4, a, b, c));
// //         }
// //         return sol;
// // }
// // int main(){
// //     ll t;
// //     cin >> t;
// //     while(t--){
// //         ll n, e, h, a, b, c;
// //         cin >> n >> e >> h >> a >> b >> c;
// //         ll sol=1e15;
// //         sol = res(n, e, h, a, b, c);
// //         if (sol == 1e15)
// //             cout << -1 << endl;
// //         else
// //             cout << sol << endl;
// //     }
// //     return 0;
// // }






// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<cmath>
// #define ll long long int 
// #define INF 1e15
// using namespace std;


// ll mini(ll a , ll b)
// {
//     if(a<b)
//         return a;
//     return b;
// }

// ll maxi(ll a , ll b){
//     if(a>b)
//         return a;
//     return b;
// }

// ll greedy(ll n,ll e,ll h , ll a , ll b , ll c){
//     ll sol = INF;
//     ll t;
//     ll tempa;
//     if (n <= 0)
//         return 0;
//     if (2 * n <= e)
//         {
//             sol = mini(sol, n * a);
//             tempa = e - h;
//             tempa = t + (e - h) / 2;
//         }
//     if(3*n<=h)
//         sol = mini(sol, n * b);
//     if (n <= e && n <= h)
//         sol = mini(sol, n * c); 
//     if((h-n)/2>=1 && (h-n)/2 >=n-e ){
//             if(b<c)
//                  t = mini(n - 1, (h - n) / 2);  
//             else
//                  t = maxi(1, n - e);

//             sol = mini(sol, (b - c) * t + n * c);
//         }
//         if(e-n>=1 && e-n >=n- h){
//             if(a<c){
//                 t = mini(n - 1, e - n);
    
//             }
//             else{
//                 t = maxi(1, n - h);
                
//             }
//             sol = mini(sol, (a - c) * t + n * c);
//         }
//         if(e/2>=1 && e/2>=(3*n-h+2)/3){
//             if(a<b){
//                 ll temp = mini(n - 1, e / 2);
//                 sol = mini(sol, (a - b) * temp + n * b);
//             }
//             else{
//                 ll temp = maxi(1, (3 * n - h + 2) / 3);
//                 sol=mini(sol, (a - b) * temp + n * b);
//             }
//         }
//         if(e>=3 && h>=4 && n>=3){
//             sol = mini(sol, a + b + c + greedy(n - 3, e - 3, h - 4, a, b, c));
//         }
//         return sol;
// }
// int main(){
//     ll t;
//     cin >> t;
//     while(t--){
//         ll n, e, h, a, b, c;
//         cin >> n >> e >> h >> a >> b >> c;
//         ll sol;
//         sol = greedy(n, e, h, a, b, c);
//         if (sol == INF)
//             cout << -1 << endl;
//         else
//             cout << sol << endl;
//     }
//     return 0;
// }





#include<bits/stdc++.h>
#define ll long long int 
#define INF 1e15

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

ll mini(ll a , ll b)
{
    if(a<b)
        return a;
    return b;
}

ll maxi(ll a , ll b){
    if(a>b)
        return a;
    return b;
}

ll greedy(ll n,ll e,ll h , ll a , ll b , ll c){
    ll sol = INF;
    ll t;
    ll tempa;
    if (n <= 0)
        return 0;
    if (2 * n <= e)
        {
            sol = sol<n*a?sol:n*a;
            tempa = e - h;
            tempa = t + (e - h) / 2;
        }
    if(3*n<=h)
        sol = sol<n*b?sol:n*b;
    if (n <= e && n <= h)
        sol = sol<n*c?sol:n*c; 
        
        
    if(e/2>=1 && e/2>=(3*n-h+2)/3){
            tempa = (n-h)/3;
            if(a<b){
               t = mini(n - 1, e / 2);
            }
            else{
                t= ((3 * n - h + 2) / 3)>1?((3 * n - h + 2) / 3):1;
                
            }
            sol=mini(sol, (a - b) * t + n * b);
        }
    
    
    if((h-n)/2>=1 && (h-n)/2 >=n-e ){
            tempa =  (e - h) / 2;
            if(b<c)
                 t = mini((h - n) / 2,n-1);  
            else
                 t = (n-e)>1?n-e:1;

            sol = mini(sol,(b - c) * t + n * c);
        }
        
        
        
        
        if(e-n>=1 && e-n >=n- h){
            tempa =  n-h;
            tempa+=e/2+h/3;
            if(a<c){
                t = n-1<e-n?n-1:e-n;
    
            }
            else{
                t = n-h>1?n-h:1;
                
            }
            sol = mini((a - c) * t + n * c,sol);
        }
        //complex case
        if(h>=4 && e>=3 && n>=3){
            sol = mini(sol, a + b + c + greedy(n - 3, e - 3, h - 4, a, b, c));
        }
        return sol;
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
                pair<ll, ll> q[3][n];
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
                        if(e-1*(j+1)>=0 && h-1*(j+1)>=0 && c*(j+1)<dp[i][j]){
                            dp[i][j] = c * (j + 1);
                            q[i][j] = make_pair(e-1*(j+1),h-1*(j+1));
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
            // for (int i = 0; i < 3;i++){
            //     for (int j = 0; j < n;j++){
            //         if(dp[i][j]==INT_MAX)
            //             cout << "INF ";
            //         else
            //             cout << dp[i][j] << " ";
            //         }
            //     cout << endl;
            // }
            // cout<<endl<<endl;
            //cout <<dp[2][n-1]<<endl; //checker dp soln
            ll sol=INF;
            sol = greedy(n, e, h, a, b, c);
            if (sol == INF)
            cout << -1 << endl;
            else
            cout << sol << endl;
        }
        else
            cout <<-1<<endl;
        }
    }
    return 0;
}