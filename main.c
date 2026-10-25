#include <stdio.h>
#include <stdlib.h>
int main(){
 int c; char name[30]; char cmd[200];
 while(1){
  printf("\n=== LIGHTING OS v3.1 ===\n1.Show Apps\n2.Add Option\n3.Vietnam\n4.Exit\nChoice: ");
  scanf("%d",&c);
  if(c==1){ printf("\nYour Apps:\n"); system("ls apps/"); }
  else if(c==2){ printf("Name: "); scanf("%s",name); sprintf(cmd,"echo ok > apps/%s.txt",name); system(cmd); printf("ADDED: %s\n",name); }
  else if(c==3) printf("\nVIETNAM ACTIVE 🇻🇳\n");
  else if(c==4) break;
 }
 return 0;
}
