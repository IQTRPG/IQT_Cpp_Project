#include <iostream>
template <size_t size_x, size_t size_y>
void func(double(&arr)[size_x][size_y])
{
	arr[0][0] = 'K';
	printf("%p\n", &arr);
	for (int i = 0; i < 5; i++) {
		//std::cout << "\t\t\t";
		for (int j = 0; j < 5; j++)
		{
			char a = arr[i][j];
			std::cout << a;
			std::cout << " ";
			//colorReset();
		}
		std::cout << "\n";
	}
}

int main()
{
	double a1[5][5]={	'#', '#', '#', '#', '#', 
						'#', '#', '#', '#', '#', 
						'#', '#', 'M', '#', '#',
						'#', '#', '#', '7', '#', 
						'#', 'L', '#', '#', '#', };
	//double a2[5][5];

	std::cout << &a1 << "\n"  << std::endl;
	func(a1);
	for (int i = 0; i < 5; i++) {
		//std::cout << "\t\t\t";
		for (int j = 0; j < 5; j++)
		{
			char a = a1[i][j];
			std::cout << a;
			std::cout << " ";
			//colorReset();
		}
		std::cout << "\n";
	}
	//func(a2);
	getchar(); getchar();
	return 0;
}