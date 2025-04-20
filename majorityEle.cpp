#include<iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec ={1,0,1,0,0,5,6,6,5,5,5,5};
	int ans=0;
	for(int val:vec)
	{
		ans^=val;
	}
	cout<<ans<<endl;
}
