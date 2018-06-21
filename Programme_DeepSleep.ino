

unsigned long temps;
float sec;
int tim=1; // temps entre chaque reset = 1 min
void setup(){
  Serial.begin(9600);
  Serial.println("5cara temps :"); 
  temps = millis(); //la variable temps va prendre le nombre de millisecondes depuis que la carte est allumée
  sec = temps/1000;
  Serial.println(sec);  // On affiche le temps qu'il a fallu à la carte avant d'effectuer le reset
}
void loop(){   //prints time since program started
  ESP.deepSleep((tim *60)*1000000L); // Le module passe en mode deepsleep et se reveillera toutes les minutes
}
