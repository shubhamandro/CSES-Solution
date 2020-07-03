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

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	int n,x;
	cin>>n>>x;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end(),greater<int>());
	int ans=0;
	int cnt=0;
	int no=0;
	int l=0;
	int r=n-1;
	while(l<=r){
		if(no==2){
			ans++;
			cnt=0;
			no=0;
		}
		if(cnt+vec[l]<=x){
			cnt+=vec[l];
			no++;
			l++;
		}
		else if(cnt+vec[r]<=x){
			cnt+=vec[r];
			no++;
			r--;
		}
		else{
			ans++;
			cnt=0;
		}
	}
	if(cnt) ans++;
	cout<<ans<<endl;
	return 0;
}
