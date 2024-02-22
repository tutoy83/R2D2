/* 
 * File:   PWM.h
 * Author: TP_EO_6
 *
 * Created on 7 février 2024, 10:29
 */

#ifndef PWM_H
#define	PWM_H

#define MOTEUR_DROITE 0
#define MOTEUR_GAUCHE 1


void InitPWM(void);
/*void PWMSetSpeed(float vitesseEnPourcents, int numMoteur);*/
void PWMSetSpeedConsigne(float vitesseEnPourcents, int numMoteur);
void PWMUpdateSpeed(void);

#endif	/* PWM_H */

