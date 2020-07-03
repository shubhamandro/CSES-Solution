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

int n,k;
int ar[200005];

bool check(int mid){
	int cnt=0;
	int sum=0;
	int i=0;
	while(i<n){
		if(sum+ar[i]>mid){
			cnt++;
			sum=0;
		}
		else{
			sum+=ar[i];
			i++;
		}
	}
	if(sum){
		cnt++;
	}
	if(cnt<=k) return true;
	return false;
}

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	cin>>n>>k;
	int sum=0;
	For(i,n){		
		cin>>ar[i];
		sum+=ar[i];
	}
	int l= *max_element(ar,ar+n);
	int r=sum;
	int ans=0;
	while(l<=r){
		int mid= l+(r-l)/2;
		if(check(mid)){
			ans=mid;
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
