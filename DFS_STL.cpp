// c++11 ...  g++ DFS_STL.g++ -std=c++11

#include <bits/stdc++.h>
#define FOR(it,A) for(auto it = A.begin(); it != A.end(); it++)
#define N 100
#define E 6    // Aristas
using namespace std;

bool vis[N];
vector<int> G[N];

void dfs(int s){

	if(vis[s]) return;
	
	vis[s] = true;
	FOR(it,G[s])
		dfs(*it);
}
int main(){

	int a,b;
	for(int i=0;i<E;i++){
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
  cin>>start;
	dfs(start);
	return 0;
}
