#include <stdio.h>
typedef struct Player
{
    char name[16];
    int score;
} Player;

void sort_players(struct Player p[],int num);


int main (void)
{
    int num = 0;
    int i = 0;
    scanf("%d",&num);
    i = num - 1;
    Player p[num];
    for(i;i>=0;i--)
    {
        scanf("%s %d",p[i].name,&p[i].score);
    }
    sort_players(p,num);
    return 0;
}

void sort_players(struct Player p[],int num)
{
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(p[i].score<p[j].score)
            {
                Player temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(int i=0;i<num;i++)
    {
        printf("%d %s %d\n",i+1,p[i].name,p[i].score);
    }
}
