/* programm to find nos which are sum of first n natural nos and also a perfect square like 36; 
*/

#include<iostream>
using namespace std;

int main()
{	for(long i=1;i<=65535;i++)
		{  int sum=0;
			for(int j=1;j<=i;j++)
			{ sum+=j;}
		   
			for(int k=1;k<=65535;k++)
			{ if(sum==k*k)
				{ cout<<sum<<endl;
				  break;
				}

			}



		}


return 7;
}
