#include<Wire.h>
int Array[4]={224,3,56,234};
char add[4]={0x00,0x01,0x02,0x03};
void WriteEEP(char Addr,char Dat){
  Wire.beginTransmission(0x50);
  Wire.write(Addr);
  Wire.write(Dat);
  Wire.endTransmission();
}
void setup() {
  Wire.begin();
}
void loop() {
  for (int i=0;i<4;i++)
    WriteEEP(add[i],Array[i]);
}
