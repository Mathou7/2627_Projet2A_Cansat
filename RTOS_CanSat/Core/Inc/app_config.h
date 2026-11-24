#ifndef APP_CONFIG_H
#define APP_CONFIG_H

//Servo d'éjection (TIM2_CH1, PA0)
// TIM2 (PSC = 15 -> tick de 1 µs à 16 MHz , ARR = 19999 -> période 20 ms)
// Si l'horloge système change, recalculer PSC.
#define SERVO_VERROU_US      1000U    // position verrouillée
#define SERVO_LIBERE_US      2000U    // position libérée
#define DELAI_EJECTION_MS    30000U   // délai entre la mise sous tension et l'éjection

#endif
