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
	int n;
	cin>>n;
	char ar[n][n];
	For(i,n){
		For(j,n){
			cin>>ar[i][j];
		}
	}
	vector<vector<int>> dp(n,vector<int>(n,0));
	For(i,n){
		if(ar[i][0]!='*') dp[i][0]=1;
		else break;
	}
	For(i,n){
		if(ar[0][i]!='*') dp[0][i]=1;
		else break;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(ar[i][j]=='*'){
				dp[i][j]=0;
			}
			else{
				dp[i][j]= dp[i-1][j]+dp[i][j-1];
				dp[i][j]%=mod;
			}
		}
	}
	cout<<dp[n-1][n-1]<<endl;
	return 0;
}
