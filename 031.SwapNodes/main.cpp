#include<bits/stdc++.h>
using namespace std;

int main(){
    //Taking Input
    int nodes;
    cin>>nodes;

    vector<vector<int>>index(nodes);

    for(int i=0;i<nodes;i++){
        index[i].resize(2);
        cin>>index[i][0]>>index[i][1];
    }

    int n_query;
    cin>>n_query;

    vector<int>query(n_query);
    for(int i=0;i<n_query;i++){
        cin>>query[i];
    }

    



    // for(int i=0;i<nodes;i++){
    //     cout<<index[i][0]<<" "<<index[i][1]<<endl;
    // }

}
