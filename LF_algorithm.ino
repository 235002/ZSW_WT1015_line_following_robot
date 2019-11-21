//#define sensor1 A0
//#define LED 13
//
//
//
//int minWhite1()
//{
//  int min = 1023;
//
//  while (millis() < 1000)
//  {
//    if (min > analogRead(4))
//    {
//      min = analogRead(4);
//    }
//    else if ( min > analogRead(2))
//    {
//      min = analogRead(2);
//    }
//    else if (min > analogRead(3))
//    {
//      min = analogRead(3);
//    }
//    else if (min > analogRead(5))
//    {
//      min = analogRead(5);
//    }
//  }
//  return min;
//}
//
//int maxWhite1()
//{
//  int max = 0;
//
//  while (millis() < 1000)
//  {
//    if (max < analogRead(4))
//    {
//      max = analogRead(4);
//    }
//    else if (max < analogRead(2))
//    {
//      max = analogRead(2);
//    }
//    else if (max < analogRead(3))
//    {
//      max = analogRead(2);
//    }
//    else if (max < analogRead(5))
//    {
//      max = analogRead(5);
//    }
//  }
//  return max;
//}
//
//int maxBlack1()
//{
//  int max = 0;
//
//  while (millis() < 1000)
//  {
//    if (max < analogRead(1))
//    {
//      max = analogRead(1);
//    }
//  }
//    return max;
//}
//
//int minBlack1()
//{
//  int min = 0;
//
//  while (millis() < 1000)
//  {
//    if (min > analogRead(1))
//    {
//      min = analogRead(1);
//    }
//  }
//    return min;
//}
///*
// * WHITE
//MIN: 51
//MAX: 94
//Black
//MIN: 16
//MAX: 42
// */
//
//
//
// //STALE !!!!
// int minWhite = minWhite1();
//int maxWhite = maxWhite1();
//int minBlack = minBlack1();
//int maxBlack = maxBlack1();
//int srodek = maxBlack < minWhite ? abs(maxBlack - minWhite) / 2 + maxBlack : abs(maxBlack - minWhite) / 2 + minWhite;
//int lastSensor = 1;
//
//bool lineColor(int sensorNumber)
// {
//  int value = analogRead(sensorNumber);
//  if (sensorNumber < srodek)
//  {
//    //jest czarny
//    return true;
//  }
//  else
//  {
//    //jest białyd
//    return false;
//  }
//}
//
//void prosto()
//{
//  
//  digitalWrite(13,HIGH);
//  digitalWrite(9,HIGH);
//  digitalWrite(10,HIGH);
//  delay(1000);
//  //delay zeby nie jechal za szybko
//  lastSensor = 1;
//}
//
//void skretWPrawo()
//{
//  digitalWrite(9,HIGH);
//  digitalWrite(10,LOW);
//  //delay zeby nie skrecal za mocno
//  lastSensor = 3;
//}
//
//void skretWLewo()
//{
//  digitalWrite(9,LOW);
//  digitalWrite(10,HIGH);
//  //delay
//  lastSensor = 2;
//}
//
//void skretWPrawoMocno()
//{
//  //mniejszy delay niz w poprzedniej
//  digitalWrite(9,HIGH);
//  digitalWrite(10,LOW);
//  //delay zeby nie skrecal za mocno
//  lastSensor  = 5;
//}
//
//void skretWLewoMocno()
//{
//  digitalWrite(9,LOW);
//  digitalWrite(10,HIGH);
//  //delay
//  lastSensor = 4;
//}
//
//void prawo90()
//{
//  digitalWrite(9,HIGH);
//  digitalWrite(10,LOW);
//  lastSensor = 5;
//}
//
//
//void lewo90()
//{
//  digitalWrite(9,LOW);
//  digitalWrite(10,HIGH);
//  lastSensor = 4;
//}
//
//void skrzyzowanie()
//{
//  digitalWrite(9,HIGH);
//  digitalWrite(10,HIGH);
//  //delay(3000)
//}
//
//void szukanieLewo()
//{
//  digitalWrite(9,HIGH);
//  digitalWrite(10,LOW);
//  //delay zeby szukal trasy ale sie nie obracal w miejscu
//}
//
//void szukaniePrawo()
//{
//  digitalWrite(9,LOW);
//  digitalWrite(10,HIGH);
//  //delay zeby szukal trasy ale sie nie obracal w miejscu
//}
//
//void jedzDoMety()
//{ if ((lineColor(1) && lineColor(2)) || lineColor(2))
//  {
//    skretWLewo();
//  }
//  else if ((lineColor(1) && lineColor(3)) || lineColor(3))
//  {
//    skretWPrawo();
//  }
//  else if (lineColor(1))
//  {
//    prosto();
//  }
//  else if ((lineColor(2) && lineColor(4)) || lineColor(4))
//    {
//      skretWLewoMocno();
//    }
//  else if((lineColor(3) && lineColor(5)) || lineColor(5))
//  {
//    skretWPrawoMocno();
//  }
//  else if ((lineColor(1) && lineColor(2) && lineColor(3)) || (lineColor(4) && lineColor(5)))
//  {
//    skrzyzowanie();
//  }
//  else if (!lineColor(1) && !lineColor(2) && !lineColor(3) && !lineColor(4) && !lineColor(5))
//  {
//    if (lastSensor == 4 || lastSensor == 2)
//    {
//      szukanieLewo();
//    }
//    else if (lastSensor != 1)
//    {
//      szukaniePrawo();
//    }
//  }
//  else if (lineColor(1) && lineColor(2) && lineColor(4))
//  {
//    lewo90();
//  }
//  else if (lineColor(1) && lineColor(3) && lineColor(5))
//  {
//    prawo90();
//  }
//  else
//  {
//    prosto();
//  }
//}
// 
//void setup() {
//
//  
//  pinMode(9, INPUT);
//  pinMode(10, INPUT);
//  
//  digitalWrite(13,HIGH);
//  Serial.begin(9600);
//}
//
//
//void loop()
//{
//  Serial.println("DADSADDSA");
////  jedzDoMety();
//  delay(1);
//}
void setup() {

  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  
  digitalWrite(13,HIGH);


  
}


void loop()
{
  Serial.println("DADSADDSA");
  Serial.println("ASDASDASD");
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
//  jedzDoMety();
  delay(1);
}
