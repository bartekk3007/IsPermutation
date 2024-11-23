#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v1 = {1, 2, 3, 4, 5};
	std::vector<int> v2 = {1, 3, 5, 2, 4};

	if(std::is_permutation(v1.begin(), v1.end(), v2.begin()))
	{
		std::cout << "These are permutations\n";
	}
	else
	{
		std::cout << "These are not permutations\n";
	}


	return 0;
}