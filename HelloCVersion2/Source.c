/*hello world verison 2*/

#include <stdio.h>
int main(void) {


	int i = 0;
	char* str = "HEllo world \n";

	/*print each character until reach '\0'*/

	while (str[i]!='\0') {


		printf("%c",str[i++]);
	}
	getch();
	return 0;
	
}