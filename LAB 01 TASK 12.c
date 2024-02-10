#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    int arr[26]= {0};
    printf("Please Enter Any String:");
    gets(s1);
    puts(s1);
    int x =0;
    for(int i=0; i<strlen(s1); i++)
    {
        if(s1[i]>='a'&&s1[i]<= 'z'|| s1[i]>='A'&& s1[i]<='Z' )
        {
            if(s1[i]>='a'&&s1[i]<= 'z')
            {
                while(s1[i]!='\0')
                {
                    x = s1[i]-97;
                    arr[x]++;

                    i++;
                }
            }
            if(s1[i]>='A'&& s1[i]<= 'Z')
            {
                while(s1[i]!='\0')
                {
                    x =s1[i]-65;
                    arr[x]++;
                    i++;
                }
            }
        }
    }

    for(int i=0; i<26; i++)
    {  printf("%c :%d \n",i+65,arr[i]);


    }


}



