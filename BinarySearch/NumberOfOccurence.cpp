#include<iostream>
#include<vector>    
using namespace std;


int firstOccurence(vector<int> &arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            res = mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}

int lastOccurence(vector<int> &arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            res = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}

int main(){
    vector<int> arr = {1,2,3,4,4,4,4,5,6,7,8,9};
    int target = 4;
    int first = firstOccurence(arr, target);
    int last = lastOccurence(arr, target);
    if(first==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Number of occurence of "<<target<<" is: "<<last-first+1<<endl;
    }
    return 0;
}