#include "Arduino.h"

/*!
 *  @brief
 */
class PushButton
{
public:
    PushButton(uint8_t pin, bool blocking);
    bool isPressed();

private:
    uint8_t _pin;
    bool _blocking;
    bool _lastValue;
};