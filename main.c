#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
uint8_t buffer[500];
int zs = 0;
// 
void getCode(uint8_t num);
int main(int argv, char** args){
	FILE* fp = fopen(args[1], "r");
	if(fp == NULL){printf("File %s not found!\n",args[1]);exit(1);}
	fread(buffer,sizeof(buffer),1,fp);
  printf("===== 6502 Dissasembler =====\n");
  printf("Reading from file: %s\n",args[1]);
  for(int i = 0; i < sizeof(buffer); i++){
    getCode(buffer[i]);
    if(buffer[i] == 0x00)
        zs++;
    else
        zs = 0;
    if(zs > 2)
      break;
  }
  printf("\n");
}
void getCode(uint8_t num){
  // Check code
  switch(num){
    // LDA
    case 0xAD:
      printf("\n");
      printf("LDA ");
      break;
    case 0xA1:
      printf("\n");
      printf("LDA ");
      break;
    case 0xA5:
      printf("\n");
      printf("LDA ");
      break;
    case 0xA9:
      printf("\n");
      printf("LDA ");
      break;
    case 0xB1:
      printf("\n");
      printf("LDA ");
      break;
    case 0xB5:
      printf("\n");
      printf("LDA ");
      break;
    case 0xB9:
      printf("\n");
      printf("LDA ");
      break;
    case 0xBD:
      printf("\n");
      printf("LDA ");
      break;
    // LDX
    case 0xAE:
      printf("\n");
      printf("LDX ");
      break;
    case 0xA2:
      printf("\n");
      printf("LDX ");
      break;
    case 0xB6:
      printf("\n");
      printf("LDX ");
      break;
    case 0xBE:
      printf("\n");
      printf("LDX ");
      break;
    // LDY
    case 0xA0:
      printf("\n");
      printf("LDY ");
      break;
    case 0xA4:
      printf("\n");
      printf("LDY ");
      break;
    case 0xAC:
      printf("\n");
      printf("LDY ");
      break;
    case 0xB4:
      printf("\n");
      printf("LDY ");
      break;
    case 0xBC:
      printf("\n");
      printf("LDY ");
      break;
    // STA
    case 0x81:
      printf("\n");
      printf("STA ");
      break;
    case 0x85:
      printf("\n");
      printf("STA ");
      break;
    case 0x8D:
      printf("\n");
      printf("STA ");
      break;
    case 0x91:
      printf("\n");
      printf("STA ");
      break;
    case 0x95:
      printf("\n");
      printf("STA ");
      break;
    case 0x99:
      printf("\n");
      printf("STA ");
      break;
    case 0x9D:
      printf("\n");
      printf("STA ");
      break;
    // STX
    case 0x8E:
      printf("\n");
      printf("STX ");
      break;
    case 0x86:
      printf("\n");
      printf("STX ");
      break;
    case 0x96:
      printf("\n");
      printf("STX ");
      break;
    // All variations of AND
    case 0x21:
      printf("\n");
      printf("AND ");
      break;
    case 0x25:
      printf("\n");
      printf("AND ");
      break;
    case 0x29:
      printf("\n");
      printf("AND ");
      break;
    case 0x2d:
      printf("\n");
      printf("AND ");
      break;
    case 0x31:
      printf("\n");
      printf("AND ");
      break;
    case 0x35:
      printf("\n");
      printf("AND ");
      break;
    case 0x39:
      printf("\n");
      printf("AND ");
      break;
    case 0x3d:
      printf("\n");
      printf("AND ");
      break;
    // JMP
    case 0x6c:
      printf("\n");
      printf("JMP ");
      break;
    case 0x4c:
      printf("\n");
      printf("JMP ");
      break;
    // DEX
    case 0xca:
      printf("\n");
      printf("DEX ");
      break;
    default:
      printf("%u ",num);
  }
}