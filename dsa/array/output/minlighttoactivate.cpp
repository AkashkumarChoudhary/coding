int Solution::solve(vector<int> &A, int B) {
    int n = (int)A.size(), i = 0, ans = 0;
    if(B == 0)
        return -1;
    while(i<n)
    {
        int idx = -1;
        for(int j=max(0, i-B+1);j<min(n,i+B);j++)
        {
            if(A[j] == 1)
                idx = j;
        }
        if(idx == -1)
            return -1;
        ans++;
        //Start now from index which is outside the current selected bulb
        i = idx+B;
    }
    return ans;
}


