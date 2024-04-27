#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int> candies = {4,2,1,1,2};
    int extraCandies = 1;
    short max = 0,len = candies.size();
    // for(auto i = candies.begin();i!= candies.end();i++){
    //     if(*i > max){
    //         max = *i;
    //     }
    // }
    for(short i =0;i<len;i++){
        if(candies[i]>max){
            max = candies[i];
        }
    }
    vector<bool> ans;

    for(short i=0;i<len;i++){
        if(candies[i]+extraCandies<max){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
    }


}