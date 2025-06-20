#include<iostream>
#include<stack>

using namespace std;
void printing(stack<int>stack){
	while(!stack.empty()){
		cout<<stack.top()<<endl;
			
		stack.pop();
	}
}
int main(){
	stack<int> no;
	no.push(10);
		no.push(20);
			no.push(30);
				no.push(40);
			no.pop();
				printing(no);
	/*if(no.empty()){
		cout<<"the stack is empty"<<endl;
	}
	else
	cout<<" the stack is not empty"<<endl;
	cout<<"stack size"<<no.size()<<endl;*/
	
	return 0;
}