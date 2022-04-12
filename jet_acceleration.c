#include <stdio.h>

int main(void) 
{
  int spd, dist;
  float accel, time, spd_ms;
  
  scanf("%d %d", &spd, &dist);
  printf("Takeoff speed is %d km/h and distance to takeoff is %d m\n", spd, dist);
  
  /*Calculate speed in meters per second, time, and acceleration*/
  spd_ms = spd / 3.6;
  time = 2 * dist / spd_ms;
  accel = (spd_ms * spd_ms) / (2 * dist);
  
  printf("The jet would need to accelerate at %.2lf m/s^2 for %.2lf seconds\n", accel, time);
  
return 0;
}