//----------------------------------------------------------
//**********************************************************
//***   Portable example for printing array of bytes   ***** 
//******    Autor: Joao Pedro Miranda Marques    ***********
//**********************************************************
//----------------------------------------------------------
#include <stdio.h>

int main(){

    int id; //Identificador
    int sq; //Sequenciador
    int vl; //Valor
    int size = sizeof(id) + sizeof(sq) + sizeof(vl) + 1;

    //Teste    <- Insira aqui os valores que querem testar.
    id = 0x03;
    sq = 0x05;
    vl = 0xFFFF;

    unsigned char* value0 = (unsigned char*)&size;
    unsigned char* value1 = (unsigned char*)&id;
    unsigned char* value2 = (unsigned char*)&sq;
    unsigned char* value3 = (unsigned char*)&vl;

    // size
    printf("%02x-",  value0[0]); 

    // Identificador
    printf("%02x-", value1[0]); 
    printf("%02x-", value1[1]); 
    printf("%02x-", value1[2]); 
    printf("%02x-", value1[3]); 

    //Sequenciador
    printf("%02x-", value2[0]); 
    printf("%02x-", value2[1]); 
    printf("%02x-", value2[2]); 
    printf("%02x-", value2[3]); 

    //Valor
    printf("%02x-", value3[0]); 
    printf("%02x-", value3[1]); 
    printf("%02x-", value3[2]); 
    printf("%02x\n", value3[3]);

    printf("Little Endian\n"); 

    return 0;

}