#include<iostream>
using namespace std;

int addition(int a, int b){
	
	int sum;
	
	sum = a + b;
	return sum;
}

int main(){
	
	int answer;
	
	int first = 1, second = 3;
	answer = addition(first, second);
	
	cout << "The sum is " << answer;
}
