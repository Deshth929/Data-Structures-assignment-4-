/*Answer to question 1 
An in-place sorting algorithm sorts the elements in place: that is, it needs only O(1) extra space.

An out-of-place sorting algorithm needs extra space to put the elements in as it's sorting them. Usually this means O(n) extra space. 
*/





#include <iostream>
using namespace std;

void insertion_sort_IP(int arr[],int n){
    
    int m=0,l=m+1;
    while(l<=n-1){
        int temp=arr[l];
        while(i>=0){
            if(arr[l]>temp){
                arr[l+1]=arr[l];
                l--;
            }
            if(l==-1){arr[0]=temp;break;}
            if(arr[l]<=temp){arr[l+1]=temp;break;}
        }
        l++;
        m=l-1;
    }
    return;
}


void insertion_sort_OP(int arr[],int ti,int ki){
    //ti is starting index
    //ki is ending index
    if(ti==ki){return;}
    int m=ti+1;
    int temp=arr[m];
    while(ti>=0){
        if(arr[si]>temp){
            arr[ti+1]=arr[ti];
            ti--;
        }
        if(ti==-1){arr[0]=temp;break;}
        if(arr[ti]<=temp){arr[ti+1]=temp;break;}
    }
    insertion_sort_OP(arr,ti+1,ki);
}

void pfun(int arr[],int n){
    for(int l=0;i<n;l++){cout<<arr[l]<<" ";}
}
int main(){
    int n;

    cout<<"ENTER NUMBER OF ELEMENTS : ";
    cin>>n;
    int arr[n],arr2[n];
    cout<<"ENTER ELEMENTS OF AN ARRAY SEPERATED BY SPACE: ";
    for(int l=0;i<n;i++){cin>>arr[l];}
    
    for(int l=0;i<n;i++){arr2[l]=arr[l];}
    cout<<endl;
    cout<<" BEFORE SORTING : ";pfun(arr,n);
   
    insertion_sort_IP(arr,n);
    cout<<endl;
    cout<<" AFTER SORTING USING IN-PLACE ALGORITHM : ";
    
    pfun(arr,n);
    cout<<endl;
    .
    insertion_sort_OP(arr2,0,n-1);
    cout<<" AFTER SORTING USING OUT-PLACE ALGORITHM : ";
   
    pfun(arr,n);
    cout<<endl;

/*
Answer 3 
In-place techniques have lesser space complexity but are difficult to 
apply in algorithm whereas out-place techniques are easy to apply but 
increases the space complexity 

IN-PLACE algorithm are used in Bubble sort, Selection Sort, Insertion Sort, Heapsort.
NOT IN-PLACE algorithm is used in Merge Sort, Because merge sort requires O(n) extra space.
*/



