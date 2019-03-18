#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
/*判斷N所在的範圍，並輸出判定結果*/
  if(n>=55&&n<=65)cout<<"YES";
  else if (n<0||n>100)cout<<"Error";
	else cout<<"NO";
}
