#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<string> longestwords1(string inp[],int n){
	vector<string> res;
	unsigned int maxlen=0;
	for(int i=0;i<n;i++){
	    string s=inp[i];
		if(s.length()>maxlen){
			maxlen=s.length();
			res.clear();
			res.push_back(s);
		}
			else if(s.length()==maxlen){
				res.push_back(s);
			}
		}
		return res;
	}
list<string> longestwords2(string inp[],int n){
	list<string> res;
	unsigned int maxlen=0;
	for(int i=0;i<n;i++){
	    string s=inp[i];
		if(s.length()>maxlen){
			maxlen=s.length();
			res.clear();
			res.push_back(s);
		}
			else if(s.length()==maxlen){
				res.push_back(s);
			}
		}
		return res;
	}
vector<string> longestWords(vector<string> inp){
	vector<string>res;
	unsigned max = 0;
	for(auto x:inp){
	    if(x.length() > max){
	        max = x.length();
	        res.clear();
	        res.push_back(x);
	    }
	    else if(x.length() == max){
	        res.push_back(x);
	    }
	}
	return res;	
}
int main(){
	vector<string>inp{"list" , "array", "record", "resign" ,"lol"};
	vector<string>res = longestWords(inp);
	for(auto x:res){
		cout<<x<<"\t";
	}
	return 0;
}
