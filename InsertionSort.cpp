#include<iostream>

using namespace std;

void InsertionSort(int Array[], int MaxSize){

    int i;
    int CurrentPosition;

    for(i=1; i<MaxSize; i++){


        CurrentPosition=i;

        while(CurrentPosition>0 && Array[CurrentPosition]<Array[CurrentPosition-1]){

            swap(Array[CurrentPosition],Array[CurrentPosition-1]);
            CurrentPosition--;
        }

    }


}


int main(){

    int MaxSize;

    cout<<"Enter MaxSize: ";
    cin>>MaxSize;

    int Array[MaxSize];

    for(int i=0; i<MaxSize; i++){
        cin>>Array[i];
    }

    for(int i=0; i<MaxSize; i++){
        cout<<"["<<Array[i]<<"]";
    }

    cout<<endl;

    InsertionSort(Array,MaxSize);

    for(int i=0; i<MaxSize; i++){
        cout<<"["<<Array[i]<<"]";
    }


}
