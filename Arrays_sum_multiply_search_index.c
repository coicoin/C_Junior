#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

system("chcp 1251");

int x[100];
int n,a,b,imax,imin;
system("chcp 1251");
printf("Ââåäèòå ðàçìåðíîñòü ìàññèâà ");
scanf("%d",&n);
int s=0, i;
for(i=0;i<n;i++) {scanf("%d",&x[i]);
 				if(x[i]==0) s++;}
printf("Çàäàíèå À) Êîëè÷åñòâî íóëåâûõ ýëåìåíòîâ ìàññèâà: %d\n",s);

int f=0;
printf("Ââåäèòå çíà÷åíèÿ a è b: ");
scanf("%d%d",&a,&b);
for(i=0;i<n;i++) {
if (x[i]<a || x[i]>b) {imin=i; imax=i;
				   	   f=1;}}
if (f==1) {
 	for(i=0;i<n;i++){
	if(x[i]<a || x[i]>b){
				      if(x[i]<x[imin]) imin=i;
	 			      if(x[i]>x[imax]) imax=i;}}
 printf("Çàäàíèå Á) Ñóììà èíäåêñîâ = %d\n", imin+imax);}
 else printf("Çàäàíèå Á) íå ìîæåò áûòü âûïîëíåíî.\n");

int k, l=1, p=0;
printf("Ââåäèòå çíà÷åíèå: \n");
scanf("%d",&k);

for(i=0; i<n; i++){
		if (x[i]==k){
		p++;
		l *= x[i];}}
		if (p>0) printf("Çàäàíèå Â) Ïðîèçâåäåíèå ýëåìåíòîâ ìàññèâà = %d\n",l);
		else printf("Çàäàíèå Â) íå ìîæåò áûòü âûïîëíåíî.\n");

system("pause");
return 0;}
