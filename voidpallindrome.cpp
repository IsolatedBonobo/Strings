#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

// void pallindrome (ii)
bool checkpalli(string s,int i,int j){
    while(i<=j){
        if(s[i]!=s[j])
        return false;

        i++;
        j--;
    }
    return true;
}
bool palli(string str){
    int i=0,j=str.length()-1;
    while(i<=j){
        if(str[i]!=str[j])
        return checkpalli(str,i,j-1) || checkpalli(str,i+1,j);
        else
        i++;
        j--;
    }
    return true;
}
int main(){
    string atr;
    getline(cin,atr);
    cout<<palli(atr);
}