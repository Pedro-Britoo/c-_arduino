void setup() {
  Serial.begin(9600);
  
  randomSeed(analogRead(A0)); 


  float sprint1 = random(0, 101) / 10.0;
  float sprint2 = random(0, 101) / 10.0;
  float sprint3 = random(0, 101) / 10.0;
  float sprint4 = random(0, 101) / 10.0;


  int faltas = random(0, 26);


  float mediaSprints = (sprint1 + sprint2 + sprint3 + sprint4) / 4.0;
  float notaSprints = mediaSprints * 0.75;

  float participacao = ((25 - faltas) / 25.0) * 10.0;
  float notaParticipacao = participacao * 0.25;


  float mediaFinal = notaSprints + notaParticipacao;


  Serial.println(" RESULTADO ");
  Serial.print("sprint 1 "); Serial.println(sprint1, 1);
  Serial.print("Ssprint 2: "); Serial.println(sprint2, 1);
  Serial.print("seprint 3: "); Serial.println(sprint3, 1);
  Serial.print("print 4: "); Serial.println(sprint4, 1);
  Serial.print("media das sprint: "); Serial.println(mediaSprints, 2);
  Serial.print("faltas: "); Serial.println(faltas);
  Serial.print("nota de Participacao: "); Serial.println(participacao, 2);
  Serial.println("----------------------");
  Serial.print("meedia final geral: "); Serial.println(mediaFinal, 2);
}

void loop() {

}
