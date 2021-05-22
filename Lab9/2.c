#include <stdio.h>
#include <stdio.h>

struct record{
char name[50];
int iNum;
float fNum;
};


int main(){
char in_filename[20];
char out_filename[20];
struct record rec;

FILE *in;
printf("Enter input binary filename: ");
scanf("%s", in_filename);


in = fopen(in_filename, "rb");
if(in == NULL){
printf("ERROR: could not open input binary filename %s\n", in_filename);
return 1;
}

printf("Reading records from binary file %s\n", in_filename);
fread(&rec, sizeof(rec), 1, in);
while(!feof(in)){
printf("%s", rec.name);
printf("%d\n", rec.iNum);
printf("%f\n", rec.fNum);
fread(&rec, sizeof(rec), 1, in);
}

fclose(in);
}
