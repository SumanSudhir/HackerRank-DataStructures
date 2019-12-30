#include<bits/stdc++.h>

using namespace std;

int largestRectangle(vector<int> v){
    stack<int> s;
    int maxArea = 0;
    int n = v.size();
    int front;
    int temp_area;

    int i = 0;
    while(i<n){
        if(s.empty() || v[i] >= v[s.top()]){
            s.push(i);
            i++;
        }
        else{
            front = s.top();
            s.pop();
            temp_area = v[front] *(s.empty() ? i:i-s.top()-1);
            if(maxArea < temp_area){
                maxArea = temp_area;
            }
        }
    }

    while(!s.empty()){
        front = s.top();
        s.pop();
        temp_area = v[front] *(s.empty() ? i:i-s.top()-1);
        if(maxArea < temp_area){
            maxArea = temp_area;
        }
    }

    return maxArea;
}
int main(){
    int n;
    cin>>n;
    vector <int> v;

    for(int i = 0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout<<largestRectangle(v);
}
