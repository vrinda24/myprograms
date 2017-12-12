#include<stdio.h>
#include<string.h>
#define size 11

//The hash function is taken as sum%3
char hasharray[size][10];
void print(char word[]){
    int i=0,j=0;
    for(i=0;i<size;i++){
    for(j=0;j<strlen(word);j++)
    {
    printf("%c",hasharray[i][j]);
    }
    printf("-->At index %d\t\n",i);
    }
}
int hashfunc(char word[]){
    int i,sum=0;
    for(i=0;i<strlen(word);i++){
        sum=sum+((int)word[i]-97);
    }
    return sum%10;
}
void insert_in_hasharray(int pos,char word[]){
    int i=0,j=0,flag=0;
    while(flag==0){
    if(hasharray[pos][0]=='\0'){
        for(j=0;j<strlen(word);j++)
        hasharray[pos][j]=word[j];
        word[j]='\0';
        flag=1;
    }
    else{
        pos++;flag=0;
    }
    }
    }
    //for(j=0;j<strlen(word);j++)
    //printf("%c",hasharray[i][j]);

int main()
{
    int exitcode=0;
    char word[10];
    while(exitcode!=1){
    printf("Enter 1 to exit otherwise enter 0 followed by the word to be inserted in the hash array\n");
    scanf("%d",&exitcode);
    if(exitcode!=1){
    scanf("%s",word);
    insert_in_hasharray(hashfunc(word),word);
    print(word);
    }
    else{exit(0);}
    }
}
