#include<stdio.h>

#include <sys/time.h>

long long current_timestamp() {
    struct timeval te; 
    gettimeofday(&te, NULL); // get current time
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // caculate milliseconds
    printf("milliseconds: %lld\n", milliseconds);
    return milliseconds;
}

unsigned int fibonacci_rec(int n){
	if((n==1)||(n==2))
		return 1;
	return(fibonacci_rec(n-1)+fibonacci_rec(n-2));
}

int main(){
	int n;
	printf("Enter the value of n greater than 0 : ");
	scanf("%d",&n);

	current_timestamp();
	printf("Fibonacci of n is %u\n",fibonacci_rec(n));
	current_timestamp();

	return 0;
}
