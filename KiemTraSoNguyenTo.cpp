#include <math.h>
bool KTSNT(int x) 
{
	if (x < 2){
		return false;
	}
	int count=0;
	for (int i = 2; i <= sqrt(x); i++){
		if (x%i == 0){
			count++;
		}

	}
	if (count == 0)
		return true;
	return false;
}
