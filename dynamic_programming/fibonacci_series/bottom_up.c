#include<stdio.h>
#include <sys/time.h>

unsigned int fibonacci_table[70];

long long current_timestamp() {
    struct timeval te; 
    gettimeofday(&te, NULL); // get current time
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // caculate milliseconds
    printf("milliseconds: %lld\n", milliseconds);
    return milliseconds;
}


unsigned int fibonacci_dp_bu(int n){

	unsigned int fibn1 , fibn2 , fibn;

	if(n==1 || n==2)
		return 1;
	fibn1 = 1;
	fibn2 = 1;
	for(int i=3;i<=n;i++){
		fibn = fibn1+fibn2;
		fibn2=fibn1;
		fibn1=fibn;
	}
	return fibn;
	
}

int main(){
	int n;
	printf("Enter the value of n greater than 0 : ");
	scanf("%d",&n);

	current_timestamp();
	printf("Fibonacci of n is %u\n",fibonacci_dp_bu(n));
	current_timestamp();

	return 0;
}
