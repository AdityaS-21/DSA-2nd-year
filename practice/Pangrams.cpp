 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     string s;
    getline(cin, s);
    string s1="pangram";    
    vector<int>count(26,0);
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
           count[tolower(s[i])-'a']++; 
        }
        
    }
    for(int i=0;i<count.size();i++){
        if(count[i]==0){
            s1="not " + s1;
           break;            
        }
    }
    cout<<s1;
    return 0;
 }   
    
