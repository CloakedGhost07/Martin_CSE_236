
// CSCE 236 HW4 Code
//
// Some developer decided it was best to obfuscate his code
// to keep his job safe.  Unfortunately, he died in a hang
// gliding accident (which he was doing instead of working!)
// So now it is your job to figure out how to run his code!

#include "Arduino.h"

#define i1iiii11i1iii1ii void startOne()
#define i1iiiii1i1iii1ii void startTwo()
#define i1ii1iiii1iii1i1 void startThree()
#define i1ii1iiii1iii1ii void startFour()
#define i1ii1iiii1iii111 void setMem(char i)
#define i1ii1iiii1i1i1i1 void runLoop()
#define i1iiiii1iii111ii 0x40000800
#define i1iii1i1iii1ii }
#define i1iiiii1iii1ii {
#define ii11iiii11ii11 if
#define ii11iiii11ii1i while
#define i111iiii11ii1i digitalRead
#define i1i1iiii11ii1i for
#define i1i1i1i1i1i1iii return
#define i1i1ii1ii11iii iii1iii1iii1ii1()
#define i1i1ii1iii1iii iii1iii1iii1ii1()
#define iii1ii1ii11iii iii1iii1iii1ii1()
#define i1i1iiiii11iii iii1iii1iii1ii1()
#define iiiii volatile int
#define iiiiii volatile uint32_t

