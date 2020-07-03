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
	int a,b;
	cin>>a>>b;
	int dp[501][501];
	memset(dp,1e9,sizeof dp);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(i!=j){
				dp[i][j]=1e9;
			}
			for(int k=1;k<i;k++){
				dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
			}
			for(int k=1;k<j;k++){
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
			}
		}
	}
	cout<<dp[a][b]<<endl;
	return 0;
}
