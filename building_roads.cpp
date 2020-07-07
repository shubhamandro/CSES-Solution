#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define nl cout<<"\n"
#define pb push_back
#define se second
#define fi first
#define int long long 
#define pi pair<int,int>
#define vpi vector<pi>
#define vvi vector<vpi>
#define For(i,n) for(int i=0;i<n;i++)
#define pie =3.14159265358979323846264338327950;
const int mod= 1e9+7;

vector<int> graph[100005];
vector<int> vis(100005,false);

void dfs(int i){
	vis[i]=true;
	for(int j:graph[i]){
		if(!vis[j]){
			dfs(j);
		}
	}
}

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a].pb(b);
		graph[b].pb(a);
	}
	vector<int> temp;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			temp.pb(i);
			dfs(i);
		}
	}
	if(temp.size()==1){
		cout<<0<<endl;
	}
	else{
		cout<<temp.size()-1<<endl;
		for(int i=1;i<temp.size();i++){
			cout<<temp[i]<<" "<<temp[i-1]<<" "<<endl;
		}
	}
	return 0;
}
