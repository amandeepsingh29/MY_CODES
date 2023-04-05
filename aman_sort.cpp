#include<iostream>
#include<string>

#include <algorithm>

using namespace std;
int main(){
    int arr[]={8,9,4,7,5,54,63,12,82,41};

    int i = sizeof(arr)/sizeof(arr[0]);//size of arr

    int arr1[i];

    //     int min=arr[0];
    // for(int j=0;j<i;j++){
    //         if(min>arr[i]){
    //             int y=min;
    //             min =arr[i];
    //             arr[i]=y;
                
    //         }
    // }
    int max =arr[0];
    for(int p = 1; p < i ;p++){

      if(max < arr[p]){
     max = arr[p];
     
     
     
     }  
    }
    cout<<max;
}