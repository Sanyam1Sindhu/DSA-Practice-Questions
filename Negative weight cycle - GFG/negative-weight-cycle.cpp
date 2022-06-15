// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    vector<int> dist(n,INT_MAX);
	    dist[0]=0;
	    for(int i=1;i<n;i++)
	    {
	        for(auto it:edges)
	        {
	            if(dist[it[0]]!=INT_MAX && dist[it[0]]+it[2]<dist[it[1]])
	                dist[it[1]]=dist[it[0]]+it[2];
	           
	            
	        }
	    }
	    int flag=0;
	    for(auto it:edges)
	    {
	        if(dist[it[0]]+it[2]<dist[it[1]])
	            flag=1;
	            
	        
	    }
	    return flag;
	    // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends