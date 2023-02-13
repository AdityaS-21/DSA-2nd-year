#include<iostream>
#include <algorithm>
#include<vector>
 using namespace std;
 
 int main(){
     int n;
     cin>>n;
     vector <int> arr(n); 
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     sort(arr.begin(),arr.end());
     int a=arr[0];
     long count=0,d=0,c; 
     for(int i=0;i<n;i++){
        if(arr[i]==a){
            count++;
        }
        else{
            a=arr[i];
            if(d<count){
                d=count;
                c=arr[i-1];
            } 
            count=1;
            
        }
        
    }
     
     cout<<c;
     return 0;
}
