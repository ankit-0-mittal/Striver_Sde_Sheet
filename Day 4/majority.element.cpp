//Bayer-Moore Majority Vote Algorithm(for N/2)

#include<bits/stdc++.h>

int findMajorityElement(int a[], int n) {

// Write your code here.

   int element=0;

   int count=0;

   for(int i=0;i<n;i++){

       if(count==0){

           element=a[i];

       }

       if(a[i]==element){

           count++;

       }

       else{

           count--;

       }

   }

   int ct=0;

   for(int i=0;i<n;i++){

       if(element==a[i]){

           ct++;

       }

       

   }

   if(ct>floor(n/2))

       return element;

   else

       return -1;

   

}
