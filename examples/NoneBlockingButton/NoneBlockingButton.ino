#include <PushButton.h>

#define BUTTON_PIN 14

PushButton pushButton(BUTTON_PIN, false);

void setup()
{
    Serial.begin(9600);
    while (!Serial)
        ; // time to get serial running
    Serial.println("PushButton test");
}

void loop()
{
    if (pushButton.isPressed())
    {
        Serial.printf("The button was pressed.");
    }
}
