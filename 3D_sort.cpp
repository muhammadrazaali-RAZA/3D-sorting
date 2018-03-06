#include<iostream>
using namespace std;

struct array{
	int arry[2][2][5];
}ary;

void exchange(int *value_1,int *value_2){
	int temp=*value_1;
	*value_1=*value_2;
	*value_2=temp;
}


void write(){
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			for (int k=0; k<5; k++){
				cout<<"Enter "<<i<<" "<<j<<" "<<k<<" number :";
				cin>>ary.arry[i][j][k];
			}
		}
	}
}


void sequence(){
	for (int n=0; n<20; n++){
		for (int i=0; i<2; i++){
			for (int j=0; j<2; j++){
				for (int k=0; k<5; k++){
					if (j!=0 && k==0){
						if(ary.arry[i][j-1][4]>ary.arry[i][j][k]){
							exchange(&ary.arry[i][j-1][4],&ary.arry[i][j][k]);
						}
					}else if (i!=0 && j==0 && k==0){
						if(ary.arry[i-1][1][4]>ary.arry[i][j][k]){
							exchange(&ary.arry[i-1][1][4],&ary.arry[i][j][k]);
						}
					}else if (k!=0){
						if(ary.arry[i][j][k-1]>ary.arry[i][j][k]){
							exchange(&ary.arry[i][j][k-1],&ary.arry[i][j][k]);
						}
					}
				}
			}
		}
	}
}



void read(){
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			for (int k=0; k<5; k++){
				cout<<ary.arry[i][j][k]<<" ";
			}cout<<endl;
		}
	}
}


int main (){
	write();
	sequence();
	read();
}
