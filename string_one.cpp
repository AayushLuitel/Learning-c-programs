/*WAP that reads a string from the keyboard until the user 
presses an enter key and counts the vowels , consonants, semicolons,commas separately in the string.*/
#include <stdio.h>
#include <string.h>
int main()
{
char name[100];
int i,c=0,d=0,e=0,f=0,len=0;
printf("Enter any characters :");
gets(name);      //reads all charactrs until next line  
len=strlen(name);        //counts number of characters provided in string
for (i=0;i<len;i++) {
	if (name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u'|| name[i]=='A'|| name[i]=='E'||
	name[i]=='I'||name[i]=='O'||name[i]=='U') {
		c=c+1;    //counts number of vowels
	}
	else if (name [i]== ','){
		d=d+1;  //counts number of commas
		
	}
	else if (name [i]==';') {
		e=e+1;   //counts number of semicolons
	}
	else {
		f++; //counts other characters or consonants
	}

}
	printf("Number of vowels is %d\n ", c);
	printf("No of commas is %d \n", d);
	printf("No of semi colons is %d \n", e);
	printf("No of consonants is %d ", f);

}


