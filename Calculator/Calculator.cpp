#include<iostream>
using namespace std;
	int Add(int num1,int num2)
{	
	return num1+num2;
}

	int Subtract(int num1,int num2)
{
	return num1-num2;

}

	int Multiply(int num1,int num2)
	{
	return num1*num2;	
	}
	
	
	float Divide(int num1,int num2)
	{
		return num1/num2;
	}
		

int main (){
	
	int x,y,operation;
	
	cout<<"enter two numbers: ";
	cin>>x>>y;
	
	cout<<"choose operation: 1. Add 2. Subtract 3. Multiply 4. Divide "<<endl;
	cin>>operation;
	
if(operation==1)
{
cout<<Add(x,y);
}

else if(operation==2)
{
cout<<Subtract(x,y);
}

else if(operation==3)
{
cout<<Multiply(x,y);
}

else if(operation==4)
{
cout<<Divide(x,y);
}

return 0;
}
