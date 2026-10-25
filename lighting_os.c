#include <stdio.h>
#include <string.h>
int main(){
 char cmd[50];
 printf("\n⚡ LIGHTING OS v2.0 - SHELL READY ⚡\n");
 printf("Nellore -> Quy Nhon | FPT University\n");
 printf("Type 'help' for commands\n\n");
 while(1){
  printf("LightingOS-VN> ");
  scanf("%s", cmd);
  if(strcmp(cmd,"help")==0){
   printf("Commands: help, boot, info, vietnam, exit\n");
  } else if(strcmp(cmd,"boot")==0){
   printf("[OK] LIGHTING OS BOOTED 🇻🇳⚡\n");
  } else if(strcmp(cmd,"info")==0){
   printf("Founder: Surya\nCompany: LightingOS Technologies\nLocation: Quy Nhon, Vietnam\n");
  } else if(strcmp(cmd,"vietnam")==0){
   printf(">>> RUNNING IN VIETNAM - FPT Quy Nhon ACTIVE 🇻🇳\n");
  } else if(strcmp(cmd,"exit")==0){
   printf("Shutdown LightingOS...\n"); break;
  } else {
   printf("Unknown: %s (type help)\n", cmd);
  }
 }
 return 0;
}
