#include<stdio.h>
#include<stdlib.h>

struct info {
char name[50];
int num ;
float value;
};

int main() {

FILE *infile;
FILE *outfile;

char data[50];
int sizeOfInfile;
int sizeOfOutfile;

infile = fopen("name.txt", "r");
outfile = fopen("name.bin", "wb");

if(infile == NULL) {
fprintf(stderr, "\n Got error to open name.txt file\n");
exit(1);
}

if(outfile == NULL) {
fprintf(stderr, "\n Got error to open name.bin file\n");
exit(1);
}

while( fgets(data, 50, infile) != NULL ) {
struct info obj;
obj.name = data;
fgets(data, 50, infile);
obj.num = atoi(data);
fgets(data, 50, infile);
obj.value = atof(data);
fwrite(&obj, sizeof(struct info), 1, outfile);
}

fseek(infile, 0, SEEK_END);
sizeOfInfile = ftell(infile);
fseek(outfile, 0, SEEK_END);
sizeOfOutfile = ftell(outfile);

if(sizeOfInfile > sizeOfOutfile) {
printf("File name.txt is bigger");
}

else if(sizeOfInfile < sizeOfOutfile) {
printf("File name.bin is bigger");
}

else {
printf("Both file size are same");
}

fclose(infile);
fclose(outfile);
return 0;
}
