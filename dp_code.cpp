int range = 0;
	    for(int i = 0; i < n; i++){
	        range += arr[i];
	    }
	    int t[n+1][range+1];
	    
	    for(int i = 0; i < range+1; i++){
	        t[0][i] = 0;
	    }
	    for(int i = 0; i < n+1; i++){
	        t[i][0] = 1;
	    }
	    
	    for(int i = 1; i < n+1; i++){
	        for(int j = 0; j < range+1; j++){
	            if(arr[i-1] <= j){
	                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
	            }
	            else{
	                t[i][j] = t[i-1][j];
	            }
	        }
	    }
