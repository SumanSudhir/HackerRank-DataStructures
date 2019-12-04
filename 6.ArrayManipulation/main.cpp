#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m;
    int a,b;
    long int k;
    cin >> n >> m;
    vector<vector<long int>> abk(m);

    for(int i = 0; i < m; i++){
        abk[i].resize(3); //create 3 column in each row
        for(int j = 0; j < 3; j++){
            cin >> abk[i][j];
        }
    }

    vector<long int> lists(n,0);
    for(int i = 0; i < m; i++){
        a = abk[i][0];
        b = abk[i][1];
        k = abk[i][2];
        for(int j = a-1; j < b; j++){
            lists[j] += k;
        }
    }

    long int max = lists[0];
    for (int i = 1; i < n; i++) {
        if(max < lists[i]){
            max = lists[i];
        }
    }

    cout << max;

    return 0;
}
