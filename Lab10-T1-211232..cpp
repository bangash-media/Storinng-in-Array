#include <iostream>

using namespace std;
/*A Program that Take ten inputs from the user and store them in an array, 
then split the array into two different arrays. Display both 
the original and split arrays*/
int main() 
{
	int num[10],a[5],b[5]; //initializing an array

	cout<<"Enter The Ten Inputs Of The Array: "<<endl;
	for (int i=0;i<10;i++) //loop for getting 10 inputs from user
	{
		cin>>num[i];
	}
	for (int i=0;i<5;i++)
	{
		a[i]=num[i];
		b[i]=num[i+5];
	}
	cout<<"\n\n\"Original ARRAY\""<<endl<<endl;
	for(int i=0;i<10;i++) //loop for diaplaying of original loop
	{
		cout<<num[i]<<"  ";
	}
	cout<<"\n\n\n\"Splited Array\""<<endl<<endl;
	for(int i=0;i<5;i++)  //this loop displays the first 5 input
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl<<endl;
	for(int i=0;i<5;i++) //this loop displays the second 5 inputs
	{
		cout<<b[i]<<"  ";
	}
	
	return 0;
}
