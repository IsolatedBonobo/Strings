#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int min(int a,int b){
    if(a<b)
    return a;
    else
    return b;
}
// minimum time diffrence
int mindiffrence(vector<string> timePoints){
    vector<int>mins;

    for(int i=0;i<timePoints.size();i++){
        string curr = timePoints[i];

        int hours=stoi(curr.substr(0,2));
        int min=stoi(curr.substr(3,2));
        int total=60*hours+min;
        mins.push_back(total);

    }
    sort(mins.begin(),mins.end());
    int mini=INT_MAX;
    for(int i=0;i<mins.size()-1;i++){
        int diff = mins[i+1]-mins[i];
        mini=min(mini,diff);
    }
    int lastdiff = (mins[0]+1440) - mins[mins.size()-1];

    mini=min(mini,lastdiff);
    return mini;
}
int main(){
    int n;
    cin>>n;
    vector<string>str(n);
    for(int i=0;i<n;i++)
    getline(cin,str[i]);

    int a=mindiffrence(str);
    cout<<a;
}