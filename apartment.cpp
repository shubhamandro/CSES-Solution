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
	int n,m,k;
	cin>>n>>m>>k;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sort(ar,ar+n);
	sort(arr,arr+m);
	int i=0;
	int j=0;
	int ans=0;
	while(i<n && j<m){
		if(ar[i]>=arr[j]){
			if(ar[i]-arr[j]<=k){
				ans++;
				i++;
				j++;
			}
			else{
				j++;
			}
		}
		else{
			if(arr[j]-ar[i]<=k){
				ans++;
				j++;
				i++;
			}
			else{
				i++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
