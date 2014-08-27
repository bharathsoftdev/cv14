#include <iostream>

using namespace std;

int main ( )
{
    
    char str[401] ;
	int  count[27], temp = 0 , cost = 0 , pos = 0, neg = 0 ;
    int add, del, rep ;
	int loop ;
	cin.clear() ;
	cin >>  loop ;
	while ( temp < loop )
	{
		cin >> str ;
        
        temp = 0 ; cost = 0; pos = 0; neg = 0 ;
        add = 0, del = 0, rep = 0 ;
        
		for ( int t2 = 0 ; t2 < 28 ; t2++ )
			count[t2] = 0 ;
		
		for ( int t3 = 0 ; str[t3] != '\0' ; t3++ )
		{
			int index = (((int)str[t3])-96) ;
			++count[index] ;
		}
        
        for ( int t2 = 0 ; t2 < 28 ; t2++ )
        {
            if ( count [t2] != 0 )
            {
                count[t2] -= t2 ;
                if ( count[t2] > 0 )
                    pos += count[t2] ;
                else if ( count[t2] < 0 )
                    neg += ( (-1) * count [t2]  ) ;
            }
            
        }
        
        cout << pos << ' ' << neg << endl ;
        
		cost = 0 ;
		if ( pos < neg)
            rep = pos ;
        else
            rep = neg ;
        add = neg - rep ;
        del = pos - rep ;
        
        cost = rep + ( add * 2 ) + ( del * 3 ) ;
        
        cout << endl << rep << ' ' << add << ' ' <<  del << ' ' << cost << endl ;
        
		for ( int t2 = 0 ; t2 < 28 ; t2++ )
        {
            cout << count[t2] << endl ;
			//if ( count [t2] != 0 && count [t2] != t2 )
			{
				
			}
		}
        
    }
}
