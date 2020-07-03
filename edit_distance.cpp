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
	string a,b;
	cin>>a>>b;
	int n=a.length();
	int m=b.length();
	int dp[n+1][m+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0) dp[i][j]=j;
			else if(j==0) dp[i][j]=i;
			else if(a[i-1]==b[j-1]){
				dp[i][j]=dp[i-1][j-1];
			}
			else{
				dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}
