#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString(char *&p , int N){
	 static char A='A';
	 p= new char[N];
for(int i=0;i<N;i++)
{	
	A=65;
	p[i]= A+i ;
	
}
}
int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
