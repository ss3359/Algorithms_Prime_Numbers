//
//  main.cpp
//  MUSIC
//
//  Created by Owner on 1/20/25.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <thread>
#include <random>
#include <algorithm>
#include "Harpsichord.hpp"
using namespace std;


int main(){

    int n =1000; 
    TwinPrimes(n);
    
    return 0;
}
    
 











//    vector<int> array={8,2,4,7,1,3,9,6,5};
//    cout<<"Oringinal Array: "<<endl;
//    PrintArray(array);
//    cout<<endl;
//    QuickSort(array,0, array.size()-1);
//    cout<<"New Array: "<<endl;
//    PrintArray(array);
//    cout<<endl;

    
    


/*
 Excess Code:
 
 void swap(vector<int>& array, int i, int j){
     int temp;
     temp=array[i];
     array[i]=array[j];
     array[j]=temp;
 }

 int Partition(vector<int>& array,int start, int end){
     int i=start-1,j;
     int pivot=end;
     for(j=start; j<end; j++){
         if(array[j]<=array[pivot]){
             i++;
             swap(array,i,j);
         }
     }
     swap(array,i+1, pivot);
     return i+1;
 }
 void PrintArray(vector<int>& array){
     for(int i=0; i<array.size(); i++){
         cout<<array.at(i)<<"\t";
     }
     
 }
 void QuickSort(vector<int>& array, int start,int end){
     if(start<end){
         int pivot=Partition(array, start, end);
         QuickSort(array,start,pivot-1);
         QuickSort(array, pivot+1, end);
     }
     
     
     
 }


 class Node{
 public:
     
     int data;
     Node* next;
 };

 void InsertAtFront(Node*&a, int d){
     Node*NewHead=new Node();
     NewHead->data=d;
     NewHead->next=a;
     
     a=NewHead;
 }


 
 queue<double> q1;
 queue<double> q2;
 
 stack<double> s;
 deque<double> d1;

 
 Node *start=new Node();
 Node *n2=new Node();
 Node *n3=new Node();
 Node *n4 = new Node();
 
 start->data= 1;
 n2->data=2;
 n3->data=3;
 n4->data=4;
 
 start->next=n2;
 start->next->next=n3;
 start->next->next->next=n4;
 InsertAtFront(start,15);
 
 
 
 while(start!=nullptr){
     cout<<start->data<<"->";
     start=start->next;
 }
 
 
 
 
 //Monte Carlo Simulation One
 default_random_engine generator;
 uniform_real_distribution<double>d(0.0,1.0);
 double a =d(generator), b=d(generator);
 int iter= 100000;
 PI_CLASS p(a, b);
 p.CalculateProbabity(iter);
 
 
 PI_CLASS_TWO p;
 PI_CLASS_THREE p3;
 int iter = 1000,iter2 = 100;
 p.PrintResults(iter);
 cout<<endl;
 p3.PrintResults(iter2);
 
 
 //    vector<int> v={10,36,59,345,500};
 //    auto sum =[&v](){
 //        for(int m:v)
 //            if(m%3==0){
 //                cout<<m<<" is a multiple of 3 \n";
 //            }
 //            else{
 //                cout<<m<<" is not a multiple of 3 \n";
 //            }
 //
 //    };
 //    sum();
 //
 
 
 void f(){
     for(int i=1; i <=200; i++){
         cout<<"R";
     }
 }

 void g(){
     cout<<"S";
 }
 
 */




