//
//  MQTTClient.h
//  MQTTClient
//
//  Created by Christoph Krey on 13.01.14.
//  Copyright © 2013-2017 Christoph Krey. All rights reserved.
//

/**
 Include this file to use MQTTClient classes in your application
 
 @author Christoph Krey c@ckrey.de
 @see http://mqtt.org
 */

#import <Foundation/Foundation.h>

#import <YZHMQTTClient/MQTTSession.h>
#import <YZHMQTTClient/MQTTDecoder.h>
#import <YZHMQTTClient/MQTTSessionLegacy.h>
#import <YZHMQTTClient/MQTTProperties.h>
#import <YZHMQTTClient/MQTTMessage.h>
#import <YZHMQTTClient/MQTTTransport.h>
#import <YZHMQTTClient/MQTTCFSocketTransport.h>
#import <YZHMQTTClient/MQTTCoreDataPersistence.h>
#import <YZHMQTTClient/MQTTSSLSecurityPolicyTransport.h>
#import <YZHMQTTClient/MQTTLog.h>

#if __has_include(<MQTTClient/MQTTSessionManager.h>)
#import <YZHMQTTClient/MQTTSessionManager.h>
#endif

#if __has_include(<MQTTClient/MQTTWebsocketTransport.h>)
#import <YZHMQTTClient/MQTTWebsocketTransport.h>
#endif

//! Project version number for MQTTClient.
FOUNDATION_EXPORT double MQTTClientVersionNumber;

//! Project version string for MQTTClient&lt;.
FOUNDATION_EXPORT const unsigned char MQTTClientVersionString[];

