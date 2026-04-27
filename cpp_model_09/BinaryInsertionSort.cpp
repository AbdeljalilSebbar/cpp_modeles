#include <iostream>

void	handleSort(int* arr, int size) {
	for (int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0&&arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	
}

int main(int ac, char *avp[]) {
	int arr[5];
	int j = 0;
	for (int i = 1; i < ac; i++)
	{
		arr[j] = std::atoi(avp[i]);
		j++;
	}
	std::cout << "array before sorte using 'Binary Insertion Sort': ";
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
	handleSort(arr, 5);
	std::cout << "array after sorte using 'Binary Insertion Sort': ";
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
	return 0;
}

