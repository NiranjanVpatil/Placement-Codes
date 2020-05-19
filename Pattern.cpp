
/*

N :4

      1
    1 4 1
  1 4 3 4 1
1 4 3 16 3 4 1
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    
	int n;
	cout<<"N :";
	cin>>n;
	cout<<endl;
	for(int i = 1; i <= n; i++)
	{
	  for(int j = 1; j <= 2*n - 2*i; j++)
	  {
	  	cout<<" ";
	  }
	  for(int k = 1; k <= i; k++)
	  {
	  	if(k%2 != 0) 
	    {
          cout<<k<<" ";
	    }
	    else
	    {
		  cout<<k*k<<" ";	
        }
	  }	
	  for(int l = i-1;l >= 1;l--)
	  {
	    if(l%2 != 0) 
	    {
          cout<<l<<" ";
	    }
	    else
	    {
		  cout<<l*l<<" ";	
        }	
	  }
	  cout<<endl;
   }
	return 0;
}


1
3*2
4*5*6
10*9*8*7
11*12*13*14*15

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int k = 0;
    int l=1;
    int n = 0;
	for(int i = 1; i <= 5; i++)
	{
	  if(i%2 == 0) 
	  {
        
         k = i*l + l;
		 for(int j = 1; j <=2*i - 1 ; j++)
         { 
         	if(j%2 == 0)
         	{
         		cout<<"*";
			 }
			 else
			 {
			 	cout<<k;
			 	k = k-1;
			 }
         	
		 }
		 l = l + 1;
	  }
	  else
	  {
	  	 k = n*i+1 ;
	  	 
		   for(int j = 1; j <= 2*i - 1; j++)
         {
			if(j%2 == 0)
         	{
         		cout<<"*";
			 }
			 else
			 {
			 	cout<<k; 
			k = k+1;
			 }
			
		 }
		 n = n + 1;
	  }
		cout<<endl;
		
	}	
	return 0;
}


1111112
3222222
3333334
5444444
5555556
7666666

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    
	for(int i = 1; i <= 6; i++)
	{
	  if(i%2 == 0) 
	  {
         cout<<i+1;
		 for(int j = 1; j <= 6; j++)
         {
         	cout<<i;
  		 }
	  }
	  else
	  {
	  	 for(int j = 1; j <= 6; j++)
         {
         	cout<<i; 
		 }
		 cout<<i+1;
	  }
		cout<<endl;
		
	}	
	return 0;
}


*/
/*

Read 12 th book codes and algorithms book


     *
    * *
   *   *
  *     *
 *       *
 *       *
  *     *
   *   *
    * *
     *

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	for(int i = 1; i <= 5; i++)
	{
		for(int j = 5; j >= i; j--)
		{
			cout<<" ";
		}
		for(int k = 1; k <= 2*i; k++)
		{
			if(k == 1 || k == 2*i - 1)
			{
			  cout<<"*";	
			}
			else
			{
				cout<<" ";
			}
			
		}
		cout<<endl;
		
	}
		for(int l = 5; l >= 1; l--)
	{
		for(int m = 0; m <= 5 - l; m++)
		{
			cout<<" ";
		}
		for(int n = 1; n <= 2*l; n++)
		{
			if(n == 1 || n == 2*l - 1)
			{
			  cout<<"*";	
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}



     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	for(int i = 1; i <= 5; i++)
	{
		for(int j = 5; j >= i; j--)
		{
			cout<<" ";
		}
		for(int k = 1; k <= i; k++)
		{
			cout<<"* ";
		}
		cout<<endl;
		
	}
		for(int l = 5; l >= 1; l--)
	{
		for(int m = 0; m <= 5 - l; m++)
		{
			cout<<" ";
		}
		for(int n = 1; n <= l; n++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}



#include <iostream>
using namespace std;

int main()
{
	int var=65;
	cout<<char(var)<<endl;
	char val = 'A';
	cout<<int(val)<<endl;
	return 0;
}

A
65





1
2   6
3   7  10
4   8  11  13
5   9  12  14  15

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	int r = 1;
	int j,k;
	for(int i = 1; i <= 5; i++)
	{
		cout<<i;
		int n = i;
		for(j = 4, k = 1; k < i; j--,k++)
		{

		    n = n+j;
			cout<<setw(4)<<n;
		}
		cout<<endl;
	}
	return 0;
}



 1 0 1 0 1 0 1       
 0 1 0 1 0 1 0       
 1 0 1 0 1 0 1       
 0 1 0 1 0 1 0       
 1 0 1 0 1 0 1       
 0 1 0 1 0 1 0       
 1 0 1 0 1 0 1                          
 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	int r;
	for(int i = 1; i <= 7; i++)
	{
		r = i;
		for(int j = 1; j <= 7 ; j++)
		{
			cout<<setw(2)<<r%2;
			r += 1;
		}
		cout<<endl;
	}
	return 0;
}


1 2 3 4 5 6 7                 
  2 3 4 5 6 7                  
   3 4 5 6 7                    
    4 5 6 7                      
	 5 6 7                        
	  6 7                          
	   7                          
	  6 7                      
     5 6 7                       
	4 5 6 7                    
   3 4 5 6 7                  
  2 3 4 5 6 7                 
 1 2 3 4 5 6 7                                            

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	
	for(int i = 1; i <= 7; i++)
	{
		for(int k = 0; k < i; k++)
		{
			cout<<" ";
		}
		for(int j = i; j <= 7; j++)
		{
			cout<<j<<" ";
		}
		
		cout<<endl;
	}
	
	for(int l = 6; l >= 1; l--)
	{
		for(int k = l; k > 1; k--)
		{
			cout<<" ";
		}
		
		for(int n = l; n <= 7; n++)
		{
			cout<<" "<<n;
		}
		cout<<endl;
	}
	return 0;
	
}


1111111
1111122
1111333
1114444
1155555
1666666
7777777

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	
	for(int i = 1; i < 8; i++)
	{
		for(int j = 1; j < 8-i; j++)
		{
			cout<<"1";
		}
		
		
		for( int k = 1; k <= i; k++)
		{
		  cout<<i;
		}
		cout<<endl;
	}
	return 0;
	
}






              *
             ***
            *****
           *******


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int l = 1;
	for(int i = 1; i < 5; i++)
	{
		for(int j = 5; j > i; j--)
		{
			cout<<" ";
		}
		
		
		for( int k = 1; k <= l; k++)
		{
		  cout<<"*";
		}
		l = l + 2;
		cout<<endl;
	}
	return 0;
	
}




****

*    *

*    *

****

#include<stdio.h>
int main()
{
int i,j,l;    //declaring integers i,j for loops and l for the number of rows
printf(" Enter the number of rows\n");   //Asking user for input
scanf("%d",&l);   //taking input for number of rows and saving in variable l
for(i=0;i<l;i++) //Outer loop for number of rows
   {
      for(j=0;j<l;j++) //Inner loop for printing stars in each column of a row
         {
            if(i==0 || i==l-1 || j==0 || j==l-1) // condition for printing stars
               {
                  printf("*");   // printing stars
               }
            else                 // else condition to print spaces 
               {
                  printf(" ");   //printing spaces
               }
         }
      printf("\n");       //Printing a new line after a row has been printed
   }
}



1          1
12        21
123      321
1234    4321
12345  54321
123456654321




#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j,m,k;
	int s;
	s = 9;
	for(i = 1; i <= 6; i++)
	{
		for(j = 1; j <= i; j++)
		{
			cout<<j;
			
		}
		for(int m = s; m >= 0 ; m--)
		{
			cout<<" ";
		}
		s = s - 2;
		for(k = i; k > 0; k--)
		{
			cout<<k;
		}
		
		cout<<endl;
	}
	return 0;
}




    1
   121
  12321
 1234321


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j,m,k;
	for(i = 1; i <= 4; i++)
	{
		for(int m = 5; m > i; m--)
		{
			cout<<" ";
		}
		for(j = 0; j < i; j++)
		{
			cout<<j+1;
			
		}
		for(k = i-2; k >= 0; k--)
		{
			cout<<k+1;
		}
		
		cout<<endl;
	}
	return 0;
}





              aa      
		   	 abba     
		    abccba  
		   abcddcba 
		   
		        
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j,m,k;
	char bit[] = "abcd";
	for(i = 0; i <= 4; i++)
	{
		for(int m = 5; m > i; m--)
		{
			cout<<" ";
		}
		for(j = 0; j < i; j++)
		{
			cout<<bit[j];
			
		}
		for(k = i-1; k >= 0; k--)
		{
			cout<<bit[k];
		}
		
		cout<<endl;
	}
	return 0;
}





 * * * * *
  * * * *
   * * *
    * *
     *

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j,m;
	for(i = 5; i > 0; i--)
	{
		for(int m = i; m < 5; m++)
		{
			cout<<" ";
		}
		for(j = 1; j <= i; j++)
		{
			cout<<" *";
			
		}
		cout<<endl;
	}
	return 0;
}



     *
    * *
   * * *
  * * * *
 * * * * *


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j,m;
	for(i = 1; i <= 5; i++)
	{
		for(int m = 5; m > i; m--)
		{
			cout<<" ";
		}
		for(j = 1; j <= i; j++)
		{
			cout<<" *";
			
		}
		cout<<endl;
	}
	return 0;
}



COMPUTER
COMPUTE
COMPUT
COMPU
COMP
COM
CO
C


#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main()
{
    char string[] = "COMPUTER";
	int len;
	len = strlen(string);
	for(int i = len-1; i >= 0; i--)
	{
		for(int j = 0; j <=i; j++)
		{
			cout<<string[j];
		}
		cout<<endl;
	}
	return 0;
}



   1
   2   3
   4   5   6
   7   8   9  10
  11  12  13  14  15



#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j;
	int k =1;
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			cout<<setw(4)<<k;
			k++;
		}
		cout<<endl;
	}
	return 0;
}



 1 2 3 4 5
 2 3 4 5
 3 4 5
 4 5
 5


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j;
	for(i = 1; i <= 5; i++)
	{
		for(j = i; j <= 5; j++)
		{
			cout<<setw(2)<<j;
		}
		cout<<endl;
	}
	return 0;
}



 1 1 1 1 1
 2 2 2 2
 3 3 3
 4 4
 5

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,k;
	for(i = 1,k = 5; k > 0; i++,k--)
	{
		for(int j = 1; j <= k; j++)
		{
			cout<<setw(2)<<i;
		}
		cout<<endl;
	}
	return 0;
}



 * * * * *
 * * * *
 * * *
 * *
 *


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,k;
	for(i = 1,k = 5; k > 0; i++,k--)
	{
		for(int j = 1; j <= k; j++)
		{
			cout<<setw(2)<<"*";
		}
		cout<<endl;
	}
	return 0;
}



 1
 2 1
 3 2 1
 4 3 2 1
 5 4 3 2 1

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	for(int i = 1; i <= 5; i++)
	{
		for(int j = i; j >= 1; j--)
		{
			cout<<setw(2)<<j;
		}
		cout<<endl;
	}
	return 0;
}


 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout<<setw(2)<<j;
		}
		cout<<endl;
	}
	return 0;
}



 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	for(int i = 1; i <= 5; i++)
	{
		for(int j = i; j >= 1; j--)
		{
			cout<<setw(2)<<j%2;
		}
		cout<<endl;
	}
	return 0;
}


 1
 1 0
 1 0 1
 1 0 1 0
 1 0 1 0 1

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout<<setw(2)<<j%2;
		}
		cout<<endl;
	}
	return 0;
}

 
 *
 * *
 * * *
 * * * *
 * * * * *
 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout<<setw(2)<<"*";
		}
		cout<<endl;
	}
	return 0;
}

*/
