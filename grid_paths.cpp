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
#define pie =3.14159265358979323846264338327950;
const int mod= 1e9+7;
string s;
int ans=0;
vector<vector<bool>> vis(7,vector<bool>(7,false));

bool check(int i,int j){
	return i>=0&&i<7&&j>=0&&j<7&&!vis[i][j];
}

void dfs(int i,int j,int step){
	//cout<<i<<" "<<j<<endl;
	if(i==6 && j==0){
		if(step==48){
			ans++;
		}
		return;
	}
	vis[i][j]=true;
	if(s[step]=='?' || s[step]=='L'){
		if(j&&!vis[i][j-1]){
			if(!(!check(i,j-2)&&check(i+1,j-1)&&check(i-1,j-1)))
			dfs(i,j-1,step+1);
		}
	}
	if(s[step]=='?' || s[step]=='R'){
		if(j<6&&!vis[i][j+1]){
			if(!(!check(i,j+2)&&check(i+1,j+1)&&check(i-1,j+1)))
			dfs(i,j+1,step+1);
		}
	}
	if(s[step]=='?' || s[step]=='U'){
		if(i&&!vis[i-1][j]){
			if(!(!check(i-2,j)&&check(i-1,j+1)&&check(i-1,j-1)))
			dfs(i-1,j,step+1);
		}
	}
	if(s[step]=='?' || s[step]=='D'){
		if(i<6&&!vis[i+1][j]){
			if(!(!check(i+2,j)&&check(i+1,j+1)&&check(i+1,j-1)))
			dfs(i+1,j,step+1);
		}
	}
	vis[i][j]=false;
}
int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	cin>>s;
	dfs(0,0,0);
	cout<<ans<<endl;
	return 0;
}
