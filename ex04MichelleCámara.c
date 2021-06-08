
#include <stdio.h>

int main () {
	float Hector, Julian, Dante, total, InvH, InvJ, InvD, X;
	printf("Inversión de Hector");
	scanf("%f", &Hector);
	printf("Inversión de Julian");
	scanf("%f", &Julian);
	printf("Inversión de Dante");
	scanf("%f", &Dante);


 total= Hector + Julian + Dante;

 Hector= (Hector/total)*100;
 Julian= (Julian/total)*100;
 Dante= (Dante/total)*100;

 printf("Total invertido es %0.2f\n", total);
 printf("Hector invirtió %0.2f\n", Hector);
 printf("Julian invirtió %0.2f\n", Julian);
 printf("Dante invirtió %0.2f\n", Dante);

 return 0;

}