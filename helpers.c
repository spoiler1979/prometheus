/**
 * helpers.c
 *4556
 555
 
 * Computer Science 50
 * Problem Set 3
 ********
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n<=0){
    	return false;
    }
	else if(n==1 && values[0]!=value){
		return false;
	}
    /*for(int i = 0;i<n;i++){
    	if (values[i]==value){
    		return true;
    	}
    
    }
    return false; */
	
	if(values[n/2]==value){
		return true;
	}
	else if(values[n/2]>value){
		int valuess[n/2];
		for(int i=0,m=0;i<n/2;i++){
			valuess[i]=values[i];
			m++;
			n=m;
		}
		values=valuess;
		search(value,values,n);
		
	}
	else if(values[n/2]<value){
		int valuess[n/2];
		for(int i=n/2,k=0,m=0;i<n;i++){
			valuess[k]=values[i];
			m++;
			n=m;
			k++;
		}
		values=valuess;
		search(value,values,n);
	}
	return false;
	
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int changes=1;
    while(changes>0)
    	{
    		changes=0;
    		for(int i=0;i<n-1;i++){
    			if(values[i]>values[i+1]){
    				changes++;
    				int x=values[i];
    				values[i]=values[i+1];
    				values[i+1]=x;
    			}
    		
    		}
    	
    	}
    
    return;
}
