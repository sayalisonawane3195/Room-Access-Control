int laser1 = 2;
int laser2 = 4;

int buzzer = 5;

int LDR1 = 0;
int LDR2 = 0;

int people = 6;
int _time = 0;

int count = 0;
int prevC = 0;
int max_time = 10*1000; // 10s

int i = 0;
// the setup routine runs once when you press reset:
void setup() {
  pinMode(laser1, OUTPUT);
  pinMode(laser2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  digitalWrite(laser1, HIGH);
  digitalWrite(laser2, HIGH);
}

// the loop routine runs over and over again forever:
void loop() {

  while(LDR1<200 && LDR2<200 && _time<max_time){
    if( count > people){
      delay(1);
      _time++;
      if(_time%1000 == 0){
      //Serial.print("_time: ");
      //Serial.println(_time);
      }
    }
    if(analogRead(A1)<250){
      LDR1 = analogRead(A0);
    }
    if(LDR1 < 250){
      LDR2 = analogRead(A1);
    }
  }

  
  if(LDR2>250){
    if(i==0){i++;} // avoid false reading on reset
    else{count++;}
  }
  else if(LDR1>250){
    if (count>0){
      count--;
    }
  }

  if(count != prevC){
  Serial.print("LDR1: ");
  Serial.print(LDR1);
  Serial.print("; LDR2: ");
  Serial.print(LDR2);
  Serial.print("; count: ");
  Serial.println(count);
  prevC = count;
  }
       
  if((count > people) && (count <= (people + 3)) && (_time < max_time) ){
    analogWrite(buzzer, 10);
  }
  else if((count > (people + 3)) || (_time >= max_time)){
    //Serial.print("_time: ");
    //Serial.println(_time);
    analogWrite(buzzer, 100);
    _time = 0;
  }
  else if(count <= 6){
    analogWrite(buzzer, 0);
    _time = 0;
  }
  // print out the value you read:


  delay(2000);        // delay in between reads for stability

  LDR1 = 0;
  LDR2 = 0;
}
