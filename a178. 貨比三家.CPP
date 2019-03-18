#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c ;
	cin>>a>>b>>c;
	
	if(a<b&&a<c) cout<<a;
	if(b<a&&b<c) cout<<b;
	if(c<a&&c<b) cout<<c;
	if(a>c&&c==b) cout<<b;
	if(b>a&&a==c) cout<<c;
	if(c>b&&b==a) cout<<a;
  //列出所有可能的答案

}
