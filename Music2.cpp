#include<windows.h>
const int A1 = 131;  
const int A2 = 147;  
const int A3 = 165;  
const int A4 = 175;  
const int A5 = 196;  
const int A6 = 220;  
const int A7 = 247;   
const int B1 = 262;  
const int B2 = 296;  
const int B3 = 330;  
const int B4 = 349;  
const int B5 = 392;  
const int B6 = 440;  
const int B7 = 494;   
const int C1 = 523;  
const int C2 = 587;  
const int C3 = 659;  
const int C4 = 698;  
const int C5 = 784;  
const int C6 = 880;  
const int C7 = 988;  
const int D1 = 1047;  
const int D2 = 1175;  
const int D3 = 1319;  
const int D4 = 1397;  
const int D5 = 1568;  
const int D6 = 1760;  
const int D7 = 1976;  
const int t=500;
int main(){
	Beep(C5,t); Beep(C4,t/2); Beep(C3,t/4); Beep(C4,t*5/4); Beep(C3,t/2); Beep(C2,t/2);
	Beep(C2,t/2); Beep(C3,t/2); Beep(C2,t/2); Beep(C1,t/4); Beep(B5,t*5/4); Beep(B3,t/2); Beep(B4,t/2);
	Beep(B5,t*3/4); Beep(B5,t*3/4); Beep(B6,t/2); Beep(B5,t); Beep(C2,t/2); Beep(B7,t/2);
	Beep((C1+C2)/2,t*3/4); Beep((C1+C2)/2,t*3/4); Beep(C2,t/2); Beep(C3,t); Beep(C2,t/2); Beep(C3,t/2);
	Sleep(t/2); Beep(C5,t/2); Beep(C4,t/2); Beep(C3,t/4); Beep(C4,t*5/4); Beep(C3,t/2); Beep(C2,t/2);
	Beep(C2,t/2); Beep(C3,t/2); Beep(C2,t/2); Beep(C1,t/4); Beep(B5,t*5/4); Beep(B3,t/2); Beep(B4,t/2);
	Beep(B5,t/2); Beep(B6,t/2); Beep(B5,t/4); Beep((B4+B5)/2,t/2); Beep(B5,t*5/4); Beep(B5,t/2); Beep(C2,t/2); Beep(B7,t/2);
	Beep(C1,t*3/4); Beep(C1,t*3/4); Beep(B7,t/2); Beep(C1,t/2); Sleep(t/2); Beep(B2,t/2); Beep(B3,t/2);
	Beep(C5,t); Beep(C4,t/2); Beep(C3,t/4); Beep(C4,t*5/4); Beep(C3,t/2); Beep(C2,t/2);
	Beep(C2,t/2); Beep(C3,t/2); Beep(C2,t/2); Beep(C1,t/4); Beep(B5,t*5/4); Beep(B3,t/2); Beep(B4,t/2);
	Beep(B5,t*3/4); Beep(B5,t*3/4); Beep(B6,t/2); Beep(B5,t); Beep(C2,t/2); Beep(B7,t/2);
	Beep((C1+C2)/2,t*3/4); Beep((C1+C2)/2,t*3/4); Beep(C2,t/2); Beep(C3,t); Beep(C2,t/2); Beep(C3,t/2);
	Sleep(t/2); Beep(C5,t/2); Beep(C4,t/2); Beep(C3,t/4); Beep(C4,t*5/4); Beep(C3,t/2); Beep(C2,t/2);
	Beep(C2,t/2); Beep(C3,t/2); Beep(C2,t/2); Beep(C1,t/4); Beep(B5,t*5/4); Beep(B3,t/2); Beep(B4,t/2);
	Beep(B5,t/2); Beep(B6,t/2); Beep(B5,t/4); Beep((B4+B5)/2,t/2); Beep(B5,t*5/4); Beep(B5,t/2); Beep(C2,t/2); Beep(B7,t/2);
	Beep(C1,t*3/4); Beep(C1,t*3/4); Beep(B7,t/2); Beep(C1,t/2);
	return 0;
}
