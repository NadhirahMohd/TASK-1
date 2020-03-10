#include <iostream>
using namespace std;

void divideBy3 (int N);
void divideBy8 (int N);
void divideBy38 (int N);

int main()
{
	int N=200;
	
	divideBy3(N);
	divideBy8(N);
	divideBy38(N);
	
	return 0;
	
}

void divideBy3 (int N)
{
	
	
	cout<<"NUMBER :";
	
	for (int i=0; i<N; i++)
	{
		
		if(i%3==0){
			cout<<i<<" ,";
		}
	}
	cout<<"\nCATEGORY : THREE";
}


void divideBy8 (int N)
{
	
	
	cout<<"\n\nNUMBER :";
	
	for (int i=0; i<N; i++)
	{
		
		if(i%8==0){
			cout<<i<<" ,";
		}
	}
	cout<<"\nCATEGORY : EIGHT";
}


void divideBy38(int N)
{
	
	
	cout<<"\n\nNUMBER :";
	
	for (int i=0; i<N; i++)
	{
		
		if(i%3==0 && i%8==0){
			cout<<i<<" ,";
		}
	}
	cout<<"\nCATEGORY : THREE AND EIGHT";
}