iiiii i1ii1iii1iii = 0b1101;
 iiiii iiii1i1iii1ii = 0b100111;
 iiiii i1ii1i11ii1i1 = 0b0010101;
 iiiii i1i11i11ii1i1 = 0b1110111;
 iiiii i1i1ii1ii11ii = 0b1110111;
 iiiii ii1ii1i11ii1i1 = 0b01010101;
 iiiii ii11i11ii1i1 = 0b1110111;
 iiiii i1i1iiii11ii = 0b1110111;
 iiiii iiiii1iii1iii = 0b11101;
 iiiii iiii1i1ii1i1ii = 0b1011;
 iiiii i1ii1i1iii1ii = 0b1111;
 iiiii i1ii1i1iii11ii = 0b1111111;
 iiiii iiii11111iii11ii = 0b101;
 iiiii iii1iii1iii1ii1();
 i1iiiii1i1iii1ii i1iiiii1iii1ii;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? i1i1ii1iii1iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 == i1i1ii1ii11ii ? (ii1ii1i11ii1i1 = i1i1iiii11ii + iiii11111iii11ii): i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != iiiii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = (* (iiiii *) 0b01011);
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1iiii11ii = i1i1ii1ii11ii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii == iiiii1iii1iii ? iii1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 (*((iiiii *)0b11000001)) = 0;
 iiii1i1iii1ii == iiii1i1ii1i1ii ? iii1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii != iiii1i1iii1ii ? ii11i11ii1i1 = i1i11i11ii1i1 : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1ii1ii11ii != i1i1ii1ii11ii ? (i1i1ii1ii11iii) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1i1iiii11ii = (* (iiiii *) 0b001001);
 i1ii1i1iii1ii != i1ii1i1iii1ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i11i11ii1i1 ? i1i1iiii11ii = i1ii1i11ii1i1 : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii == i1ii1i1iii1ii ? i1i1iiiii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i1ii1ii11ii ? ii1ii1i11ii1i1 = iiii11111iii11ii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = i1i1iiii11ii + ii1ii1i11ii1i1;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? (ii1ii1i11ii1i1 = ii11i11ii1i1) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1iii1iii == i1ii1i1iii1ii ? iii1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii != iiii1i1ii1i1ii ? iiii1i1iii1ii = iiii1i1ii1i1ii : iiii1i1ii1i1ii = iiii1i1iii1ii;
 iiii1i1iii1ii != iiii1i1iii1ii ? ii11i11ii1i1 = i1i11i11ii1i1 : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1ii1ii11ii != i1i1ii1ii11ii ? (i1i1ii1ii11iii) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1i1iiii11ii = (* (iiiii *) 0b001001);
 i1ii1i1iii1ii != i1ii1i1iii1ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i11i11ii1i1 ? i1i1iiii11ii = i1ii1i11ii1i1 : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i1iii1ii == i1ii1i1iii11ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 == i1ii1i11ii1i1 ? i1i1ii1iii1iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? ii1ii1i11ii1i1 = i1i11i11ii1i1 : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 ii11i11ii1i1 = (i1i1ii1ii11ii % i1i11i11ii1i1);
 i1ii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1iii1i1iii1ii;
 i1ii1iiii1iii111 i1iiiii1iii1ii;
 i1i11i11ii1i1 == i1ii1i11ii1i1 ? i1i1ii1iii1iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? ii1ii1i11ii1i1 = i1i11i11ii1i1 : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 ii11i11ii1i1 = (i1i1ii1ii11ii % i1i11i11ii1i1);
 i1ii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1iiii11ii1i(iiiii ii = 0;
 ii < iiii1i1ii1i1ii;
 ii++)i1iiiii1iii1ii;
 (*(((iiiii*) i1iiiii1iii111ii) + (ii % iiii1i1ii1i1ii))) = 0;
 i1iii1i1iii1ii;
 delay(1000);
 Serial.begin(9600);
 Serial.println(0x40000800 + (i % iiii1i1ii1i1ii));
 (*(((iiiii*) i1iiiii1iii111ii) + (i % iiii1i1ii1i1ii))) = i;
 i1i11i11ii1i1 == i1ii1i11ii1i1 ? i1i1ii1iii1iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? ii1ii1i11ii1i1 = i1i11i11ii1i1 : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 ii11i11ii1i1 = (i1i1ii1ii11ii % i1i11i11ii1i1);
 i1ii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii != iiii1i1iii1ii ? ii11i11ii1i1 = i1i11i11ii1i1 : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1ii1ii11ii != i1i1ii1ii11ii ? (i1i1ii1ii11iii) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1i1iiii11ii = (* (iiiii *) 0b001001);
 i1ii1i1iii1ii != i1ii1i1iii1ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i11i11ii1i1 ? i1i1iiii11ii = i1ii1i11ii1i1 : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1iii1i1iii1ii;
 i1ii1iiii1iii1ii i1iiiii1iii1ii;
 iiii1i1iii1ii != iiii1i1iii1ii ? ii11i11ii1i1 = i1i11i11ii1i1 : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1ii1ii11ii != i1i1ii1ii11ii ? (i1i1ii1ii11iii) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1i1iiii11ii = (* (iiiii *) 0b001001);
 i1ii1i1iii1ii != i1ii1i1iii1ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i11i11ii1i1 ? i1i1iiii11ii = i1ii1i11ii1i1 : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? i1i1ii1iii1iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 == i1i1ii1ii11ii ? (ii1ii1i11ii1i1 = i1i1iiii11ii + iiii11111iii11ii): i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != iiiii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = (* (iiiii *) 0b01011);
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1iiii11ii = i1i1ii1ii11ii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii == iiiii1iii1iii ? iii1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1ii1i1iii1ii == i1ii1i1iii11ii ? i1i1ii1iii1iii : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? i1i1iiiii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i1ii1ii11ii ? ii1ii1i11ii1i1 = iiii11111iii11ii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = i1i1iiii11ii + ii1ii1i11ii1i1;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? (ii1ii1i11ii1i1 = ii11i11ii1i1) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1iii1iii == i1ii1i1iii1ii ? iii1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiiii1iii1iii != i1ii1iii1iii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i1iii1ii != i1ii1i1iii11ii ? (i1ii1i1iii1ii = i1ii1i1iii11ii) : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii != iiii1i1iii1ii ? ii11i11ii1i1 = i1i11i11ii1i1 : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1ii1ii11ii != i1i1ii1ii11ii ? (i1i1ii1ii11iii) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1i1iiii11ii = (* (iiiii *) 0b001001);
 i1ii1i1iii1ii != i1ii1i1iii1ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i11i11ii1i1 ? i1i1iiii11ii = i1ii1i11ii1i1 : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 == i1ii1i11ii1i1 ? i1i1ii1iii1iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? ii1ii1i11ii1i1 = i1i11i11ii1i1 : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 ii11i11ii1i1 = (i1i1ii1ii11ii % i1i11i11ii1i1);
 i1ii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii != iiii1i1ii1i1ii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1iii1i1iii1ii;
 i1iiii11i1iii1ii i1iiiii1iii1ii;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? i1i1ii1iii1iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 == i1i1ii1ii11ii ? (ii1ii1i11ii1i1 = i1i1iiii11ii + iiii11111iii11ii): i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != iiiii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = (* (iiiii *) 0b01011);
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1iiii11ii = i1i1ii1ii11ii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii == iiiii1iii1iii ? iii1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 iiii1i1iii1ii != iiii1i1ii1i1ii ? i1i1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i11i11ii1i1 == i1ii1i11ii1i1 ? i1i1ii1iii1iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? ii1ii1i11ii1i1 = i1i11i11ii1i1 : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 ii11i11ii1i1 = (i1i1ii1ii11ii % i1i11i11ii1i1);
 i1ii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1ii1i1iii1ii != i1ii1i1iii11ii ? i1i1ii1iii1iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? i1i1ii1iii1iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 == i1i1ii1ii11ii ? (ii1ii1i11ii1i1 = i1i1iiii11ii + iiii11111iii11ii): i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != iiiii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = (* (iiiii *) 0b01011);
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1iiii11ii = i1i1ii1ii11ii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii == iiiii1iii1iii ? iii1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1iii1i1iii1ii;
 iiiii iii1iii1iii1ii1()i1iiiii1iii1ii;
 ii11iiii11ii1i(iiii1i1ii1i1ii < i1ii1i1iii11ii) ii1ii1i11ii1i1++;
 i1i1i1i1i1i1iii iiii1i1ii1i1ii;
 i1iii1i1iii1ii;
 i1ii1iiii1i1i1i1 i1iiiii1iii1ii;
 i1i11i11ii1i1 == i1ii1i11ii1i1 ? i1i1ii1iii1iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? ii1ii1i11ii1i1 = i1i11i11ii1i1 : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 ii11i11ii1i1 = (i1i1ii1ii11ii % i1i11i11ii1i1);
 i1ii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? i1i1iiiii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i1ii1ii11ii ? ii1ii1i11ii1i1 = iiii11111iii11ii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = i1i1iiii11ii + ii1ii1i11ii1i1;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? (ii1ii1i11ii1i1 = ii11i11ii1i1) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1iii1iii == i1ii1i1iii1ii ? iii1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiiiii i = 111111111;
 ii11iiii11ii11(i111iiii11ii1i(iiii11111iii11ii) != 1)i1iiiii1iii1ii;
 i1i1iiii11ii1i(i = 1;
 i < 111111 << 1;
 i++)i1iiiii1iii1ii;
