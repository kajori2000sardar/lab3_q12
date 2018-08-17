//Include the library
#include<iostream>

using namespace std;

//Create main
int main()
{
	//Declare data types of two variables
	int i,j,sum,dif,mul,div,mod;
	//Assigning values to the variables
	i=2;
	j=10;
	cout<<"The no.s we are performing arithmatic functions are "<<i<<" and "<<j;	
	sum=0;
	dif=0;
	mul=1;
	div=1;
	cout<<"For modulus the no.s are "<<i+1<<" and "<<j;
	mod=1;
	//Using different operators
	sum=i+j;
	dif=j-i;
	div=j/i;
	mul=i*j;
	mod=j%(i+1);
	//Displaying the results
	cout<<"Sum of the no.s is "<<sum<<" , "<<"Difference of the no.s is "<<dif<<" , "<<"Multiplication of the no.s is "<<mul<<" , "<<"Division of the no.s is "<<div<<" , "<<"Modulus of the no.s is "<<mod;
	return 0;
}
