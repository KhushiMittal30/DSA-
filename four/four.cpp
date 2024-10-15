// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

// Note that multiple kids can have the greatest number of candies.
#include<bits/stdc++.h>
using namespace std ; 



class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // int n = candies.size();
        //  vector <bool> result;
        //  for(int i = 0 ; i < n ; i++){
        //     int u = candies[i];
        //     candies[i]+=extraCandies;
        //     result.push_back(arrange(candies , extraCandies , u));
        //  }

        //   return result ; 
        // }

        // bool arrange (vector <int> &candies , int extracandies , int original ){
        //     int n = candies.size();

        //     for(int i = 1 ; i < n  ; i++){
        //         int key = candies[i] , j;   
        //         for(j = i-1 ; j>=0 ; --j){
        //             if(key< candies[j])
        //             candies[j+1]= candies[j];
        //             else 
        //             break ;
        //         }
        //         candies[j+1]=key; 
        //     }
            
        //     if(candies[candies.size()-1]== original + extracandies)
        //     return true ; 
        //     return false;

        // }

        int max = *max_element(candies.begin(), candies.end());
        vector <bool> result ; 
        for(int i = 0 ; i < candies.size() ; i++){
            if(candies[i]+extraCandies >= max)
            result.push_back(true);
            else
            result.push_back(false); 
        }

        return result ;
    }
    };

