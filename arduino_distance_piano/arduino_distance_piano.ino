#define C4 262 // 도
#define D4 294 // 레
#define E4 330 // 미
#define F4 349 // 파
#define G4 392 // 솔
#define A4 440 // 라
#define B4 494 // 시
#define C5 523 // 도

#define ECHO 12
#define TRIG 13
#define BUZZER 5

long duration;
double distance;

void setup()
{
    pinMode(ECHO, INPUT);
    pinMode(TRIG, OUTPUT);
    pinMode(BUZZER, OUTPUT);
}

void loop()
{
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);

    duration = pulseIn(ECHO, HIGH);
    distance = duration * 17.0 / 1000.0;

    if (distance >= 0.2 && distance < 3.1)
    {
        tone(BUZZER, C4);
    }
    else if (distance < 3.3)
        ;
    else if (distance < 6.2)
    {
        tone(BUZZER, D4);
    }
    else if (distance < 6.5)
        ;
    else if (distance < 9.4)
    {
        tone(BUZZER, E4);
    }
    else if (distance < 9.7)
        ;
    else if (distance < 12.6)
    {
        tone(BUZZER, F4);
    }
    else if (distance < 12.8)
        ;
    else if (distance < 15.7)
    {
        tone(BUZZER, G4);
    }
    else if (distance < 16.0)
        ;
    else if (distance < 18.9)
    {
        tone(BUZZER, A4);
    }
    else if (distance < 19.2)
        ;
    else if (distance < 22.0)
    {
        tone(BUZZER, B4);
    }
    else if (distance < 22.3)
        ;
    else if (distance < 25.3)
    {
        tone(BUZZER, C5);
    }
    else
    {
        noTone(BUZZER);
    }
}