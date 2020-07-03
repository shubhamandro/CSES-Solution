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
	int ar[n];
	For(i,n){
		cin>>ar[i];
		ar[i]= (ar[i]%n+n)%n;
	}
	int sum=0;
	map<int,int> mp;
	mp[0]=1;
	int ans=0;
	For(i,n){
		sum+=ar[i];
		sum%=n;
		if(mp.find(sum)!=mp.end()){
			ans+= mp[sum];
		}
		mp[sum]++;
	}
	cout<<ans<<endl;
	return 0;
}
