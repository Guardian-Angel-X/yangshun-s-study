#include<iostream>
using namespace std;

void Print_run(int mouth){
	switch(mouth){
		case 1:
			cout<<31;
			break;
		case 2:
			cout<<29;
			break;
		case 3:
			cout<<31;
			break;
		case 4:
			cout<<30;
			break;
		case 5:
			cout<<31;
			break;
		case 6:
			cout<<30;
			break;
		case 7:
			cout<<31;
			break;
		case 8:
			cout<<31;
			break;
		case 9:
			cout<<30;
			break;
		case 10:
			cout<<31;
			break;
		case 11:
			cout<<30;
			break;
		case 12:
			cout<<31;
			break;
		}
}

void Print_chang(int mouth){
	switch(mouth){
		case 1:
			cout<<31;
			break;
		case 2:
			cout<<28;
			break;
		case 3:
			cout<<31;
			break;
		case 4:
			cout<<30;
			break;
		case 5:
			cout<<31;
			break;
		case 6:
			cout<<30;
			break;
		case 7:
			cout<<31;
			break;
		case 8:
			cout<<31;
			break;
		case 9:
			cout<<30;
			break;
		case 10:
			cout<<31;
			break;
		case 11:
			cout<<30;
			break;
		case 12:
			cout<<31;
			break;
		}
}

int main(){
	int year,mouth;
	cin>>year>>mouth;
	
	if(year >= 0 && year <= 10000 && mouth >=0 && mouth <=12){
		if(year % 4 == 0 && year % 100 == 0 ){
			if(year % 400 == 0){
				Print_run(mouth);
			}
			else{
				Print_chang(mouth);
			}
		}
		else if(year % 4 == 0 && year % 100 != 0){
			Print_run(mouth);
		}
		else{
			Print_chang(mouth);
		}
	}
	else{
		cout<<"Error!";
	}
}
