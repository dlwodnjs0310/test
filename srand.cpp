#include<stdio.h>
#include<stdlib.h> 
#include<time.h>

int main(){
	int i,j,t,arr[10];
	srand(time(NULL));
	for(i=0; i<10; i++) arr[i] = rand() % 100;
	
	for(i=0; i<10; i++){
		for(j=0; j<10-i; j++)
		if(arr[j]>arr[j+1]){
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;	
		}
	} 
	for(i=0; i<10; i++) printf("%d ",arr[i]);
}
