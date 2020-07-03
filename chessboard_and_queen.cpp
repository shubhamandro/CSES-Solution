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
int ans=0;

bool check(vector<vector<char>> &vec, int row, int col){
	for(int i=row;i>=0;i--){
		if(vec[i][col]=='Q') return false;
	}
	for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--){
		if(vec[i][j]=='Q') return false;
	}
	for(int i=row-1, j=col+1; i>=0 && j<8; i--,j++){
		if(vec[i][j]=='Q') return false;
	}
	return true;
}

void find(vector<vector<char>> &vec, int row){
	if(row==8){
		ans++;
		return;
	}
	for(int i=0;i<8;i++){
		if(check(vec,row,i) && vec[row][i]=='.'){
			vec[row][i]='Q';
			find(vec,row+1);
			vec[row][i]='.';
		}
	}
}

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	vector<vector<char>> vec(8,vector<char> (8));
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>vec[i][j];
		}
	}
	find(vec,0);
	cout<<ans<<endl;
	return 0;
}
