#include<vector>

vector<long long> eratosthenes(int x){
    vector<long long> ret;
    vector<bool> isprime(x+1,true);
    for(int p=2;p<x;++p){
        if(!isprime[p])continue;
        ret.push_back(p);
        for(int q=p*2;q<=x;q+=p){
            isprime[q] = false;
        }
    }

    return ret;
    
}
