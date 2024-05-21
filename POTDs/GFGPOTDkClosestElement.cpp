class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        int id1=findCrossOver(arr,0,n-1,x);
        int id2=id1+1;
        //if the elements is present in the array then we will move the pointers to the left and right
        if(id1>=0 && arr[id1]==x){
            id1--;
        }
        vector<int> ans;
        for (int i=0;i<k;i++){
            if(id1>=0 && id2<n){
                int val1=x-arr[id1];
                int val2=arr[id2]-x;
                //compare the value
                if(val1<val2){
                    ans.push_back(arr[id1]);
                    id1--;
                }
                else if (val1>val2){
                    ans.push_back(arr[id2]);
                    id2++;
                }
                else{
                    //if the distance is equal then prioritize the bigger value
                    if(arr[id1]>arr[id2]){
                        ans.push_back(arr[id1]);
                        id1--;
                    }
                    else{
                        ans.push_back(arr[id2]);
                        id2++;
                    }
                }
            }
            else if(id1>=0){
                ans.push_back(arr[id1]);
                id1--;
            }
            else if(id2<n){
                ans.push_back(arr[id2]);
                id2++;
            }
          
        }
          return ans;

    }
    int findCrossOver(vector<int> arr, int low, int high, int x){
        //if the element is less than the first element
        if (x<arr[low]){
            return low;
        }
        //if the element is greater than the last element
        if(x>=arr[high]){
            return high;
        }
        int mid=low+(high-low)/2;
        //if the element is in between the mid and mid+1 element
        if(arr[mid]<=x && arr[mid+1]>x){
            return mid;
        }
        //if x is less than mid than the cross over is in the left half
        if(arr[mid]>x){
            return findCrossOver(arr,low,mid-1,x);
        }
        //if x is greater than mid than the cross over is in the right half
        return findCrossOver(arr,mid+1,high,x);

    }
};
