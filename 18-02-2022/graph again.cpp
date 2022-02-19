#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	// declare the adjacent matrix
	vector<int> adj[n+1];

	// take edges as input
	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v;
	    adj[u].push_back(v);
	    adj[v].push_back(u);
	}



    for(int i=0; i<n+1; i++)
    {
        cout<<i<< " ";

        for(int j=0; j<adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }

        cout<< endl;
    }
	return 0;
}