i1iii1i1iii1ii;
 i1iii1i1iii1ii;
 i1i1iiii11ii1i(i = 1;
 i < 111111;
 i++)i1iiiii1iii1ii;
i1iii1i1iii1ii;
 iiii1i1iii1ii != iiii1i1iii1ii ? ii11i11ii1i1 = i1i11i11ii1i1 : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1ii1ii11ii != i1i1ii1ii11ii ? (i1i1ii1ii11iii) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1i1iiii11ii = (* (iiiii *) 0b001001);
 i1ii1i1iii1ii != i1ii1i1iii1ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i11i11ii1i1 ? i1i1iiii11ii = i1ii1i11ii1i1 : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1iii1i1iii1ii;
 i1ii1iiii1iii1i1 i1iiiii1iii1ii;
 iiii1i1iii1ii == i1ii1i1iii1ii ? i1i1iiiii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i1ii1ii11ii ? ii1ii1i11ii1i1 = iiii11111iii11ii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = i1i1iiii11ii + ii1ii1i11ii1i1;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? (ii1ii1i11ii1i1 = ii11i11ii1i1) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1iii1iii == i1ii1i1iii1ii ? iii1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiiii1iii1iii == i1ii1iii1iii ? i1i1ii1iii1iii : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? i1i1iiiii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i1ii1ii11ii ? ii1ii1i11ii1i1 = iiii11111iii11ii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = i1i1iiii11ii + ii1ii1i11ii1i1;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? (ii1ii1i11ii1i1 = ii11i11ii1i1) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1iii1iii == i1ii1i1iii1ii ? iii1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii != iiii1i1iii1ii ? ii11i11ii1i1 = i1i11i11ii1i1 : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i1ii1ii11ii != i1i1ii1ii11ii ? (i1i1ii1ii11iii) : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1i1iiii11ii = (* (iiiii *) 0b001001);
 i1ii1i1iii1ii != i1ii1i1iii1ii ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1ii1i11ii1i1 == i1i11i11ii1i1 ? i1i1iiii11ii = i1ii1i11ii1i1 : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii == iiii1i1ii1i1ii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != i1ii1iii1iii ? iiiii1iii1iii = i1ii1iii1iii : iiii1i1ii1i1ii = i1ii1i1iii1ii;
 i1i11i11ii1i1 == i1ii1i11ii1i1 ? i1i1ii1iii1iii : i1i1iiii11ii = i1ii1i11ii1i1;
 iiii1i1iii1ii == i1ii1i1iii1ii ? ii1ii1i11ii1i1 = i1i11i11ii1i1 : ii11i11ii1i1 = iiii1i1iii1ii % i1ii1i11ii1i1;
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1ii1ii11iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 ii11i11ii1i1 = (i1i1ii1ii11ii % i1i11i11ii1i1);
 i1ii1iii1iii != i1ii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1ii1i1iii1ii == i1ii1i1iii11ii ? i1i1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1i11i11ii1i1 != i1i11i11ii1i1 ? i1i1ii1iii1iii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 i1i11i11ii1i1 == i1i1ii1ii11ii ? (ii1ii1i11ii1i1 = i1i1iiii11ii + iiii11111iii11ii): i1i1iiii11ii = i1ii1i11ii1i1;
 iiiii1iii1iii != iiiii1iii1iii ? i1i1iiiii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 ii11i11ii1i1 = (* (iiiii *) 0b01011);
 i1ii1i11ii1i1 != i1ii1i11ii1i1 ? i1i1iiii11ii = i1i1ii1ii11ii : ii1ii1i11ii1i1 = i1i1ii1ii11ii;
 iiii1i1iii1ii == iiiii1iii1iii ? iii1ii1ii11iii : i1i1iiii11ii = i1ii1i11ii1i1;
 i1iii1i1iii1ii;
