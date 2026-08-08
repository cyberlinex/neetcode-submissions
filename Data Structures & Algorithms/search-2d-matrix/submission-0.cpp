class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int i = 0;
        int j = matrix.size()-1;
        int n = matrix[0].size();
        int m = 0;
        while(i<=j){
            m = (i+j)/2;
            if(target>matrix[m][n-1]) i = m+1;
            else if(target < matrix[m][0]) j = m-1;
            else if(target >= matrix[m][0]&&target <= matrix[m][n-1]) break;
        }
        cout<<m;
        i = 0;
        j = matrix[m].size()-1;
        int mid = 0;
        while(i<=j){
            mid = (i+j)/2;
            if(target<matrix[m][mid]) j = mid - 1;
            else if(target > matrix[m][mid]) i = mid +1;
            else if (target == matrix[m][mid]) return true;
        }
        return false;

        }
        
};
