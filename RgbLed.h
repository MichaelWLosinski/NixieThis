#ifndef RGBLED_H_
#define RGBLED_H_

/**
 * A Red Green and Blue Light Emitting Diode
 *
 * @Author Michael W. Losinski
 * @Created Mar 27, 2013
 */
class RgbLed
{
public:

	RgbLed(int r, int g, int b, char color[3], float brightness = 1);

	void setColor(char value[3]);
	void setBrightness(float value);

private:

	void Update(float brightness);

	int m_redPin;
	int m_greenPin;
	int m_bluePin;
	char m_color[3];
	float m_brightness;
};

#endif
