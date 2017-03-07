#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int a, b, result = 0;
        cin >> a >> b;
        
        int j = a, sq = sqrt(j);
        while(sq * sq != j){        // we are looking for the first square integer...
            j++;
            sq = sqrt(j); 
        }
        if(j <= b){
            for(int k = sq; k * k <= b; k++)    // ... then we count the next ones, not bigger than 'b'
                result++; 
        }
        cout << result << endl;    
    }
    return 0;
}
