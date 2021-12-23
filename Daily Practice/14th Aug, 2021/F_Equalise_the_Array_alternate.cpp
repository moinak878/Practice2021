#include <bits/stdc++.h>
using namespace std;
#define int long long

void Solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	map<int, int> freq;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		freq[a[i]]++;
	}
	int maxFreq = 0;
	for(auto i: freq) {
		cout << i.first << " -> "<<i.second << "\n";
		maxFreq = max(maxFreq, i.second);
	}
	cout<<"\nmax freq : "<<maxFreq<<endl;
	int cnt[maxFreq + 1];
	for(int i = 0; i <= maxFreq; i++) {
		cnt[i] = 0;
	}
	//cnt array with maxFreq + 1 elements ok.
	for(auto i: freq) {
		cnt[i.second]++;
	}
	cout << "cnt array : ";
	for (auto i : cnt)
		cout << i << " ";
	cout << endl;



	int GoToZero = 0, GoToC = cnt[maxFreq];
	int ValZero = 0, valC = 0;
	for(int i = 1; i < maxFreq; i++) {
		GoToZero += cnt[i]; //how many go to zero 
		ValZero += cnt[i] * i; //value that go to zero 2 2 3 --> 4 
	}
	cout << "gotozero , valzero : "<<GoToZero<<" , "<<ValZero<<endl;

	int ans = ValZero;
	for(int C = maxFreq - 1; C > 0; C--) {
		GoToZero -= cnt[C];
		ValZero -= cnt[C] * C;
		valC += GoToC; //actually 1*gotoC
		GoToC += cnt[C];
		ans = min(ans, ValZero + valC);
	}
	cout << ans << "\n";
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		Solve();
	}
}