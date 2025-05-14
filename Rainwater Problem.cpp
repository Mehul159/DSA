#include<bits/stdc++.h>
using namespace std;

int rainwater(vector<int>&height){
    
    int left,right,leftMax,rightMax,;
    left = 0;
    right = height.size()-1;
    leftMax, rightMax = 0,0;
    int res = 0;
    
    while(left<right){
        if(height[left] < height[right]){
            if(height[left]>leftMax){
                leftMax = height[left];
            } else{
                res += leftMax - height[left];
            }
            left++;
        } else{
            if(height[right] >= rightMax){
                rightMax = height[right];
            } else {
                res += rightMax - height[right]
            }
            right--;
        }
    }
    return res;
}

int main(){
    vector<int> height = {7,0,4,2,5,0,6,4,0,5};
    cout <<rainwater(height)<<endl;
    return 0;
    
}