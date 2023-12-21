#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
bool checkpallindrome(string str){
    if(str.size()==1)
    return true;
    else{
    for(int i=0;i<str.size();i++){        
        if(str[i]!=str[str.size()-i-1])
        return false;
        }
    return true;
    }
}
void substrpalli(string s){
    int n=s.size();
    int count=0;
    for(int i=0;i<s.size();i++){
        for(int j=1;j<=s.size()-i;j++){
            string str=s.substr(i,j);
            
            if(checkpallindrome(str)==1){
            count++;
            }
        }
       
    }
    cout<<count;
}
int countSubstrings(string s) {
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && s[i]==s[j])
            count++;
            if(abs(i-j)==1 && s[i]==s[j])
            count++;
        }
    }
    return count;
    }

vector<string> fun(int n){
    vector<string>fullans(n);
    for(int i =0;i<n;i++){
        cout<<"i am in loop"<<endl;
        string ans = to_string(i);
        fullans.push_back(ans);
    }

    return fullans ;
}
int main(){
    string s = "";
    char ch = 'a';
    s.push_back(ch);
    cout<<s;

}