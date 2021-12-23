#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long 
#define all(v) v.begin(), v.end()
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define pb push_back
#define mod 1000000007

int s[1000000000];

ll gcd(ll a, ll b)
{
	if(b==0)
		return a;
	return gcd(b, a%b);
}

void sieveOfEratosthenes(int N)
{
	// Create a boolean array "prime[0..n]" and
	// initialize all entries in it as false.
	vector <bool> prime(N+1, false);

	// Initializing smallest factor equal to 2
	// for all the even numbers
	for (int i=2; i<=N; i+=2)
		s[i] = 2;

	// For odd numbers less then equal to n
	for (int i=3; i<=N; i+=2)
	{
		if (prime[i] == false)
		{
			// s(i) for a prime is the number itself
			s[i] = i;

			// For all multiples of current prime number
			for (int j=i; j*i<=N; j+=2)
			{
				if (prime[i*j] == false)
				{
					prime[i*j] = true;

					// i is the smallest prime factor for
					// number "i*j".
					s[i*j] = i;
				}
			}
		}
	}
}

// Function to generate prime factors and its power
void generatePrimeFactors(int N)
{
	// s[i] is going to store smallest prime factor
	// of i.

	// Filling values in s[] using sieve
	sieveOfEratosthenes(N);

	cout << "Factor power\n";

	int curr = s[N]; // Current prime factor of N
	int cnt = 1; // Power of current prime factor

	// Printing prime factors and their powers
	while (N > 1)
	{
		N /= s[N];

		// N is now N/s[N]. If new N als has smallest
		// prime factor as curr, increment power
		if (curr == s[N])
		{
			cnt++;
			continue;
		}

		cout << curr << " : " << cnt << "\n";

		// Update current prime factor as s[N] and
		// initializing count as 1.
		curr = s[N];
		cnt = 1;
	}
}



void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
	ll g = 0;
	for (ll i = 0; i < n; i++)
		{cin >> a[i];
	g = gcd(g, a[i]);}
	//cout << " g : " << g;
	generatePrimeFactors(g);
	// 2 cases :  >k and =k in gcd 
	// and 0 in gcd but 1 in all except for 1 
	// take maximum of these two cases 
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}


