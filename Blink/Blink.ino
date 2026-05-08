void setup(){
     pinMode(2, OUTPUT); // INS
     pinMode(3, OUTPUT); // DATA
     pinMode(4, OUTPUT); // IN
     digitalWrite(2, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
}
void loop(){
     digitalWrite(4, HIGH);
     delay(100);
     digitalWrite(4, LOW);
     delay(100);
     // 5 hz
}
// https://youtu.be/V0iv85BPVNQ?si=aAmPzUCngnql7NAi running the code on my PCPU NANO1 T4. Not PCPU nano1 t17, because PCPU nano1 t17 have only INS, DATA and IN for inputs too
