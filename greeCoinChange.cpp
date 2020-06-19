#include <iostream>
#include <climits>

int greedyChange(int coinSet, int n, int N){
    if(N==0){
        return 0;
    }
    if(N<0){
        return INT_MAX;
    }
    int coins = INT_MAX;
    for(int i = 0; i<n; i++){
        int res = greedyChange(coinSet, n, N-coinSet[i]);
        if(res != INT_MAX)
            coins = min(coins, res+1);
    }
    return coins;
}
 