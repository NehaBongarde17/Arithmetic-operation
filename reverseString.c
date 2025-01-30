#include <stdio.h>
#include<string.h>
void reverseString(char s[],int len)
{
    int left=0;
    int right=len-1;
    while(left<right){
        int temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",s[i]);
    }
    
    
}

int main() {
    
    char s[5]="abcd";
    int len=strlen(s);
    reverseString(s,len);
}