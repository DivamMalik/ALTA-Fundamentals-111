#include <stdio.h>

int main(){
    char S[13];
    scanf("%s",S);
    for(char i='a';i<='z';i++){
        int count = 0;
        for(int j=0;j<13;j++){
            if(S[j]==i){
                count++;
            }
        }
        if(count>0){
            printf("%c%d ",i,count);
        }
    }
}
