#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp ;

}
// 125. valid pallindrome 
bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9' || s[i]>='A' && s[i]<='Z' || s[i]>='a' &&s[i]<='z')
            t.push_back(s[i]);
        }
        int a = t.length();
        for(int i=0;i<a;i++){
            if(t[i]>='A' && t[i]<='Z')
            t[i] = t[i] + 32;
        }
        cout<<t<<endl;
        for(int i=0,j=a-1; i<=j; i++,j--){
            if(t[i]!=t[j])
            return false;
        }
        return true;
}
    // reverse the vowels in a word
bool searchvowel(char ch){

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        
        return true;
        }

        return false;
}
void reverseVowels(string &s) {
        int i = 0;
        int j = s.length()-1;
        int mid = (i+j)/2;
        
        while(i<j){
            
            if(searchvowel(s[i]) == true && searchvowel(s[j]) == true){
                
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(searchvowel(s[i]) == false)
            i++;
            else if(searchvowel(s[j]) == false)
            j--;
            

        }
        cout<<s;
        return ;
    }
// searching index of first occurence of given substr in a string

int strStr(string haystack, string needle) {
        int a = haystack.length();
        if(a == 1 || a == needle.length()){
            if(needle.compare(haystack) == 0)
            return 0 ;
            else 
            return -1;
        }
        for(int i=0;i<a;i++){
            for(int j=i;j<a;j++){
                    string s = haystack.substr(i,j);
                    if(s.compare(needle)==0)
                    return i;
            }
        }
        return -1;
    }
// count no of segments in string 
int countSegments(string s ){
    string ans = "";
    string temp ="";
    int count = 0;
    for(int i =0;i<s.length();i++){
        
        if(s[i] == ' '){
            if(ans.compare(temp) == 0)
            continue;
            int a = ans.length();
            for(int j=a-1;j>=0;j--){
                ans.pop_back();
            }
            count++;
            
        }
        else{
            ans.push_back(s[i]);
        }
    }
    
    if(ans.length() == 0){
        return count;
    }
    else{
    return count + 1;
    }
}

vector<string> fizzBuzz(int n,vector<string>&finalans) {
        string ans ="";
        
    for(int val=1 ;val<=n;val++){
        if(val % 3 == 0 && val % 5 == 0){
            
            finalans.push_back("FIzzBuzz");
            
        }
        else if(val % 3 == 0){
            
            finalans.push_back("Fizz");
        }
        
        else if(val % 5 == 0){
            
            finalans.push_back("Buzz");
        }
        
        else {
            string stri = to_string(val);
            
            finalans.push_back(stri);
        }
    
    }
    return finalans;  

}



int main(){
    int a ;
    cin>>a;

    vector<string>ans(a);

    fizzBuzz(a, ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}