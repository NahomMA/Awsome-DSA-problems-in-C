#include <stdio.h>
#include<string.h>

void disp(char* C){
    int i =0;
    // while(*C!='\0'){
    // printf("%c",*C);
    // C++; 
    // }
    // printf("\n");



    /* OR
    */



// while(C[i]!='\0'){

//     printf("%c",C[i]);
//     i++; 
//     }

//     printf("\n");



 /* OR
    */



while(*(C+i)!='\0'){
    printf("%c",*(C+i));
    i++; 
    }
    printf("\n");
}


int main(){
    char C[5];
    C[0]='J';
    C[1]='O';
    C[2]='H';
    C[3]='N';
    C[4]='\0';
    printf("%s\n",C);

    char C1[5]={'J','O','H','N'};
    printf("%s\n",C1);

    char C2[20]="nash";
    printf("%s\n",C2);
    char C3[]="nash";
    printf("%s\n",C3);


    char D[20]= "Hello";
    disp(D);
    
    


}