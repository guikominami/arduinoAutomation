//Bluetooth
//5v no 5v
//gnd no gnd
//rx no tx do arduino
//tx no rx do arduino

String state;
int flag = 0;

int porta2 = 2;
int porta3 = 3;
int porta4 = 4;
int porta5 = 5;
int porta6 = 6;
int porta7 = 7;
int porta8 = 8;
int porta9 = 9;
int porta10 = 10;
int porta11 = 11;
int porta12 = 12;
int porta13 = 13;

void setup() { 

  Serial.begin(9600);

  pinMode(porta2, OUTPUT);  
  pinMode(porta3, OUTPUT);    
  pinMode(porta4, OUTPUT);
  pinMode(porta5, OUTPUT);  
  pinMode(porta6, OUTPUT);  
  pinMode(porta7, OUTPUT);
  pinMode(porta8, OUTPUT);
  pinMode(porta9, OUTPUT);
  pinMode(porta10, OUTPUT);  
  pinMode(porta11, OUTPUT);  
  pinMode(porta12, OUTPUT);      
  pinMode(porta13, OUTPUT);        
  
}

void loop() {

  if (Serial.available() > 0)
  {
    state = Serial.readString();
    Serial.println(state);
  }

  if (state == "2L")
  {    
    digitalWrite(porta2, HIGH);
    Serial.println("porta 2 ligada");
    state = "";
  }

  if (state == "2D")
  {    
    digitalWrite(porta2, LOW);
    Serial.println("porta 2 desligada");
    state = "";
  }

  if (state == "3L")
  {    
    digitalWrite(porta3, HIGH);
    Serial.println("porta 3 ligada");
    state = "";
  }

  if (state == "3D")
  {    
    digitalWrite(porta3, LOW);
    Serial.println("porta 3 desligada");
    state = "";
  }

  if (state == "4L")
  {    
    digitalWrite(porta4, HIGH);
    Serial.println("porta 4 ligada");
    state = "";
  }

  if (state == "4D")
  {    
    digitalWrite(porta4, LOW);
    Serial.println("porta 4 desligada");
    state = "";
  }  

  if (state == "5L")
  {    
    digitalWrite(porta5, HIGH);
    Serial.println("porta 5 ligada");
    state = "";
  }

  if (state == "5D")
  {    
    digitalWrite(porta5, LOW);
    Serial.println("porta 5 desligada");
    state = "";
  }

  if (state == "6L")
  {    
    digitalWrite(porta6, HIGH);
    Serial.println("porta 6 ligada");
    state = "";
  }

  if (state == "6D")
  {    
    digitalWrite(porta6, LOW);
    Serial.println("porta 6 desligada");
    state = "";
  }

  if (state == "7L")
  {    
    digitalWrite(porta7, HIGH);
    Serial.println("porta 7 ligada");
    state = "";
  }

  if (state == "7D")
  {    
    digitalWrite(porta7, LOW);
    Serial.println("porta 7 desligada");
    state = "";
  }  

  if (state == "8L")
  {    
    digitalWrite(porta8, HIGH);
    Serial.println("porta 8 ligada");
    state = "";
  }

  if (state == "8D")
  {    
    digitalWrite(porta8, LOW);
    Serial.println("porta 8 desligada");
    state = "";
  }  

  if (state == "9L")
  {    
    digitalWrite(porta9, HIGH);
    Serial.println("porta 9 ligada");
    state = "";
  }

  if (state == "9D")
  {    
    digitalWrite(porta9, LOW);
    Serial.println("porta 9 desligada");
    state = "";
  }

  if (state == "10L")
  {    
    digitalWrite(porta10, HIGH);
    Serial.println("porta 10 ligada");
    state = "";
  }

  if (state == "10D")
  {    
    digitalWrite(porta10, LOW);
    Serial.println("porta 10 desligada");
    state = "";
  }

  if (state == "11L")
  {    
    digitalWrite(porta11, HIGH);
    Serial.println("porta 11 ligada");
    state = "";
  }

  if (state == "11D")
  {    
    digitalWrite(porta11, LOW);
    Serial.println("porta 11 desligada");
    state = "";
  }

  if (state == "12L")
  {    
    digitalWrite(porta12, HIGH);
    Serial.println("porta 12 ligada");
    state = "";
  }

  if (state == "12D")
  {    
    digitalWrite(porta12, LOW);
    Serial.println("porta 12 desligada");
    state = "";
  }

  if (state == "13L")
  {    
    digitalWrite(porta13, HIGH);
    Serial.println("porta 13 ligada");
    state = "";
  }

  if (state == "13D")
  {    
    digitalWrite(porta13, LOW);
    Serial.println("porta 13 desligada");
    state = "";
  }  
  
}
