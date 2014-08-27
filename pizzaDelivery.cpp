#include <iostream>

using namespace std ;

int main ( )
{
    int test = 0 , X = 0, F = 0 , C = 0 ;
    cin >> test ;
    while ( test-- )
    {
        
        cin >> C >> F ;
        
        int matC[C][2], matF[F];
        
        for ( int t1 = 0 ; t1 < C ; ++t1 )
            cin >> matC[t1][0];
        
        for ( int t1 = 0 ; t1 < C ; ++t1 )
            cin >> matC[t1][1];
        
        for ( int t1 = 0 ; t1 < F ; ++t1 )
            cin >> matF[t1];
       
        int Total = 0 ;
        for ( int t1 = 0 ; t1 < F ; ++t1 )
        {
            Total += matF[t1] ;
        }
        
        /*cout << endl ;
        for ( int t1 = 0 ; t1 < C ; ++t1 )
            cout << matC[t1][0] << ' ' ;
        cout << endl ;
        for ( int t1 = 0 ; t1 < C ; ++t1 )
            cout << matC[t1][1] << ' ' ;
        cout << endl ;
        for ( int t1 = 0 ; t1 < F ; ++t1 )
            cout << matF[t1] << ' ' ;
        cout << endl ;
         
        cout << "S\n" ; */
    }
    return 0 ;
}