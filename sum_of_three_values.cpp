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
	int ar[n];
	map<int,set<int>> mp;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		mp[ar[i]].insert(i);
	}
	sort(ar,ar+n);
	for(int i=0;i<n;i++){
		int left= i+1;
		int right= n-1;
		while(left<right){
			int sum=ar[i]+ar[left]+ar[right];
			if(sum==x){
				int a= *mp[ar[i]].begin();
				int b=0;
				for(int k:mp[ar[left]]){
					if(k!=a){
						b=k;
						break;
					}
				}
				int c=0;
				for(int k:mp[ar[right]]){
					if(k!=a && k!=b){
						c=k;
						break;
					}
				}
				cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
				return 0;
			}
			else if(sum>x){
				right--;
			}
			else{
				left++;
			}
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}
