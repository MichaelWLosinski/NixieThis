#ifndef NIXIETUBE_H_
#define NIXIETUBE_H_

#include "Arduino.h"

/**
 * Represents the capabilities of a nixie tube
 *
 * @Author Michael W. Losinski
 * @Created Mar 27, 2013
 * @invar 0 <= m_value && m_value <= 1
 * @invar 0 <= m_brightness <= 1 
 */
class NixieTube
{
public:

	/**
	 * @param number: the initial number to be shown on the nixie tube
	 * @param brightness: the percent of brightness for the nixie tube
         * @pre (0 <= value && value <= 9)
         * @post (m_value = value);
	 */
	NixieTube(int number, float value);

	/**
	 * Sets the nixie tubes digit.
	 * @param 0 <= value <= 9
         * @pre 0 <= value && value <= 1
	 */
	virtual void setNumber(int value);

	/**
	 * Sets the brightness of the tube
	 * @param 0 <= value <= 1
         * @post m_brightness = value
	 */
	virtual void setBrightness(float value);

protected:

	int m_number;
	float m_brightness;
};

#endif
