#include <iostream>
#include <string.h>
using namespace std;

int main() {

char a [100];
char b [100];

    cout<<"program polindrome"<<endl;
    cout<<"masukan kata : ";cin>>a;

    strcpy(b,a);
    strrev(b);

if(strcmp(a,b) == 0) {
cout<<"merupakan kata polindrome ,"<<b;
} else {
	cout<<"bukan merupakan kata polindrome, "<<b;
}
return 0;
}
