#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.length()-1;
        while(s[i] != ' '){
            count++;
        }
        return count;
}
int main(){
    string s ;
    getline(cin,s);
    int a = lengthOfLastWord(s);
    cout<<a;
}