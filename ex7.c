#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int Long_ch(char ch[1000]){
    char *p;
    p = ch;
    int c = 0;
    while (*p != '\0'){
        c++;
        p++;
    }
    return c;
}


void del_ch(char ch[1000],char ch1[1000],int m,int n){
    char *p;
    char result[n-m];
    p = result;
    int check;
    int controle=0;
    for (int i=0;i<n;i++){
        check=0;
        if (ch[i]==ch1[0]){
            for (int j=0;j<m;j++){
                if (ch[i+j]==ch1[j]){
                    check+=1;
                }
            
            }
            if (check==m & controle==0){
                controle=1;
                i+=check;
            }
        }
        *p=ch[i];
        p++;
        
    }
    *p='\0';
    printf("%s\n",result);

}

int main(){
    char ch[1000],ch1[1000];
    do{
        printf("donner la chaine 1: ");
        gets(ch);
    }while(Long_ch(ch)>1000);
    do{
        printf("donner la chaine 2: ");
        gets(ch1);
    }while(Long_ch(ch1)>1000);
    int n = Long_ch(ch);
    int m = Long_ch(ch1);
    del_ch(ch,ch1,m,n);
    return 0;

}