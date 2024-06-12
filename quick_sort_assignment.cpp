//1) Which of the following sorting algorithms is used along quicksort to sort the sub arrays?
     a) Merge Sort
     b) Selection Sort
     c) Insertion Sort
     d) Bubble Sort
     ANSWER- Insertion Sort


//2) How many subarrays does the partitioning step of the quick sort algorithm divide the entire array into?
    a) one
    b) two
    c) depends on the elements of the array
    d) depends on the size of the array
    ANSWER- two


//3) Given an array where all its elements are sorted in increasing order except two swapped elements, sort it in linear time. Assume there are no duplicates in the array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={3, 8, 6, 7, 5, 9, 10};
    int idx1=-1,idx2=-1,t;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1]){
            if(idx1==-1) idx1=i;
            else         idx2=i+1;
        }
    }
    t=v[idx1];
    v[idx1]=v[idx2];
    v[idx2]=t;
    for(int ele:v) cout<<ele<<" ";
}