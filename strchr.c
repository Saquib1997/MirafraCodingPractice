#include <stdio.h>
#include <string.h>

char * myStrchr(char *arr, char chr){
	int i;
	char *ptr;
	while(i!=strlen(arr)){
		if(*(arr+i)=chr)
		{
			ptr=(arr+i);
			//printf("%x %x %x\n",arr,(arr+i),ptr);
			return ptr;
		}	
		i++;
	}
	return NULL;
}

int main()
{
	char arr[50],chr,*cptr;
	printf("Enter the charector to be found:\n");
	scanf("%c",&chr);
	printf("Enter the string\n");
	scanf("%s",arr);
	//gets(arr);
	cptr=myStrchr(arr,chr);
	//printf("%ld %ld\n",cptr,arr);
	if(cptr==NULL)
		printf("The charector %c is not found\n",chr);
	else
		printf("The charector (%c) is found at position %c\n",chr,*cptr);
	return 0;
}
