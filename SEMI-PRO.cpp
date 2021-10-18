#include <time.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int level;
	int i;
	int size;
	cin>> level;
	cin>> size;
	int total=size;
	srand(time(NULL));
	int source=0;
	int source1;
	source1=100/size;
	if(level==1||level==2) {

		for(size; size>0; size--) {

			int type=rand()%2;
			if(type==0) {
				int a=rand()%100;
				int b=rand()%100;
				int result;
				result=a+b;
				cout<<a;
				cout<<"+";
				cout<<b;
				cout<<"=";
				int student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}
			}

			if(type==1) {
				int a=rand()%100;
				int b=rand()%100;
				int result;
				result=a-b;
				cout<<a;
				cout<<"-";
				cout<<b;
				cout<<"=";
				int student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}
			}
		}
		cout<<"end! ";
		if(i==total) {
			cout<<"100";
		} else {
			cout<<source;
		}
	}
	if(level==3||level==4) {
		srand(time(NULL));
		for(size; size>0; size--) {
			int type=rand()%4;

			if(type==0) {
				int a=rand();
				int b=rand();
				int result;
				result=a+b;
				cout<<a;
				cout<<"+";
				cout<<b;
				cout<<"=";
				int student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}



			}

			if(type==1) {
				int a=rand();
				int b=rand();
				int result;
				result=a-b;
				cout<<a;
				cout<<"-";
				cout<<b;
				cout<<"=";
				int student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}



			}
			if(type==2) {
				int a=rand();
				int b=rand();
				int result;
				result=a*b;
				cout<<a;
				cout<<"*";
				cout<<b;
				cout<<"=";
				int student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}




			}
			if(type==3) {
				int a=rand()%100;
				int b=rand()%100;
				int result;
				result=a/b;
				cout<<a;
				cout<<"¡Â";
				cout<<b;
				cout<<"=";
				int student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}



			}



		}
		cout<<"end! ";
		if(i==total) {
			cout<<"100";
		} else {
			cout<<source;
		}


	}
	if(level==5||level==6) {
		srand(time(NULL));
		for(size; size>0; size--) {
			int type=rand()%4;
			double a=(double)(rand())/1000;
			double b=(double)(rand())/1000;
			a = ((float)((int)((a+0.005)*100))/100);
			b = ((float)((int)((b+0.005)*100))/100);
			double result;
			if(type==0) {

				result=a+b;
				result = ((double)((int)((result+0.005)*100))/100);
				cout<<a;
				cout<<"+";
				cout<<b;
				cout<<"=";
				double student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}



			}

			if(type==1) {
				result=a-b;
				result = ((double)((int)((result+0.005)*100))/100);
				cout<<a;
				cout<<"-";
				cout<<b;
				cout<<"=";
				double student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}



			}
			if(type==2) {
				result=a*b;
				result = ((double)((int)((result+0.005)*100))/100);
				cout<<a;
				cout<<"*";
				cout<<b;
				cout<<"=";
				double student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}




			}
			if(type==3) {
				result=a/b;
				result = ((double)((int)((result+0.005)*100))/100);
				cout<<a;
				cout<<"¡Â";
				cout<<b;
				cout<<"=";
				double student;
				cin>>student;
				if(student==result) {
					source=source+source1;
					i++;
				}



			}



		}
		cout<<"end! ";
		if(i==total) {
			cout<<"100";
		} else {
			cout<<source;
		}


	}


}
