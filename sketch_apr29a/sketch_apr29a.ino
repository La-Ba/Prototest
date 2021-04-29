int messwert=0; //Unter der Variablen "messwert" wird später der Messwert des Sensors gespeichert.
int LED=9; //LED wird Pin 9 bezeichnet , wo die LED angeschlossen ist.


void setup()
{
Serial.begin(9600); //Serieller Port
pinMode (9,OUTPUT); //Im Setup wird der Pin9 als Ausgang definiert.
}

void loop()
{

 messwert=analogRead(A0);
 Serial.print("CO2-Messwert:"); //Ausgabe am seriellen Monitor
 Serial.println(messwert);
 delay(500);

  if (messwert <100 ) //Hier beginnt die Abfrage: Wenn der Sensorwert kleiner als "200" ist, dann...
    { 
      digitalWrite(LED, HIGH); // soll die LED leuchten/warnen
    }
  else
    {
      digitalWrite(LED, LOW); //soll die LED nicht leuchten
    }
}
