#include <stdio.h>

int main(void) {
  int heart_rate = 78;             // bpm
  int oxygen_saturation = 97;      // %
  float body_temperature = 36.7;   // Celsius
  float systolic_pressure = 120.0; // mmHg
  float diastolic_pressure = 80.0; // mmHg
  float weight_kg = 87.5;          // kg
  char shift = 'M';                // 'M'=Morning, 'A'=Afternoon, 'N'=Night
  char risk_classification = 'G';  // 'G'=Green, 'Y'=Yellow, 'R'=Red

  printf("=== Patient Vital Signs ===\n");
  printf("Heart Rate: %d bpm\n", heart_rate);
  printf("Body Temperature: %.1f ºC\n", body_temperature);
  printf("Blood Pressure: %.0f/%.0f mmHg\n", systolic_pressure,
         diastolic_pressure);
  printf("Shift: %c\n", shift);
  printf("Oxygen Saturation: %d%%\n", oxygen_saturation);
  printf("Weight: %.2f Kg\n", weight_kg);
  printf("Risk Classification: %c\n", risk_classification);

  return 0;
}
