#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
// find no of pallindromic substrings in a string
int expandaroundindex(string s,int left , int right){
    int count=0;
    while(left>=0 && right<s.length() && s[left]==s[right]){
        count++;
        left++;
        right--;

    }
    return count;
}
int countsubstr(string s){
    int count = 0;
    int n = s.length();
    for(int center=0;center<n;center++){
        // for odd 
        int oddKaAns=expandaroundindex(s,center,center);
        count+=oddKaAns;
        // for even substrings
        int evenKaAns=expandaroundindex(s,center,center+1);
        count+=evenKaAns;

    }
    return count;

}
// valid anagram problem gajab level
bool isAnagram(string s, string t) {
    int a=s.length();
    int b=t.length();
    if(a<b)
    return false;
    else{
        for(int i=0;i<a;i++){
            for(int j=0;j<t.length();j++){
                if(t[j]==s[i]){
                    t.erase(j,1);
                    break;
                }
            }
        }
        return t.empty();
    }
    }
vector<int> myAtoi(string s, vector<int> &arr){
    
    for(int i=0;i<s.size();i++){
        
        if(s[i]>=48 && s[i]<=57){
            int a = int(s[i] - '0');
            // cout<<a<<endl;
            arr.push_back(a);
            cout<<arr[i]<<endl;
        }
        
    }
    
    return arr;
}
string reverse_string(string s){
    int i =0;
    int j = s.length();
    while(i <= j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp ;

        i++;
        j--;
    }
    return s;
}
string licenseKeyFormatting(string s, int k) {
        string t = "";

        int a = s.length();
        for(int i=0;i<a;i++){
            if(s[i] >= 48 && s[i]<=57 || s[i] >= 65 && s[i]<= 90 || s[i] >= 97 && s[i]<= 122 )
            t.push_back(s[i]);
        }
        cout<<t<<endl;
        string ptr = reverse_string(t);
        cout<<ptr<<endl;
        string str = "";
        int q = 0;
        int n = ptr.length();
        for(int j=0;j<=n/k;j++){
            for(int i =0;i<k;i++){
                if(q == n)
                return str;
                str.push_back(ptr[q]);
                q++;
            }
            str.push_back('-');
        }

    return str;
}
string sort(string &s){
    for(int i =0;i<s.length()-1;i++){
        char ch = s[i];
        if(s[i]>s[i+1]){
            char temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
        }

    }
    return s;
}
bool anagram1(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    int a = s.length();
    int b = t.length();

    if(b<a){
        
        return false;
    }
    for(int i =0;i<a;i++){
        if(s[i] != t[i])
        return false;
    }
    return true;
}
bool check(char ch){
    if(ch >= '0' && ch <='9' || ch >='A' && ch <= 'Z' || ch>='a' && ch <='z')
    return true;

    else
    return false;
}
string reverseOnlyLetters(string &s) {
    int i=0;
    int j= s.length()-1;
    // while(i <= j){
    //     if(check(s[i]) == true && check(s[j]) == true){
    //         swap(s[i], s[j]);
    //         i++;
    //         j--;
    //     }
    //     else if(check(s[i]) == true && check(s[j])==false)
    //     i++;
    //     else if(check(s[i]) == false && check(s[j]) == true)
    //     j--;

    // }
    while(i<=j){
        if(check(s[i]) == true && check(s[j]) == true){
            swap(s[i], s[j]);
            i++;
            j--;
        }
        
        
    }
    return s;        
}
string addStrings(string num1, string num2) {
        int a = num1.length();
        int b = num2.length();
        int add = 0;
        string ans = "";
        if(a >= b){
            int i = a-1;
            int j = b-1;
            while(i>=0 && j>=0){
                add = num1[i] + num2[j];
                int sum = add / 10;
                int carry = add % 10 ;
                char ch = (char)sum;
                ans.push_back(ch);

                add = 0;
                add += carry;
                
            }
        }
        return ans;

    }
int getsum(vector<int>arr, int i, int j){
    int a = arr[i] + arr[j];
    return a;
}
vector<int> minisum(vector<int>&ans, int &n , int &t, int &a){
    if(ans.size() > n ){
        return ans;
    }

    ans.push_back(a++);
    if(ans.size() > 1){
        int i = 0 ; 
        int j = i + 1; 
        int sum = getsum(ans, i, j);

        if(sum > t){
            ans.pop_back();
            ans.push_back(a++);
        }
    }
    else{
        ans.push_back(a++);
    }
    // ans = minisum(ans, n, t, a);
    // backtracking ki condition 
    

    

}
int main(){
    int n = 2 ; 
    int t = 3; 
    int a = 1 ;
    vector<int>ans = minisum(ans, n, t, a);
    cout<<ans.size();
    // for(int i = 0 ;i < ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    


}