//.......................................bata sales....................................

#include<iostream>
using namespace std;
int main()

//each shoe is Rs 225;

{	float option1(void);//funcn for option 1	
	float option2(int pair); //initializing func for option 2
	float option3(int pair);//initializng funcn for option 3
	void max(float a,float b,float c);


	int pair;
	cout<<"u will work for 40 hours in a  week"<<endl;
	cout<<"input how many pair of shoes can u sale in a week. ?          ";
	cin>>pair;
	cout<<endl;
	float a=option1();
	float b=option2(pair);
	float c=option3(pair);

	max(a,b,c);



}
float option1(void)
{  //salary simply 600 per week
	cout<<"option 1 "<<endl;
	cout<<"salary  =  600"<<endl;
	return 600;

}
float option2(int pair)
{	//Rs 7 per hour
	//10% commission on each sales
	//u work 40 hours a week
	cout<<"option 2  "<<endl;
	float sal;
	sal=280+22.5*pair;
	cout<<"salary  =  "<<sal<<endl;
	return sal;

}
float option3(int pair)
{	//no sallry
	//20% commission
	//Rs 20 on each sales
	cout<<"option 3  "<<endl;	

	float sal;
	sal=45*pair+10*pair;
	cout<<"salary  =  "<<sal<<endl;
	return sal;	



}
void max(float a,float b,float c)
	{ float max;
		if(a>b && a>c)
		max=a;
		else
		if(b>c && b>a)
		max=b;
		else//(c>a && c>b)
		max=c;

		if(max==a)
		cout<<"\n option 1 is maxmium salary"<<endl;
		if(max==b)
		cout<<"\n option 2 is maximum salary"<<endl;
		if(max==c)
		cout<<"\n option 3 is maximum salary"<<endl;

        }  

