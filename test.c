#include "a57.h"

#include <util/delay.h>


///////////////////////////////////////////////////////////////////////////////////////////////////
int main(void) //самая главная
{
DisplayInit();

while(1)
	{
	DrawString(1,1,"TEST 280914");
	DrawString(2,1,"  PCF8812");
	DrawString(3,1,"* Siemens *");
	DrawString(4,1,"------------");
	DrawString(5,1,"АаБбВвAaBbCc");
	DrawString(6,1,"------------");
	DrawString(7,1,"1234567890()");
	DrawString(8,1,"#$&<>{}?;:~/");

	_delay_ms(100);
	}
}
