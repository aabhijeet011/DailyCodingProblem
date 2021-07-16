#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin>>s;
    if(isBalanced(s)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
}