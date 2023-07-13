int equilibriumPoint(long long a[], int n) {
  
        long long totalsum = 0;
        for(int i = 0; i<n; i++){
            totalsum = totalsum+a[i];
        }
        int sum = 0;
        for(int i =0; i<n; i++){
            totalsum = totalsum - a[i];
            if(sum == totalsum){
                return (i+1);
            }
            sum = sum + a[i];
            
        }
        return -1;
    }
