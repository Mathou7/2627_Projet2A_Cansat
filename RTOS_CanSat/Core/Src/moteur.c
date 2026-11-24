#include "main.h"
#include "FreeRTOS.h"
#include "timers.h"
#include "app_config.h"
#include "moteur.h"

extern TIM_HandleTypeDef htim2;

static TimerHandle_t tEjection;

static void Ejection_Callback(TimerHandle_t xTimer)
{
    (void)xTimer;

    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, SERVO_LIBERE_US);
}

void Moteur_Init(void)
{
    // Position verrouillée avant de démarrer la PWM
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, SERVO_VERROU_US);

    // Démarre la PWM
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);

    // Crée le timer one-shot
    tEjection = xTimerCreate("ejection",
                             pdMS_TO_TICKS(DELAI_EJECTION_MS),
                             pdFALSE,
                             NULL,
                             Ejection_Callback);

    // Vérifie la création
    configASSERT(tEjection != NULL);

    // Démarre le compte à rebours
    xTimerStart(tEjection, 0);
}
