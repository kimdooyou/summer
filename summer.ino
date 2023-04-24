const int BUZZER = 12;
const int button[8] = {2, 3, 4, 5, 6, 7, 8, 9 };

const int note[8] = { 392, 494, 523, 587, 659, 698, 784, 880 };

void setup() {
for(int n=0;n<=7;n++) {
        pinMode(button[n], INPUT);
 }
}

void loop() { 
  if(digitalRead(button[0]) == HIGH) {
           tone(BUZZER, note[0]);
  } else if(digitalRead(button[1]) == HIGH) {
         tone(BUZZER, note[1]);
  }else if(digitalRead(button[2]) == HIGH) {
         tone(BUZZER, note[2]);
  }else if(digitalRead(button[3]) == HIGH) {
         tone(BUZZER, note[3]);
  }else if(digitalRead(button[4]) == HIGH) {
         tone(BUZZER, note[4]);
  }else if(digitalRead(button[5]) == HIGH) {
         tone(BUZZER, note[5]);
  }else if(digitalRead(button[6]) == HIGH) {
         tone(BUZZER, note[6]);
  }else if(digitalRead(button[7]) == HIGH) {
         tone(BUZZER, note[7]);
  }else {
        noTone(BUZZER);
    } 
   } 
