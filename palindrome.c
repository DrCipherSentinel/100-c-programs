#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_palindrome(char *s)
{
	int left=0, right=strlen(s)-1;
	while(left<right)
	{
		while(!isalnum(s[left]))left++;
		while(!isalnum(s[right]))right--;
		if(tolower(s[left])!=tolower(s[right])) return 0;
		left++;
		right--;
	}
	return 1;
}

int main()
{
	char s[10];
	printf("enter a string:");
	gets(s);
	if(is_palindrome(s))
	{
		printf("entered string is a palindrome");
	}
	else
	{
		printf("entered string is not a palindrome");
	}
	return 0;
}
