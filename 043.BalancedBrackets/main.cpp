#include<bits/stdc++.h>

using namespace std;

string isBalanced(string s) {

    stack <char> c;
    for(int i=0;i<s.length();i++){
        if((s[i] == '(') || (s[i] == '{') || (s[i] == '[')){
            c.push(s[i]);
        }

        if((s[i] == ')') || (s[i] == '}') || (s[i] == '}')){

            char closing;
            if(c.top() == '('){
                closing = ')';
            }
            else if(c.top() == '['){
                closing = ']';
            }
            else if(c.top() == '{'){
                closing = '}';
            }

            if(s[i] != closing){
                return "NO";
            }

            else{c.pop();}
        }
    }

    return "YES";
}



int main(){

    int n;
    cin>>n;
    string s;
    string result;

    for(int i=0; i<n;i++){
        cin>>s;
        result = isBalanced(s);
        cout<<result<<endl;

    }


}
