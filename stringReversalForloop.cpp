#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	char c[50];
	
	
	cout<<"Enter a string: ";
	cin>>c;
	
	int lastchar = strlen(c);
	char temp;
		
	for(int i=0; i <  lastchar/2; i++){
        temp=c[i];
        c[i]=c[lastchar -i-1];
        c[lastchar -i-1]=temp;
    }
	
	cout<<"\nOutput: "<<c;
}
