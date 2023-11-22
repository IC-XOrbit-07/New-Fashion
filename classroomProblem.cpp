#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

// int FindUnique(vector <int>array){
// 	int ans =0;
// 	for (int i = 0; i < array.size(); ++i){
// 		ans^=array[i];
// 	}
// 	return ans;
// }

// int minmax(int sample_array[][3] , int col ,int row){
// 	int sample_min =INT_MAX;
// 	for (int i = 0; i < row; ++i){
// 		for (int j = 0; j < col; ++j){
// 			if(sample_min>sample_array[i][j]){
// 				swap(sample_min , sample_array[i][j]);
// 			}
// 		}
// 	}
// 	return sample_min;
// }


int BinarySearch(int arr[] , int size , int target){
	int start = 0;
	int end = size-1;
	int mid;
	while(start<=end){
		mid = start + (end-start)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]>target){
			end = mid-1;
		}
		else if(arr[mid]<target){
			start = mid+1;	
		}
	}
	return INT_MIN;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	// vector <int> arr;
	// int ans = (sizeof(arr)/sizeof(int));
	// cout<<ans<<endl;

	// cout<<arr.size()<<endl;
	// cout<<arr.capacity()<<endl;

	// vector<int> array;
	// array.push_back(5);
	// array.push_back(6);
	// for(int i=0 ; i<array.size() ;  i++){
	// 	cout<<array[i]<<" ";
	// }
	// cout<<endl;
	
	// vector<int> brray(10,INT_MIN);
	// for (int i = 0; i < brray.size(); ++i){
	// 	cout<<brray[i]<<" ";
	// }

	// vector<int> dynamic_array(10,-1);
	// cout<<dynamic_array.capacity()<<endl;
	// dynamic_array.push_back(10);
	// cout<<dynamic_array.capacity()<<endl;
	// for(int i=0 ; i<dynamic_array.capacity() ; i++){
	// 	cout<<dynamic_array[i]<<" ";
	// }
	// cout<<endl;


	// int n;
	// cin>>n;
	// vector<int> array(n);
	// for(int i=0 ; i<array.size() ; i++){
	// 	cin>>array[i];
	// }

	// int unique_element = FindUnique(array);
	// cout<<"Unique Element is "<<unique_element<<endl;

	// int n;
	// cin>>n;
	// vector<int> array(n);
	// int sum=9;
	// for(int i=0 ; i<n ; i++){
	// 	cin>>array[i];
	// }
	// cout<<"Pairs are"<<endl;
	// for(int j=0 ; j<n ; j++){
	// 	for(int k=0 ; k<n ; k++){
	// 		if(array[j]+array[k]==sum){		
	// 			cout<<"["<<array[j]<<","<<array[k]<<"]"<<" ";
	// 			array[j]=INT_MAX;
	// 			array[k]=INT_MIN;
	// 		}
	// 	}
	// }

	// int n;
	// cin>>n;
	// vector<int> array(n);
	// for(int i=0 ; i<n ; i++){
	// 	cin>>array[i];
	// }
	// cout<<"Pairs are "<<endl;
	// for(int j=0 ; j<array.size() ; j++){
	// 	for(int k=j+1 ; k<array.size() ; k++){
	// 		for(int l=k+1 ; l<array.size() ; l++){
	// 			if(array[j]+array[k]+array[l]==80){
					
	// 				cout<<"["<<array[j]<<","<<array[k]<<","<<array[l]<<"]";
	// 				cout<<endl;
	// 			}
	// 		}
	// 	}	
	// }	
	// vector<int> array{0,1,0,1,1,0,1,0,1,1};
	// int length = 0 , start=0 ,end=9;
	// while(length!=end){
	// 	if(array[length]==0){
	// 		swap(array[length],array[start]);
	// 		length++;
	// 		start++;
	// 	}
	// 	else{
	// 		swap(array[length],array[end]);
	// 		end--;
	// 		// length++;
	// 	}
	// }
	// for (int i = 0; i < 9; ++i){
	// 	cout<<array[i]<<" ";
	// }
	// cout<<endl;
	// for(auto element:array){
	// 	cout<<element<<" ";
	// }
	// Question to try :- https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278
	// Questino to try :- https://leetcode.com/problems/majority-element/
	// Question to try :- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

	// Question 1 try 

	// int n;
	// cin>>n;
	// vector<int> array(n);
	// for(int i=0 ; i<n ; i++){
	// 	cin>>array[i];
	// }
	// swap(array[0],array[array.size()-1]);
	// for(int i=0 ; i<array.size() ; i++){
	// 	cout<<array[i]<<" Address :- "<<&array[i]<<endl;	
	// }
	// cout<<endl;

	// Question 2 try 

	// Question 3 Easy - Done (Not to do code)
	// int sample_array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	// cout<<"Row wise printing"<<endl;
	// for(int i=0 ; i<3 ; i++){
	// 	for(int j=0 ; j<3 ; j++){
	// 		cout<<sample_array[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// cout<<"Column wise printing"<<endl;	
	// int count =3;
	// for (int i = 0; i < count; ++i){
	// 	for (int j = 0; j < count; ++j){
	// 		cout<<sample_array[j][i]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// int row = 3 , col=3;
	// int ans = minmax(sample_array , row ,col);
	// cout<<ans;

	// Transpose the matrix - error 
	// This error is because of the swapping two values two times
	// This can be resolved by using a third matrix let say transpose[row][column]
	// int sample_array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	// for (int i = 0; i < 3; ++i){
	// 	for (int j = 0; j < 3; ++j){	
	// 		swap(sample_array[i][j] ,sample_array[j][i]);
	// 	}
	// }
	// for (int i = 0; i < 3; ++i)	{
	// 	for (int i1 = 0; i1 < 3; ++i1){
	// 		cout<<sample_array[i][i1]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// Basic Logic is to juat add a new matrix and then copy its elemnt into new one



	// Vector of 2d array

	// vector<vector<int> >sample_array;
	// vector<int> a{1,2,3};
	// vector<int> b{4,5,6};
	// vector<int> c{7,8873489 ,9};

	// sample_array.push_back(a);
	// sample_array.push_back(b);
	// sample_array.push_back(c);

	// // To get the number of row we can do arr.size();
	// // To get the number of column we can do arr[0].size();


	// for (int i = 0; i < sample_array.size(); ++i){
	// 	for (int i1 = 0; i1 < sample_array[i].size(); ++i1){
	// 		cout<<sample_array[i][i1]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// Another way of defining the 2d array in the new format
	// int no_ofrows =3, no_ofcol=3;
	// vector<vector<int> >sample_array(no_ofrows , vector<int>(no_ofcol,INT_MIN/24156));
	// for (int i = 0; i < no_ofrows; ++i){
	// 	for (int i1 = 0; i1 < no_ofcol; ++i1){
	// 		cout<<sample_array[i][i1]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// Linear Searching :-
	// int n;
	// cin>>n;
	// vector<int>vector_array(n);
	// for(int i=0 ; i<vector_array.size() ; i++){
	// 	cin>>vector_array[i];
	// }
	// int element_search;
	// cin>>element_search;
	// int flag = 0;
	// for (int i = 0; i < vector_array.size(); ++i){
	// 	if(vector_array[i] == element_search){
	// 		flag = 1;
	// 	}
	// 	else{
	// 		flag = 0;
	// 	}
	// }

	// if(flag==1){
	// 	cout<<"Element present in the array ";

	// }
	// else{
	// 	cout<<"Element is not present in the array";
	// }


	// Binary Search 

	// int arr[] = {2,4,6,8,10,12,16};
	// int size = 7;
	// int target = 4;

	// int indexofTarget = BinarySearch(arr , size , target);

	// if(indexofTarget == INT_MIN){
	// 	cout<<"Element not found ";
	// }
	// else{
	// 	cout<<"Element found "<<endl;
	// 	cout<<"Target Found at "<<indexofTarget;
	// }
	// return 0;

	// vector<int> array{2,4,4,4,4,4,4,6,8,10};
	// int arr[] = {1,2};
	// int size =2;
	// if(binary_search(arr, arr+size-1,2)){
	// 	cout<<"Element Found";
	// }
	// else{
	// 	cout<<"Element not found";
	// }
	// auto lower_come = lower_bound(array.begin() , array.end() , 4) - array.begin();
	// auto upper_come = upper_bound(array.begin() , array.end() , 4) - array.begin();
	
	// cout<<upper_come-lower_come;


	// Find Pivot element 

}










