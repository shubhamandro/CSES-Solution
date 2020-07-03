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

int find(vector<int> vec, int ind, int curr, int total){
	if(ind==0){
		return abs(total-curr-curr);
	}
	int ans= min(find(vec,ind-1, curr+vec[ind-1],total),find(vec,ind-1,curr,total));
}

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	vector<int> vec(n,0);
	int total=0;
	for(int i=0;i<n;i++){
		cin>>vec[i];
		total+=vec[i];
	}
	cout<<find(vec,n,0,total)<<endl;
	return 0;
}
