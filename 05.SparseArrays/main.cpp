#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }

    int q;
    cin >> q;
    vector<string> queries(q);
    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }

    vector<int> results(q,0);

    for(int i = 0; i <q; i++){
        for(int j = 0; j < n; j++){
            if(queries[i] == strings[j]){
                results[i]++;
            }
        }
    }

    for(int i = 0; i < q; i++){
        cout << results[i] << endl;
    }

    return 0;
}


// Time complexity O(nxq)
