#include <stdio.h>
typedef struct Window
{
    int buffer[3];
    int count;
} Window;
void push_data(Window *win,int i);
int get_average(Window *win);

Window win={0,0};
int main(void)
{   
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        push_data(&win,i);
    }
    return 0;
}

void push_data(Window *win,int i)
{
    if(i>=3){i=i-3;}
    scanf("%d",&win->buffer[i]);
    printf("%d\n",get_average(win));
    win->count++;
}

int get_average(Window *win)
{
    int sum = 0;
    if(win->count<3)
    {
        for(int i=0;i<=win->count;i++)
        {
            sum += win->buffer[i];
        }
        return sum/(win->count+1);
    }
    else
    {
        for(int j=0;j<3;j++)
        {
            sum += win->buffer[j];
        }
        return sum/3;
    }
}
