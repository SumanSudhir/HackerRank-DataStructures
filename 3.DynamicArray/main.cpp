#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int q_n;
    int seq;

    cin >> n >> q_n;
    int q;
    long int x, y;
    vector<vector<long int>> seqList(n);

    //Input
    long int lastAnswer = 0;
    for(int i = 0; i < q_n; i++){
        // queries[i].resize(3);
        cin >> q >> x >> y;
        if(q == 1){
            seqList[(x ^ lastAnswer)%n].push_back(y);
            }

        if(q == 2){
            seq = (x ^ lastAnswer)%n;
            lastAnswer = seqList[seq][y%(seqList[seq].size())];
            cout<<lastAnswer<<endl;
        }
    }

    //Algorithm
    //
    // for(int i = 0; i < q; i++){
    //     if(queries[i][0] == 1){
    //         seqList[(queries[i][1] ^ lastAnswer)%n].push_back(queries[i][2]);
    //         }
    //
    //     if(queries[i][0] == 2){
    //         seq = (queries[i][1] ^ lastAnswer)%n;
    //         lastAnswer = seqList[seq][queries[i][1]%(seqList[seq].size())];
    //
    //         cout<<lastAnswer<<endl;
    //     }
    // }
    return 0;

}
