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

/*void initialize_table(){
	for(int i=0;i<70;i++){
		fibonacci_table[i] = 0;
	}
}*/

unsigned int fibonacci_dp_td(int n){
	if(fibonacci_table[n] != 0){
		return fibonacci_table[n];
	}
	if((n==1)||(n==2)){
		fibonacci_table[n] = 1;
	} else {
		fibonacci_table[n] = fibonacci_dp_td(n-1)+fibonacci_dp_td(n-2);
	}
	return(fibonacci_table[n]);
}

int main(){
	int n;
	printf("Enter the value of n greater than 0 : ");
	scanf("%d",&n);

	current_timestamp();
	printf("Fibonacci of n is %u\n",fibonacci_dp_td(n));
	current_timestamp();

	return 0;
}
