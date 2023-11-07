class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        priority_queue<int> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                q.push(matrix[i][j]);
                if(q.size()>k){
                    q.pop();
                }
            }
        }
        return q.top();
    }
};