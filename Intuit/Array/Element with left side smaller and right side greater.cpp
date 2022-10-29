int findElement(int arr[], int n) {
    
    if(n== 1) return arr[0];
    vector<int>leftarr(n), rightarr(n);
    int smaller = -1e9;
    int greater = 1e9;
    for(int i=0; i<n; i++){
        leftarr[i] = smaller = max(arr[i], smaller);
    }
    for(int i=n-1; i>=0; i--){
        rightarr[i]= greater =min(greater, arr[i]);
    }
    for(int i=0; i<n; i++){
        if(i == 0){
            continue;
        }
        else if(i == n-1){
           continue;
        }
        else{
            if(arr[i] >= leftarr[i-1] && arr[i]<= rightarr[i+1])
               return arr[i];
        }
        
    }
    return -1;
}
