#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m;
    int a1,a2,b1,b2;
    long int k1,k2;
    cin >> n >> m;
    vector<vector<long int>> abk(m);
    long int sum = 0;

    for(int i = 0; i < m; i++){
        abk[i].resize(3); //create 3 column in each row
        cin >> abk[i][0] >> abk[i][1] >> abk[i][2];
        sum = sum + abk[i][2];
    }
    vector<long int> lists(n,sum);
    for(int i = -1; i < m-1; i++){

        if(i>=0){
            a1 = abk[i][0]-1;
            b1 = abk[i][1]-1;
            k1 = abk[i][2];

            a2 = abk[i+1][0]-1;
            b2 = abk[i+1][1]-1;
            k2 = abk[i+1][2];

        }

        else{
            a1 = 0;
            b1 = n-1;

            a2 = abk[i+1][0]-1;
            b2 = abk[i+1][1]-1;
            k2 = abk[i+1][2];

        }

        for(int j = a1; j < a2 ; j++){
            lists[j] = lists[j] - k2;
        }

        for(int k = b1; k > b2 ; k--){
            lists[k] = lists[k] - k2;
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
