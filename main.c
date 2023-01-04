#include <stdio.h>
int stoi(int len, char *str){
    //iterate through str
    int ret = 0; 
    for(int x = 0 ; x != len; x++){
        int temp =0;
        temp = str[x] -'0';
        for(  int f = (len-1)-x; f !=0; f--){
            temp *=10;
            //printf("%c\n", )
        }
        printf("%i\n", temp);
        ret += temp;
    }

    return ret;
}

int main(void){
    int val = stoi(3, "123");
}
