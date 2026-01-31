#include <stdio.h>

int main(){
	int i=0, j=1;
	
	while(i<3)
	{
		while(j<=3)
		{
			printf("%d",j=j+1);	
		}
		printf("%d",i=i+1);
	}
	// printf("%d%d",i=i+1,j=j+1);	
	
	return 0;
}