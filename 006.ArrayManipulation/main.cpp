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

        lists[a-1] +=  k;

        if(b != n){
            lists[b] -= k;
        }
    }

    max = 0;
    temp = 0;

    for(int i = 0; i < n; i++){
        temp += lists[i];

        if{temp > max}{
            max = temp;
        }
    }

    cout << max;

    return 0;
}
