#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int a = matrix.size();
        int b=matrix[0].size();
        
        int t= (a*b)-1;
        int c=0;
        while(c<=t)
        {
            int mid = (c+((t-c)/2));
            int i=mid/b;
            int j=(mid%b);
            
            if(matrix[i][j]==target)
                return true;
            
            else if(matrix[i][j]>target)
                    t=mid-1;
                
            
            else
                c=mid+1;
            
        }
        
        return false;
    }
};