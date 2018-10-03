#include<iostream>
using namespace std;
int main()
{	//apple = 1
	//mangoes = 3
	//banana = 0.50  100 fruits  total 100 rs
	
//  let aple x , mangoes y , banana 100-(x+y) =z
//x+3*y+0.50(100-(x+y)) = 100
//=> 0.5*x + 2.5*y = 50
//x and y must be integers

 int x;
 int y;

	cout<<"possible solutions are .........."<<endl;
	for(x=0;x<=100;x++)
	{	for(y=0;y<=100;y++)
		 { if(0.5*x + 2.5*y == 50)
		    {	cout<<"\nx = "<<x<<"  apples";
			cout<<"\ny = "<<y<<"  mangoes";
			cout<<"\n z = "<<100-(x+y)<<"  banana";
			cout<<"\n**************************";
		     }	
		  }	
   	}




}
