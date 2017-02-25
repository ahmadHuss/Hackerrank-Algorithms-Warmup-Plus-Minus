#include <cstdio>
#include <iostream>

using namespace std;


int main(){
    int n;
    double countP, countN, countZ;
	countP = countN = countZ = 0;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++){
       cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			countP++;
		}

		if (arr[i] < 0) {
			countN++;
		}

		if (arr[i]==0) {
			countZ++;
		}

		

	}
	
    printf("%0f\n%f\n%f\n", (countP / n), (countN / n), (countZ / n));
    
    
    
    
    return 0;
}