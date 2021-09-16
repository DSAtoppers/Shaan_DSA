class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char target) {
        int start=0;
        int n=v.size();
        int end=n-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(v[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return v[start%n];
    }
};
