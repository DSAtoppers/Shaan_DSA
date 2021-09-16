#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v , int start , int end)
{
    int res,mid;
     while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==1)
           {

            res=mid;
            end=mid-1;
           }

        else
        {
            start=mid+1;
        }

    }
    return res;
}
int main()
{
    vector<int> v{0,0,0,0,1,1,1,1};
    int start=0;
    int end=1;


    while(v[end]==0)
    {
         start=end;
        end=end*2;

    }
    //cout<<start<<" "<<end;
    if(binarySearch(v,start,end)>0)
   cout<<binarySearch(v,start,end);
   else
    cout<<"not found"<<endl;

}
