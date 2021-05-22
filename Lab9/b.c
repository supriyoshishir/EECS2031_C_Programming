#include<stdio.h>

#include<stdlib.h>

struct record

{

char name[50];

int num ;

float value;

};
int main()
{
int count;
FILE *fp;
struct record data;
fp = fopen("name.bin", "rb");
if(fp==NULL)

{

fprintf(stderr, "\n Got error to open name.bin file\n");

exit(1);

}

while( fread(&data, sizeof(struct record, 1, fp) != NULL ) )

{

printf(" %s \n %d \n %f \n", data.name, data.num, data.value);

}
fclose(fp);
return 0;
}
