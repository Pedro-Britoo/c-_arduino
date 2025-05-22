float nota1 ;
float nota2 ;
float notatotal;
void setup()
{
  
  Serial.begin(9600);
  Serial.println("Digite a nota do primeiro bimestre");
    while(!Serial.available());
    int nota1 = (Serial.parseFloat());
  Serial.println("Digite a sua segunda nota do segundo bimestre");
 	while(!Serial.available());
    int nota2 = (Serial.parseFloat());
  
  notatotal = nota1 + nota2;
    Serial.println(notatotal);
  
  if (notatotal < 60) {
    Serial.println("Reprovado");
  }
      else {
      Serial.println("Aprovado");
    }
    
}

void loop()
{
  

}