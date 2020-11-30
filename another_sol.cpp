#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[m];
		for(int i=0; i<m; ++i)
			cin >> a[i];
		int b[n];
		memset(b, 0, sizeof(b));
		bool ok=1;
		for(int i=0; i<m; ++i) {
			b[a[i]-1]++;
			int mx=*max_element(b, b+n);
			int mn=*min_element(b, b+n);
			if(mx-mn>1)
				ok=0;
		}
		cout << (ok?"YES":"NO") << "\n";
	}
}
