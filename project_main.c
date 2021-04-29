#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main()
{
int a1;
uint16_t t1;
int t2;
while(1)
{
a1=activity1();

if(a1==1)
{
t1=activity2();
t2=activity3(t1);
activity4(t2);

}

}
}