//
// Created by Christan on 8/2/2016.
//

#include<stdio.h>
#define MAXLINE 1000
int getline(char s[], int lim);
void removeTblanks(char line[], int lin_len);
int lengthcount(char s[]);

int main(){
    char line[MAXLINE];
    removeTblanks(line,MAXLINE);
    printf("%d",lengthcount(line));
    return 0;

}

int getline(char s[], int lim){
    int c,i;
    for(i = 0; i< lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if(c == '\n' ){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void removeTblanks(char line[], int lim){
    int line_len;
    line_len = getline(line,lim);
    int i;  int j = 0;
    for( i = line_len - 1; i >= 0;--i){
        if(line[i] != ' ' || line[i] != '\t'){
            break;
        }
        j++;
    }
    if(j > 0)
        line[line_len - j] = '\0';
}
int lengthcount(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}
