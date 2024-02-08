#include <stdio.h>
int main(){
// --------------------Q7------------
    FILE *d  ;
    d=fopen("file.txt","r") ;
    char data[100] ;
    if(d==NULL){
        printf("404") ;
    }else{
       while(fgets(data,50,d)!=NULL){
        printf("%s",data) ;
       }
       fclose(d) ;
    }

    
FILE *d  ;
    d=fopen("file.txt","a") ;
    char data[100]="\n my name is dhruval" ;
    if(d==NULL){
        printf("404") ;
    }else{
     fputs(data,d) ;
     fclose(d) ;
    }





    return 0 ;
}