#include <stdio.h>
#include <stdlib.h>
char rev[100];
char *revp;
char arr[100];
int count=0;
char *arrayptr;
void read ( ){
	int i;
	FILE *f;
   	f=fopen ("C:/Users/dell/Documents/task6file.txt","r");
	while(fscanf(f,"%s",arr)!=EOF){
	 printf("%s \n",arr);}
     fclose(f);
     for(i=0;i<100;i++){
	if(arr[i]!='\0')
	 count++;}
     arrayptr=arr;

	 ;}
void reverse (){

    int i=0;
    int j=count+1;
 while(count!=-1){
  rev[count]=arrayptr[i];
 	count--;
 	i++;
 }
for(i=0;i<j;i++){
    printf("%c",rev[i]);}
    revp=rev;}

void write(){
FILE *f;
f=fopen("C:/Users/dell/Documents/task6file.txt","w");
for(int i=0;i<19;i++){
fprintf(f,"%c",revp[i]);}
fclose(f);}
int main(){
 read();
 reverse();
 write();

return 0;}
