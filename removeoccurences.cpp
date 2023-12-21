#include<iostream>
#include<string>
#include<vector>
using namespace std;
string removeoccurences(string &s,string &part){
    int i=0;
    int a=part.length();
    string ans="";
    
    while(i<s.length()){
        int count=0;
        int b=ans.length();
        if(ans.length()<=a){
            for(int i=a-1, j=b-1;i>=0,j>=0;i--,j--){
                if(part[i]==ans[j])
                count++;
            }
            if(count==a){
                for(int i=0;i<a;i++)
                ans.pop_back();
            }
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main(){
    string str;
    getline(cin,str);
    string part;
    getline(cin,part);

    cout<<removeoccurences(str,part);
}