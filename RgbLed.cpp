#include "RgbLed.h"

RgbLed::RgbLed(int red, int green, int blue, char color[3], float brightness)
: m_redPin(red),
  m_green(green),
  m_blue(blue),
  m_color(color),
  m_brightness(brightness)
{
	pinMode(m_redPin, OUTPUT);
	pinMode(m_greenPin, output);
	pinMode(m_bluePin, output);
}

void RgbLed::setColor(char value[3])
{
	m_color = value;
	Update();
}

void RgbLed::setBrightness(float value)
{
	m_brightness = value;
	Update();
}

void RgbLed::Update()
{
	analogWrite(m_redPin, (int) m_color[0] * m_brightness);
	analogWrite(m_greenPin, (int) m_color[1] * m_brightness);
	analogWrite(m_bluePin, (int) m_color[2] * m_brightness);
}

