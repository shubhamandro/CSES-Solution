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


int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
    int n,m;
	cin>>n>>m;
	vector<vector<int>> dp(n,vector<int>(m+1,0));
	int x;
	cin>>x;
	if(x==0){
		fill(dp[0].begin(),dp[0].end(),1);
	}
	else{
		dp[0][x]=1;
	}
	for(int i=1;i<n;i++){
		cin>>x;
		if(x==0){
			for(int j=1;j<=m;j++){
				for(int k:{j+1,j,j-1}){
					if(k>=1 && k<=m){
						dp[i][j]+=dp[i-1][k];
					}
					dp[i][j]%=mod;
				}
			}
		}
		else{
			for(int k:{x+1,x,x-1}){
				if(k>=1 && k<=m){
					dp[i][x]+=dp[i-1][k];
				}
				dp[i][x]%=mod;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=m;i++){
		ans+=dp[n-1][i];
	}
	ans%=mod;
	cout<<ans<<endl;
	return 0;
}
