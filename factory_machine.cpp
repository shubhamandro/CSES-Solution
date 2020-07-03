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

const int nmax= 200005;
int ar[nmax];
int n,t;
bool check(int val){
	int cnt=0;
	for(int i=0;i<n;i++){
		cnt+= (val/ar[i]);
		if(cnt>=t) return 1;
	}
	return 0;
}

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	cin>>n>>t;
	for(int i=0;i<n;i++) cin>>ar[i];
	int ans;
	int l=0;
	int r=LLONG_MAX;
	while(l<=r){
		int mid= l+ (r-l)/2;
		//cout<<mid<<endl;
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
