#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, n ,heads = 0, tails = 0;
	
	//名前を聞くパート
	char str[8];
	printf("Who are you? \n>");
	scanf("%s",str);
	printf("Hello, %s!\n", str);
	
	//コイントスのパート
	printf("Tossing a coin. . .\n");

	for(i = 0 ; i < 3; i++){
		n = rand();
		if(n%2 == 0){
			printf("Round %d: Head\n", i+1);
			heads++;
		}
		else {
			printf("Round %d: Tail\n", i+1);
			tails++;
		}
	}
	printf("Heads: %d, Tails: %d\n",heads, tails);

	return 0;
}
