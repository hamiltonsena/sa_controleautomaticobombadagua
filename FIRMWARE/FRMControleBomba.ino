int P_SNR =   2;
int P_SNC =   3;
int P_B1  =   8;
int P_A1  =   4;

void setup(){

  pinMode(P_SNR, INPUT);
  pinMode(P_SNC, INPUT);
  pinMode(P_B1,  OUTPUT);
  pinMode(P_A1,  OUTPUT);
  
  //inicializando
  digitalWrite(P_B1, LOW);
  digitalWrite(P_A1, LOW);

}

void loop(){

  if(digitalRead(P_SNR) == LOW && digitalRead(P_SNC) == HIGH){
  
    digitalWrite(P_B1, HIGH);
  
  }else{
  
     digitalWrite(P_B1, LOW);
  
  }
  
  
   if(digitalRead(P_SNR) == LOW && digitalRead(P_SNC) == LOW|| digitalRead(P_SNR) == HIGH && digitalRead(P_SNC) == LOW ){
  
    digitalWrite(P_A1, HIGH);
  
  }else{
  
     digitalWrite(P_A1, LOW);
  
  }


}
