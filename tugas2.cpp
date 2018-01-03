#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	double a1c[5]={4,4,5,3,3}, a2c[5]={3,3,4,2,3}, a3c[5]={5,4,2,2,2};
	
	cout << "MATRIX X :"<<endl;
	int pertama1=0;
	do{
		cout << a1c[pertama1]<<" | ";
		pertama1++;
	}while(pertama1<5);cout<<endl;
	int pertama2=0;
	do{
		cout << a2c[pertama2]<<" | ";
		pertama2++;
}

