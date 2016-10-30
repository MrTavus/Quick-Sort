#include <iostream>
using namespace std;

void quickSort(int A[],int begin,int end){

	if(end < begin) return;
	
	int pivot = A[begin],i=begin,temp;
	
	while(++begin<end){
		if(A[begin]<pivot){
			temp = A[++i];
			A[i-1] = A[begin];
			A[begin] = temp;
		}
	}
	A[i] = pivot;
	
	quickSort(A,0,i-1);
	quickSort(A,i+1,end);
		
}


int main(){
	int array[] = {78,24,56,14,2,89,67,94,10,4,47,86},i;	
	
	cout << "Unsorted Array : ";
	for(i=0;i<12;i++){
		cout << array[i]<<" ";
	}
	
	quickSort(array,0,12);
	
	cout <<endl<<"Sorted Array   : ";
	for(i=0;i<12;i++){
		cout << array[i]<<" ";
	}
	
	cout << endl;		
	return 0;
}

