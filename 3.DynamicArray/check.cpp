#include <bits/stdc++.h>

using namespace std;

int main(){
 vector<vector<int>> adj(3); //using 2-D vector
 adj[0].push_back(1);
 adj[0].push_back(2);
 adj[0].push_back(3);
 adj[1].push_back(4);
 adj[1].push_back(5);
 cout<<adj[1].size(); //correction
 return 0;
}
