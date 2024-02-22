#ifndef CROBOT_H
#define CROBOT_H
typedef struct robotStateBITS {
union {
struct {
unsigned char taskEnCours;
float vitesseGaucheConsigne;
float vitesseGaucheCommandeCourante ;
float vitesseDroiteConsigne;
float vitesseDroiteCommandeCourante;
float distanceTelemetreDroit, distanceTelemetreCentre, distanceTelemetreGauche;
};
};
} ROBOT_STATE_BITS;
extern volatile ROBOT_STATE_BITS robotState;

#endif /* CROBOT_H */
