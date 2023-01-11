#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<int> getseq1(){
	int n;
	vector<int> res;
	while(1){
		cin>>n;
		if(n==0) break;
			res.push_back(n);
	}
	return res;
}
list<int> getseq2(){
	int n;
	list<int> res;
	while(1){
		cin>>n;
		if(n==0) break;
			res.push_back(n);
	}
	return res;
}
int main()
{
	vector<int> data1=getseq1();
	for(auto e:data1)
	cout<<e<<endl;
	list<int> data2=getseq2();
	for(auto e:data2)
	cout<<e<<endl;
return 0;
}
