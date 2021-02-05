#include <vector>
using namespace std;

int binarySearch(vector<int> array, int target) {
	int low = 0, high = array.size()-1;
	int mid;
	while(low <= high) {
		mid = (low + high) / 2;
		if (array[mid] == target)
			return mid;
		else if(array[mid] < target)
			low = mid + 1;	
		else
			high = mid - 1;
	}
  return -1;
}