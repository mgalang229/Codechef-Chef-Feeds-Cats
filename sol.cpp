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
		int a[n];
		for(int i=1; i<=n; ++i)
			a[i]=0;
		bool ok=0;
		for(int i=1; i<=m; ++i) {
			int x;
			cin >> x;
			bool tmp=0;
			for(int j=1; j<=n; ++j)
				if(j!=x)
					tmp|=(a[x]>a[j]);
			ok|=tmp;
			++a[x];
		}
		cout << (ok?"NO":"YES") << "\n";
	}
}
