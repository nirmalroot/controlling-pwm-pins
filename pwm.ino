void setup() {
  
}

void loop() {
for (int a=0;a<255;a++){
analogWrite(2,a);
delay (100);
}

for (int a=255;a>0;a--)
analogWrite(2,a);
delay (100);
}
