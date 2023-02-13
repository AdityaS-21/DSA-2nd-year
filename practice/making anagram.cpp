#include <bits/stdc++.h>

using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int result=0;
    vector<int>count1(26,0);
    vector<int>count2(26,0);
    for(int i=0;i<s1.size();i++){
        count1[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        count2[s2[i]-'a']++;
    }
    for(int i=0;i<s1.size();i++){
        count1[s1[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        result+=abs(count1[i]-count2[i]);
    }
    cout<<result;
    return 0;
}
