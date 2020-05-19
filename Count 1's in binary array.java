// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
import java.lang.*;

class Arrays {
    
    static int arr[] = new int[5000001];
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t-- > 0){
		   
		    int n = sc.nextInt();
		    
		    for(int i = 0;i<n;i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    Ones obj = new Ones();
		    System.out.println(obj.countOnes(n));
		    
		    
		}
		
	}
}// } Driver Code Ends
//User function Template for Java

class Ones{
    
    // Object of Arrays class to access array declared
    // in Arrays class
    // To access i-th element of array, use obj.arr[i]
    static Arrays obj = new Arrays();
    
    // Function to count number of ones in the binary array
    // n: size of array
    // To access i-th element of array, use obj.arr[i]
   public static int countOnes(int n){

    // Your code here
    int low = 0;
	int high = n-1;
	int lastIndex = 0;
	while(low<=high){
		int mid= (high+low)/2;
		if(obj.arr[mid]==1 && (mid==n-1 || obj.arr[mid+1]!=1)){
			lastIndex =  mid+1;
			break;
		}
		if(obj.arr[mid]<1)
			high = mid-1;
		else
			low = mid+1;
	}
	return lastIndex;
}
    
}

