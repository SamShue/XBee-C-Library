 /*
 * XbeeConfig.h
 *
 * Created: 7/11/2014 4:55:59 PM
 *  Author: Waron
 */ 


#ifndef XBEECONFIG_H_
#define XBEECONFIG_H_
#include "Xbee.h"

//#define XBEES2

#ifdef XBEES1
	//#define ID 1234
	//#define AP 1



#endif


#ifdef XBEES2
	//#define ID 1234



#endif





int XbeeSetup()
{
	#ifdef ID
		setPANID(1224);	// Set PAN ID
	#endif
	
	
	return 1;
}


#endif /* XBEECONFIG_H_ */
