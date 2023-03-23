#include<iostream>
using namespace std;

int main (){
    cout<<"INSERTION SORT";
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

// sorting
    for (int i=0;i<x-1;i++){
        for (int j=i+1;j<x;j++)
        {
            if(arr[i]>arr[j])
            {
                int tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }

        }
    }
// display output
    cout<<endl;
    cout<<"your sorted array is -"<<endl;
    for (int i = 0;i<x;i++){
        cout<<arr[i]<<" ";
    }





cout<<endl<<"hello";
cout<<endl<<"hello";
}