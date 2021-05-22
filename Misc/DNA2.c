#include <stdio.h>

int main() {

char seq[250];
int i = 0, count = 0;
scanf("%[^\n]s", seq);

while(seq[i])
    {
//if character is other than A,C,G,T
if(seq[i]!='A' && seq[i]!='C' && seq[i]!='G' && seq[i]!='T')
    {
        printf("Invalid Sequence\n");
        break;
    }
else
    {
//If characters ACGT are found in consecutive locations
    if(seq[i]=='A' && seq[i+1]=='C' && seq[i+2]=='G' && seq[i+3]=='T')
    {
        i = i + 4;
        count = count + 1;
    }
//If character is A or C or G or T
    else if(seq[i]=='A' || seq[i]=='G' || seq[i]=='C' || seq[i]=='T')
    {
        i = i + 1;
    }
    }
    }
//If whole string is parsed without encountering characters other than A,G,C,T
if(seq[i]=='\0')
{
    printf("Valid Sequence\n");
    printf("%d\n", count);
}
}