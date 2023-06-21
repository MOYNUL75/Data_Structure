#include<iostream>
using namespace std;

/*Initialize an array of n elements and print the array elements in reverse order.
Then find the largest element, smallest element and average value of the elements.*/
int main(){
    int n, i, arr[n], input [10], output [10], largest, smallest;
    float average;

    cout <<"Enter number of elements in array\n";
    cin>>n;
    cout<<"\n";

    cout <<"Enter " << n << " numbers \n";

    for(i=0; i<n; i++){

        cin>> input[i];

    }
  cout<<"\n";
    for(i=0; i<n; i++){

        output[i] = input[n-i-1] ;

    }
    cout<<"Reverse order    : ";

    for(i=0; i<n; i++){

     cout<<output[i]<<" ";

    }

    smallest = arr[0];

    for( int i; i<n; i++){

        if(arr[i]>largest)
           {
            largest=arr[i];
           }
       else
           {
           }


        if(arr[i]<smallest)
           {
            smallest=arr[i];
           }
       else
           {
           }

        average = average +  arr[i];

           }

     average=average/n;

    cout<<"\nLargest element  : " <<largest<<"\n";
    cout<<"Smallest element : " <<smallest<<"\n";
    cout<<"Average value of the elements : " <<average<<"\n";


/*
Sample Input: 4 1 2 7 4
Sample Output:
Reverse order: 4 7 2 1 4
Largest element: 7
Smallest element: 1
Average value of the elements: 3.6
*/
    return 0;

}
