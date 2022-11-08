#include "PushButton.h"

PushButton::PushButton(uint8_t pin, bool blocking)
{
    _pin = pin;
    _blocking = blocking;
}

bool PushButton::isPressed()
{
    if (blocking)
    {
        bool sensorVal = digitalRead(_pin) ? true : false;
        while (sensorVal)
        {
            sensorVal = digitalRead(_pin) ? true : false;
        }
        return true;
    }
    else
    {
        bool sensorVal = digitalRead(_pin) ? true : false;
        if (sensorVal && !_lastValue)
        {
            _lastValue = true;
            return true;
        }
        if (!sensorVal && _lastValue)
        {
            _lastValue = false;
        }
        return false;
    }
}