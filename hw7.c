#include <stdio.h>
#include <math.h>

double StandardDeviation(double arr[]){
	double sum = 0;
	for(int i = 0; i < 5; i++){
		sum += arr[i];
	}
	
	double average = sum / 5;
	
	for(int i = 0; i < 5; i++){
		arr[i] = pow((arr[i] - average), 2);
	}
	
	double variance = 0;
	for(int i = 0; i < 5; i++){
		variance += arr[i];
	}
	variance /= 5;
	
	return sqrt(variance);
}


int main(){
	double arr[5] = {0, 0, 0, 0, 0};
	
	printf("Enter 5 real numbers: ");
	for(int i = 0; i < 5; i++){
		scanf("%lf", &arr[i]);
	}
	
	printf("Standard Deviation = %.3f", StandardDeviation(arr));
}
