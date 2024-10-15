#include<bits/stdc++.h>
using namespace std ; 

//SOLUTION 1 

// TIME COMPLEXITY : o(n^2) , worst case

//solution 2 directly convert vunorderd vector to ordered set as both duplicates removed and asc order done also 

int SecondSmallest(int len , vector <int> &v){
    
    if(len<2)
    return -1 ; 

    for(int i = 1 ; i < len ; i++){
        int key = v[i] , j ;
        for(j = i-1 ; j >=0 ; j--){
            if(key<v[j])
              v[j+1]= v[j];
            else 
            break;
             }
             v[j+1]=key;
        }
        
        set<int>s(v.begin(), v.end());
        if(s.size()>=2){
        auto it = s.begin();
        advance(it, 1);
        return *it;
        }
            return -1 ; 
        
    }

int main(){
// int arr[] = {3,4,2,6};
int len,n;
cin>>len;
vector <int> v ; 
for(int i = 0 ; i < len ; i++){
cin>>n;
v.push_back(n);
}

int res = SecondSmallest(len,v);
if(res==-1)
{
cout<<"NO"<<endl;
return 0 ; 
}
cout<<res<<endl;
return 0 ; 
}