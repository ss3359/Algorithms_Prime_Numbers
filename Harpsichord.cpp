//
//  Harpsichord.cpp
//  MUSIC
//
//  Created by Owner on 1/30/25.
//

#include "Harpsichord.hpp"
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <thread>
#include <iomanip>
#include <fstream>

using namespace std;

void SieveOfEratoshtenes(int n){
    vector<int> numbers;
    vector<bool> IsPrime(n+1,true);
  
    IsPrime[0]=false; IsPrime[1]=false;
    for(int i=2; i*i<=n; ++i){
        if(IsPrime[i]){
            for(int j=i*i; j<=n; j+=i){
                IsPrime[j]=false;
            }
        }
    }

    
    cout<<"Prime Numbers Less Than "<<n<<endl;
    for(int i=2; i<n; i++){
        if (IsPrime[i]) {
            cout<<i<<endl;
        }
    }
}
