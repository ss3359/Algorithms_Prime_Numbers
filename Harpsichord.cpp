//
//  Harpsichord.cpp
//  MUSIC
//
//  Created by Owner on 1/30/25.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <thread>
#include <iomanip>
#include <fstream>
#include "Harpsichord.hpp"

using namespace std;

bool IsPrime(int n){
    if(n==1 || n==0)
        return false;
    for(int j=2; j<n; j++){
        if(n%j==0)
            return false;
    }
    return true; 
}

void MersennePrimes(int w){
    vector<int> primes;
    cout<<"Prime Numbers:\t\t\tMersenne Primes:";
    cout<<endl;
    
    for(int i=1; i<w; i++){
        if(IsPrime(i)){
            cout<<i<<"\t\t\t\t\t\t"<<(pow(2,i)-1);
        }
        cout<<endl;
    }
   
}



void PrimeFactorization(int v){
    cout<<"Factorization of "<<v<<"\n";

    for(int j=2; j<=v; j++){
        while(v%j==0){
            cout<<j<<" ";
            v/=j;
        }
        
    }
   
    cout<<endl;
}


void SieveOfEratoshtenes(int w){
    vector<int> numbers;
    vector<bool> IsPrime(w+1,true);
  
    IsPrime[0]=false; IsPrime[1]=false;
    for(int i=2; i*i<=w; ++i){
        if(IsPrime[i]){
            for(int j=i*i; j<=w; j+=i){
                IsPrime[j]=false;
            }
        }
    }

    
    cout<<"Prime Numbers Less Than "<<w<<endl;
    for(int i=2; i<w; i++){
        if (IsPrime[i]) {
            cout<<i<<endl;
        }
    }
}

void TwinPrimes(int n){
    
    vector<int> Primes;
    for(int i=1; i<n; i++){
        if(IsPrime(i)){
            Primes.push_back(i);
        }
    }
    
    for(int j=0; j<Primes.size(); j++){
        if(j==Primes.size()-1)
            break;
        
        else if(Primes[j+1]-Primes[j]==2){
            cout<<Primes[j]<<", "<<Primes[j+1]<<"\n";
        }
    }
}
