#include <stdio.h>
typedef struct Sensor
{
   int team;
   int humi;
   int valid;
} Sensor;
int is_valid(Sensor s);
int main(void)
{
    Sensor s;
    scanf("%d %d",&s.team,&s.humi);
    s.valid = is_valid(s);
    if(s.valid)
    {
        printf("TEMP=%d HUMI=%d\n",s.team,s.humi);
    }
    else
    {
        printf("ERROR: Out of range\n");
    }
    return 0;
}

int is_valid(Sensor s)
{
    if(s.humi>=0&&s.humi<=100&&s.team>=-20&&s.team<=50)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
