#include<iostream>
using namespace std;
int main(){
	//input number
	int begin=0,finish=0,count_num=0;
	cin>>begin>>finish;
	//main
	for( int i=begin;i<=finish;i++){
		if(i%7==0){
			cout<<i<<endl;
			count_num++;
			if (count_num==100){
				break;
			}
		}
	}
	cout<<"book num is"<<count_num;
	return 0;
	
}
