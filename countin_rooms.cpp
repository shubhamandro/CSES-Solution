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

int di[4]={1,-1,0,0};
int dj[4]={0,0,1,-1};

int n,m;
char ar[1001][1001];
vector<vector<bool>> vis(1001,vector<bool>(1001,false));

void dfs(int i,int j){
	vis[i][j]=true;
	for(int x=0;x<4;x++){
		int ii=i+di[x];
		int jj=j+dj[x];
		if(ii>=0 && ii<n && jj>=0 && jj<m && !vis[ii][jj] && ar[ii][jj]=='.'){
			dfs(ii,jj);
		}
	}
}

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	cin>>n>>m;
	For(i,n) For(j,m) cin>>ar[i][j];
	int ans=0;
	For(i,n){
		For(j,m){
			if(!vis[i][j] && ar[i][j]=='.'){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout<<ans<<endl;	
	return 0;
}
