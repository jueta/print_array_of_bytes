//----------------------------------------------------------
//**********************************************************
//***   Portable example for printing array of bytes   ***** 
//******    Autor: Joao Pedro Miranda Marques    ***********
//**********************************************************
//----------------------------------------------------------
#include <stdio.h>

typedef struct{
    int id; //Identificador
    int sq; //Sequenciador
    int vl; //Valor
}Data;


void serialize(Data *data, unsigned char* value[]){

    int size = sizeof(data->id) + sizeof(data->sq) + sizeof(data->vl) + 1;

    value[0] = (unsigned char*)&size;
    value[1] = (unsigned char*)&data->id;
    value[2] = (unsigned char*)&data->sq;
    value[3] = (unsigned char*)&data->vl;

}

int main(){

    Data data;
    //Teste    <- Insira aqui os valores que querem testar.
    data.id = 0x03;
    data.sq = 0x05;
    data.vl = 0xFFFF;

    unsigned char* value[4];

    serialize(&data, &value);

    // size
    printf("%02x-",  value[0][0]); 

    // Identificador
    printf("%02x-", value[1][0]); 
    printf("%02x-", value[1][1]); 
    printf("%02x-", value[1][2]); 
    printf("%02x-", value[1][3]); 

    //Sequenciador
    printf("%02x-", value[2][0]); 
    printf("%02x-", value[2][1]); 
    printf("%02x-", value[2][2]); 
    printf("%02x-", value[2][3]); 

    //Valor
    printf("%02x-", value[3][0]); 
    printf("%02x-", value[3][1]); 
    printf("%02x-", value[3][2]); 
    printf("%02x\n", value[3][3]);

    printf("Little Endian\n"); 

    return 0;

}