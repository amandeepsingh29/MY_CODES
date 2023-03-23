#include<iostream>
using namespace std;

int main (){
    cout<<"INSERTION SORT"<<endl;
   int x; 
   cout<<"enter size of array";
   cin>>x;

    int arr[x];
    for (int l = 0;l<x;l++){
        cin>>arr[l];
    }

    cout<<"your array is -"<<endl;
    for (int i = 0;i<x;i++){
        cout<<arr[i]<<" ";
    }
int n = x;



// inserton sorting
    for (int i =i;i<n;i++)
    {
        int current = arr[i];
        int j = i-1;
        while (current>arr[j] && j>=0 ){
            arr[j+1]=arr[j];
            j--;
        }
    }







// display output
    cout<<endl;
    cout<<"your sorted array is -"<<endl;
    for (int i = 0;i<x;i++){
        cout<<arr[i]<<" ";
    }



}