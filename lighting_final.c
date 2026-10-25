#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
 char input[50];
 while(1){
  printf("\n╔════════════════════╗\n");
  printf("║ LIGHTING OS v4.0  ║\n");
  printf("╠════════════════════╣\n");
  printf("║ 1.Show Apps       ║\n");
  printf("║ 2.Add New App     ║\n");
  printf("║ 3.Vietnam Server  ║\n");
  printf("║ 4.Exit            ║\n");
  printf("╚════════════════════╝\n");
  printf("Choice: ");
  fgets(input,50,stdin);
  int c = atoi(input);
  if(c==1){ printf("\n-- YOUR ADDED OPTIONS --\n"); system("ls -1 apps/ | sed 's/.txt//'"); printf("------------------------\n"); }
  else if(c==2){ char name[30]; printf("App name to add: "); fgets(name,30,stdin); name[strcspn(name,"\n")]=0; if(strlen(name)>0){ char cmd[200]; sprintf(cmd,"echo 'Lighting App: %s' > apps/%s.txt",name,name); system(cmd); printf("✅ ADDED: %s is now an option! Press 1 to see.\n",name);} }
  else if(c==3) printf("\n🇻🇳 VIETNAM SERVER RUNNING\nQuy Nhon AI Campus\nPlatform: ACTIVE\n");
  else if(c==4){ printf("\nLighting OS Shutdown... Bye Surya!\n"); break; }
  else printf("Enter 1-4 only.\n");
 }
 return 0;
}
