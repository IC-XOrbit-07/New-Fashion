// #include <iostream>
// using namespace std;

// int main(){
//     // Declaring and Taking array input
//     int size;
//     cout<<"Enter the number of element in the array :-";
//     cin>>size;
//     int array[size];

//     // Taking array Input

//     for (int i = 0; i < size; i++){
//         cin>>array[i];
//     }
//     // Increasing the size of the array
//     size++;
    
//     // Taking input position
//     int index;
//     cout<<"Enter the index where you want to enter the element :- ";
//     cin>>index;

//     // Taking element to enter in the array
//     int element;
//     cout<<"Enter element to insert at given position ";
//     cin>>element;

//     // Making changes in the array
//     for(int start = size ; start>=index ; start--) {
//         array[start] = array[start-1];
//     }

//     array[index]  = element; 

//     // Printing the array
//     for (int i = 0; i <size; i++){
//         cout<<array[i]<<" ";
//     }
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int array_size;
//     cout<<"Enter the size of the array :- ";
//     cin>>array_size;
//     int array[array_size];
//     for(int i = 0; i < array_size; i++){
//         cin>>array[i];
//     }
//     int position;
//     cout<<"Enter the index of element which you want to delete :- ";
//     cin>>position;
//     for(int i=position ; i<array_size ; i++){
//         array[i] = array[i+1];
//     }
//     for (int i = 0; i < array_size-1; i++){
//         cout<<array[i]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"enter the size of the array :- ";
//     cin>>size;
//     int element;
//     cout<<"Enter the element you want to search for ";
//     cin>>element;
//     int array[size];
//     for (int i = 0; i < size; i++){
//         cin>>array[i];
//     }
    
//     for(int i=0 ; i<size ; i++){
//         if(array[i]==element){
//             cout<<"Element found at the index :- ";
//             cout<<i;
//             break;
//         }
//     }
// }

#include<iostream>
using namespace std;

bool binarySearch(int array[] , int target , int size){
	int start = 0;
	int end = size-1;
	int mid;
	while(start<=end){
		mid = start + (end-start)/2;
		if(array[mid]==target){
			return 1;
		}
		else if(array[mid]>target){
			end = mid-1;
		}
		else{
			start= mid+1;
		}
	}
	return 0;
}

int main(){
	int size;
	cout<<"Enter the size of the array :- ";
	cin>>size;
	
	int array[size];
	cout<<"Enter the elements of the array "<<endl;
	for(int i =0 ; i<size ; i++){
		cin>>array[i];
	}
	int target;
	cout<<"Enter the element to be searched for ";
	cin>>target; 
	int found = binarySearch(array , target , size);
	if(found == 1){
		cout<<"Element Found in the given array";
	}
	else if(found==0){
		cout<<"Element not found in the array";
	}
}




