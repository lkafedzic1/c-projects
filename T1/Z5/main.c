#include <stdio.h>

int main() {
	float VT,MT,Cm,Cv,Um,Uv,UP,NI;
	printf("Unesite potrosnju elektricne energije ");
	scanf("%f,%f",&VT,&MT);
	printf("Unesite cijenu za malu i veliku tarifu ");
	scanf("%f,%f",&Cm,&Cv);
	UP=VT+MT;
	Um=MT/UP*100;
	Uv=VT/UP*100;
	NI=MT*Cm+VT*Cv;
	printf("Ukupna potrosnja je %.2f kWh\n",UP);
	printf("Udio male tarife u ukupnoj potrosnji je %.f%%\n",Um);
	printf("Udio velike tarife u ukupnoj potrosnji je %.f%%\n",Uv);
	printf("Iznos racuna je %.2f KM",NI);
	return 0;
}
