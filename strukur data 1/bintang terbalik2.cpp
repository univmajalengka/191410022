#include<iostream>
using namespace std;

int main()
{
int x, y, z;
for(x=5;x>=1;x--){
	for(y=1;y<x;y++){
		cout << " ";
	}
	for(z=5;z>=x;z--){
		cout << "*";
	}
	cout<<endl;
	}
}
