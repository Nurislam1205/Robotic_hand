#include <Servo.h>

Servo base;      // DOF1 — base
Servo shoulder;  // DOF2 — shoulder
Servo elbow;     // DOF3 — elbow
Servo wrist;     // DOF4 — wrist

// analog joystick
#define JY1_X A0
#define JY1_Y A1
#define JY2_X A2
#define JY2_Y A3

int mapServo(int v) {
    return map(v, 0, 1023, 500, 2500);
}

void setup() {
    base.attach(3);       // PWM pins
    shoulder.attach(5);
    elbow.attach(6);
    wrist.attach(9);

    pinMode(JY1_X, INPUT);
    pinMode(JY1_Y, INPUT);
    pinMode(JY2_X, INPUT);
    pinMode(JY2_Y, INPUT);
}

void loop() {
    // reading joysticks
    int vBase     = analogRead(JY1_X);
    int vShoulder = analogRead(JY1_Y);
    int vElbow    = analogRea
int limitUS(int x, int minUS, int maxUS) {
    if (x < minUS) return minUS;
    if (x > maxUS) return maxUS;
    return x;
}

//for angels
void loop() {
    int vBase     = mapServo(analogRead(JY1_X));
    int vShoulder = mapServo(analogRead(JY1_Y));
    int vElbow    = mapServo(analogRead(JY2_X));
    int vWrist    = mapServo(analogRead(JY2_Y));

    vBase     = limitUS(vBase,     600, 2400);
    vShoulder = limitUS(vShoulder, 700, 2200);
    vElbow    = limitUS(vElbow,    700, 2200);
    vWrist    = limitUS(vWrist,    650, 2300);

    base.writeMicroseconds(vBase);
    shoulder.writeMicroseconds(vShoulder);
    elbow.writeMicroseconds(vElbow);
    wrist.writeMicroseconds(vWrist);

    delay(5);
}
