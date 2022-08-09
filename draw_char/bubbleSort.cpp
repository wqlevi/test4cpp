#include <cstdlib>
#include <iostream>

int main(){
	std::srand(1);
	int arr[10];
	for (int i=0; i<10; i++){
		arr[i] = 1 + std::rand()/((RAND_MAX+1u)/11);
	}
	std::cout<<"Original array is:\n";
	for (int i=0; i<10; i++) std::cout << arr[i] <<",";

	//bubble sorting
	int size=10;
	int tmp;
	for (int b=size-1; b>0; b--){
	for(int i=0; i<b; ++i){
		if (arr[i]>arr[i+1]){
			tmp = arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = tmp;	
		}
	}
	//result
	std::cout <<"\n" << b << "--Output:\n"<<std::endl;
	for (int i=0; i<size; i++) std::cout << arr[i] <<",";
	}

	return 0;
}

