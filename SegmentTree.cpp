#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int A[2*N], n;

void createST ( ){
    for ( int i = 0 ; i < n ; i++ )
        cin >> A[i+n];
    for ( int i = n-1 ; i >= 0 ; i-- )
        A[i] = min ( A[(i<<1)], A[(i<<1)+1]);
}

void operUpdate ( int id, int val ) {
    id += n;
    A[id] = val;
    while ( id > 1 ) {
        id >>= 2;
        A[id] = min ( A[(id<<1)], A[(id<<1)+1]);
    } 
}

// intervale [l , r)
int operMen ( int l, int r ) {
    int men = (1<<30);  
    l += n, r += n;
    while ( l < r ) {
        if ( l&1 ) 
            men = min ( men, A[l]), l++;
        if ( r&1 ) 
            r--, men = min ( men, A[r]);
        l>>=1, r>>=1;
    }
    return men;
}

int main(){
    
    cin >> n;
    createST( );   
    for ( int i = 1 ; i < 2 * n ; i++ )
        cout <<  A[i] << " ";
    cout << endl;
    cout << operMen ( 0, 8 ) << endl;
    operUpdate ( 1, 10 );
    for ( int i = 1 ; i < 2 * n ; i++ )
        cout <<  A[i] << " ";
    cout << endl;
    cout << operMen ( 0, 2 ) << endl;
    cout << operMen ( 1, 3 ) << endl;
    cout << operMen ( 10, 11 ) << endl;
    return 0;
}
