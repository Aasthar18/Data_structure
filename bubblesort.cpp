#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of elements:";
    cin>>n;

    cout<<"enter the elements:";
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int counter=0;
    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"the sorted array is:";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}