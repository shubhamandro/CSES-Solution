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
	int n,x;
	cin>>n>>x;
	int ar[n];
	For(i,n) cin>>ar[i];
	map<int,pair<int,int>> mp;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			int sum=ar[i]+ar[j];
			if(mp.find(x-sum)==mp.end()){
				mp[sum]={i,j};
			}
			else{
				if(i!=mp[x-sum].fi && j!=mp[x-sum].se && i!=mp[x-sum].fi && j!=mp[x-sum].fi){
					cout<<i+1<<" "<<j+1<<" "<<mp[x-sum].fi+1<<" "<<mp[x-sum].se+1<<endl;
					return 0;
				}
				else{
					mp[sum]={i,j};
				}
			}
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}
