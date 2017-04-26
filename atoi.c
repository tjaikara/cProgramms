#include <stdio.h>
#include <string.h>

//Function Declaration
int atoi406(const char * stringInput);
int main()
{


	char *inputString;

	printf("Enter A Numeric value: ");
	scanf("%m[^\n]", &inputString);

	int result = atoi406(inputString);
	printf("%d", result);
	printf("%s\n","");

}

//Function Implentation
int atoi406(const char * stringInput){
	int returnValue = 0;

	for(int i =0; i < (int)strlen(stringInput); i++){
		if(stringInput[i] < '0' || stringInput[i] > '9'){
			return 0;

		} 
		else{
			returnValue = returnValue * 10 + (stringInput[i] - '0');
		}
	}

	return returnValue;
}
