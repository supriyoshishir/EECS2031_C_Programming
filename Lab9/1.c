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

FILE *in, *out;
printf("Enter input text filename: ");
scanf("%s", in_filename);

printf("Enter output binary filename: ");
scanf("%s", out_filename);

in = fopen(in_filename, "r");
if(in == NULL){
printf("ERROR: could not open input filename %s\n", in_filename);
return 1;
}

out = fopen(out_filename, "wb");
if(out == NULL){
printf("ERROR: could not open output filename %s\n", out_filename);
return 1;
}

fgets(rec.name, 50, in);
while(!feof(in)){
fscanf(in, "%d %f", &rec.iNum, &rec.fNum);
fwrite(&rec, sizeof(rec), 1, out);
fgetc(in); //get rid of newline before reading name line
fgets(rec.name, 50, in);
}

fclose(in);
fclose(out);

printf("Output binary file %s has been created\n", out_filename);
}
