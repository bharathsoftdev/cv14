#include <iostream>

using namespace std ;

int main ( )
{
    int test = 0 , X = 0, F = 0 , C = 0 ;
    int LOCost = 0 , OCost = 0 ;
    int temp1 = 0 , temp2 = 0  ;
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
        
        LOCost = 0 , OCost = 0 ;
        
        // Calculate Least Optimal Cost
        temp1 = Total ;
        for ( int t1 = 0 ; t1 < C && temp1 > 0 ; ++t1 )
        {
            temp2 = temp1/matC[t1][0] ;
            temp1 = temp1%matC[t1][0] ;
            LOCost += ( temp2 * matC[t1][1] );
        }
        
        // Calculate Optimal Cost
        temp1 = Total ;
        for ( int t1 = C ; t1 >= 0 && temp1 > 0 ; --t1 )
        {
            temp2 = temp1/matC[t1][0] ;
            temp1 = temp1%matC[t1][0] ;
            OCost += ( temp2 * matC[t1][1] );
        }
        
        cout << (LOCost-OCost) ;
        
        if ( test != 0 )
            cout << endl ;
        
    }
    return 0 ;
}