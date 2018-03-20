# include <iostream>
# include <vector>
# include <string>
using namespace std;
int main(string a) {

	std::vector <std::string>  onoma;
	std::cout << std::endl;
	std::cout << "Strings contained in the vector:" << std::endl;
	std::cout << "--------------------------------" << std::endl;
//	onoma;
	for (int i = 0; i < 10; i++) {

		onoma.push_back("bill");
	}
	for (int i = 0; i < 10; i++) {

		std::cout << onoma[i] << std::endl;
cout<<"bill"endl;
	}
	


	system("pause");
}
/*void print(vector <string> &vector) {

	std::vector <std::string>   onoma;
	std::cout << std::endl;
	std::cout << "Strings contained in the vector:" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	for (int i = 0; i < 10; i++) {

		onoma[i] = "bill";
	}
	for (int i = 0; i < 10; i++) {

		std::cout << onoma[i] << std::endl;
	}
}*/
