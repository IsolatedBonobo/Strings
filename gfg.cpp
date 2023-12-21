#include<bits/stdc++.h>
using namespace std;
// vector<vector<int>>searchWord(vector<vector<char>>grid, string word){



//     // for vertical 
    
//     // for horizontal 

//     // for diagonal 
//     string dia1 = "";
//     for(int i = 0 ; i < grid.size(); i++){
//         for(int j = 0 ;j < grid[0].size(); j++){
//             int req_sum = 0 ;
//             if(i==j){
//                 dia.push_back(grid[i][j]);
//             }

//         }
//     }


// }
int stringconvert(string str, bool &check){
        if(str[0] == '-'){
            str[0] = '0' ; 
            check = false;
        }
        cout<<check<<" for given strings"<<endl;
        int a = 0 ; 
        int num = 1 ; 
        
        for(int i = str.length()-1 ; i >= 0 ; i--){
            char ch = str[i];
            int b = int(ch)-48;
            a += b*num;
            
            num = num * 10;
        }
        cout<<"string converted into "<<a<<endl;
        return a ;
}
    string intconvert(int a, bool &check){
        string ans = "";
        while(a > 0){
            char ch = char(a %10 + 48) ;
            a = a/10;
            ans.push_back(ch);
        }
        if(check == false){
            ans.push_back('-');
        }
        cout<<ans<<" is the ans before reversing"<<endl;
        int i = 0 ; 
        int j = ans.length() -1 ;
        while(i < j){
            swap(ans[i], ans[j]);
            i++;
            j-- ;
        }
        return ans;
    }
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       bool a1 = true;
       bool b1 = true;
       int a = stringconvert(s1, a1);
       int b = stringconvert(s2, b1);
       int ans = a * b ;

        bool finalcheck = true;
        if((a1 && !b1) || (b1 && !a1)){
            // ans must be negative
            finalcheck = false;
        }
        else{
            finalcheck = true;
        }

       string finalans = intconvert(ans, finalcheck);
       return finalans ;
    }
int* GetBigInteger(string str)
{
    int x = str.size(), a = 0;
 
    // Create an array to store the big
    // integer into it.
 
    // Make the array size same as the
    // size of string str
    int* arr = new int[str.size()];
 
    // Loop to extract string elements
    // into the array one by one
    while (a != x) {
 
        // Subtracting '0' to convert
        // each character into digit
 
        // str[a] - '0'
        // = ASCII(str[a]) - ASCII('0')
        // = ASCII(str[a] - 48
        arr[a] = str[a] - '0';
        a++;
    }
 
    // Return the reference of the array
    return arr;
}
 
// Driver Code
int main()
{
    // Big Integer in form of string str
    string str = "4471335218251938463464417392810911901096513109096223883606949011331588570391782354624160500218170491853613331964401401436877119247304542334868677958787620083249";
    string ptr = "342857466747623190253535915582654079729535249666495366204751947309612861759399743340838318159436477709808";

    
 
    // Function Call
    int* arr = GetBigInteger(str);
 
    // Print the digits in the arr[]
    for (int i = 0; i < str.size(); i++) {
        cout << arr[i];
    }
    return 0;
}