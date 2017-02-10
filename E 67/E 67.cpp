#include"Punct.h"



int main()
{
	Punct p1(-6,0);
	Punct p2(3);
	Punct p3(3,9);
	Punct p4;

	p1.Afiseaza();
	p2.Afiseaza();
	p3.Afiseaza();
	p4.Afiseaza();

	double d1,d2,d3;

	d1=p1.DistantaPanaLa(p2);
	d2=p1.DistantaPanaLa(p3);
	d3=p2.DistantaPanaLa(p3);

	printf("Distanta P1-P2 este: %g\n",d1);
	printf("Distanta P1-P3 este: %g\n",d2);
	printf("Distanta P2-P3 este: %g\n",d3);

	if((d1==d2)&&(d1==d3))
	{
		printf("Triunghiul este echilateral!\n");
	}
	else{
		if((d1==d2)||(d1==d3)||(d2==d3))
		{
			printf("Triunghiul este isoscel!\n");
		}
		else{
			printf("Triunghiul este oarecare!\n");
		}
	}

	double panta_1_2=p1.Panta(p2);
	double panta_3_4=p3.Panta(p4);

	printf("Panta dreptei de P1-P2 este: %f\n",panta_1_2);
	printf("Panta dreptei de P3-P4 este: %f\n",panta_3_4);

	if((panta_1_2*panta_3_4)==-1)
	{
		printf("Dreptele sunt perpendiculare");
	}
	else
	{
		if(panta_1_2==panta_3_4)
		{
			printf("\nDreptele sunt paralele\n");
		}
		else
		{
			printf("Dreptele sunt doar secante!\n");
		}
	}

	p4=p2+p3;
	p4.Afiseaza();
	getchar();
	return 0;
}

