#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int cow_number;
	ifstream in("lab3_in",ios::in);
	in>>cow_number;
	vector<int>cow(cow_number);
	int total=0;
	for(int i=0;i<cow_number;++i)
	in>>cow.at(i);
	sort(cow.begin(),cow.end());
	for(int i=cow_number-1;i>cow_number-6;--i)
	total+=cow.at(i);
	cout<<total<<endl;
	return 0;
}

