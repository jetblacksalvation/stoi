#include <stdio.h>
int myAtoi(char * s){
    char* ptr = s;
    int len= 0;
    int ret= 0;
    int sign = 0;
    while(ptr[len]!=0){
        if(ptr[len]=='-'){
            sign =1;
        }
        len++;
    }


    
    
    for(int  x =0; x != len; x++){
        int temp =0;
        temp = (s[x]-'0' >= 0 && s[x]-'0'<=9)?  s[x]-'0': -1;
        printf("%i is temp\n", temp);
        //temp = s[x] -'0';
        if(temp ==-1||!temp){

        }
        else{
        
            for(  int f = (len-2)-x; f !=0; f--){
                temp *=10;
            }
            ret += temp;
            printf("%i is return\n", ret);
        }
        
        
    }
    if(sign ==1){
        ret*=-1;
    }
    return ret;
}
int main(void){
    int val = myAtoi("-42 ");
    printf("return is = %i", val);
}