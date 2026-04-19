#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long s, k, m;
        cin >> s >> k >> m;
        
        long long last = m % k;
        long long rem;
       
    if(last == 0){ 
        
        rem = min(s, k);
    }
    else if(last >= s){
        rem = 0;
    }
    else if(k >= s){
        rem = s - last;
    }
    else {
        rem = min(s - last, k - last);
    }
        
        cout << rem << endl;
    
}
}