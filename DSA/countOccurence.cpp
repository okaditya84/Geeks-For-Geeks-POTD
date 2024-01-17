int firstOccurance(vector<int>& arr, int n, int x){

int low=0;

int high=n-1;

int ans=-1;

while(low<=high){

    int mid=low+(high-low)/2;

    if(arr[mid]==x){

        ans=mid;

        high=mid-1;

    }

    else if(arr[mid]>x){

        high=mid-1;

    }

    else{

        low=mid+1;

    }

 

}

return ans;

}

 

int lastOccurance(vector<int>& arr, int n, int x){

int low=0;

int high=n-1;

int ans=-1;

while(low<=high){

    int mid=low+(high-low)/2;

    if(arr[mid]==x){

        ans=mid;

        low=mid+1;

    }

    else if(arr[mid]>x){

        high=mid-1;

    }

    else{

        low=mid+1;

    }

 

}

return ans;

}

 

bool ispresent(vector<int>& arr, int n, int x){

int low=0;

int high=n-1;

while(low<=high){

    int mid=low+(high-low)/2;

    if(arr[mid]==x){

        return 1;

    }

    else if(arr[mid]>x){

        high=mid-1;

    }

    else{

        low=mid+1;

    }

 

  }

return 0;

}

 

int count(vector<int>& arr, int n, int x) {

int count=0;

int first=firstOccurance(arr,n,x);

int last=lastOccurance(arr,n,x);

if(ispresent(arr,n,x)){

    count=last-first+1;

}

else{

    count=0;

}

 

return count;

}