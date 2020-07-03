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
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	sort(ar,ar+n);
	int left[n];
	int right[n];
	left[0]=ar[0];
	for(int i=1;i<n;i++) left[i]=left[i-1]+ar[i];
	right[n-1]=ar[n-1];
	for(int i=n-2;i>=0;i--) right[i]=right[i+1]+ar[i];
	int ans=left[n-1];
	for(int i=0;i<n;i++){
		if(left[i]>=right[i]){
			if(i==n-1){
				ans= 2*ar[i];
			}
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
