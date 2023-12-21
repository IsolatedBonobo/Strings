#include<bits/stdc++.h>
using namespace std;
bool check(int x ){
        vector<int>arr ;
        while(x >=1 ){
            int val = x % 10 ;
            arr.push_back(val);
            x = x/10;
        }
        arr.pop_back();
        for(int i = 0 ; i < arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0 ; 
        
        for(int i = low ; i <= high ; i++){
            if(check(i) == true){
                count++ ;
                cout<<i<<" ";
            }
            
        }
        cout<<endl;
        return count ;
    }
int main(){
    // int ans = countSymmetricIntegers(1200, 1230);
    // cout<<ans ;
    cout<<1/10<<endl;
    bool flag = check(11);
    cout<<flag;
    
}
