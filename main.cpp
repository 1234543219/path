
#include<iostream>

class Path {
	int data;
public:
	Path(): data(0) {
		
	}
	~Path() {
		
	}
	void pull(int* p) {
		if ( p != nullptr) {
			*p = data;
		} else {
			std::cerr << "ptr is nullptr" << std::endl;
		}
	}
	//(这里有需要可以改为传入函数作为参数或直接重写这个方法）
	void methods(int c){
		//封装好的处理逻辑
		data++;
		data*=c;
		
	}
	void push(int num) {
		data  = num;
	}
};


int main() {
	int num = 0;
	
	
	Path s;
	//入口 值
	s.push(3);
	//处理
	s.methods(20);
	//出口 用变量承接
	s.pull(&num);
	std::cout<<num<<std::endl;//80
	
	
	
	return 0;
}
