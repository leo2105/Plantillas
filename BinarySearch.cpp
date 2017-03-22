#include <bits/stdc++.h>
using namespace std;

int BS( int lo, int hi, int key, vector<int> A ) {
    int mid;
    while ( lo <= hi ) {
        mid = lo + ( hi - lo ) / 2;
        if ( A[mid] == key )
            break;
        if ( A[mid] < key )
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return mid;
} 

int main() {
    int n; cin >> n;
    vector<int> A(n); 
    for ( int i = 0 ; i < n ; i++ )
        cin >> A[i];
    int x;
    cout << "Ingresar el key: "<< endl;
    cin >> x;
    int rpta = BS(x);
    rpta == -1 ? cout << "Not Found" : cout << rpta ;
    cout << endl;
    return 0;
}
