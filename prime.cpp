#include<iostream>

using namespace std;

bool isPrime1(int n){
    if(n<2) return false;
    for(int i =2;i<n;++i){
        if(n%i==0) return false;
    }
    return true;
}

bool isPrime2(int n){
    if(n<2) return false;
    for(int i =2;i<=n/2;++i){
        if(n%i==0) return false;
    }
    return true;
}


bool isPrime3(int n){
    if(n<2) return false;
    for(int i =2;i*i<=n;++i){
        if(n%i==0) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
    return 0;
}
