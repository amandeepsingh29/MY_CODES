#include<iostream>
using namespace std;

int main (){
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

// bubble sorting
    int counter =1;
    while (counter <x){
        for (int i = 0; i<x-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }





// display output
    cout<<endl;
    cout<<"your sorted array is -"<<endl;
    for (int i = 0;i<x;i++){
        cout<<arr[i]<<" ";
    }






}