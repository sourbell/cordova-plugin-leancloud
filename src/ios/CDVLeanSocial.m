/********* CDVLeanPush.m Cordova Plugin Implementation *******/
#import <AVOSCloud/AVOSCloud.h>
#import "CDVLeanSocial.h"

@implementation CDVLeanSocial


- (void)share:(CDVInvokedUrlCommand*)command
{
    CDVPluginResult* pluginResult = nil;
    NSString* channel = [command.arguments objectAtIndex:0];

    NSLog(@"CDVLeanSocial share %@", channel);

    if (channel != nil && [channel length] > 0) {
        AVInstallation *currentInstallation = [AVInstallation currentInstallation];
        [currentInstallation addUniqueObject:channel forKey:@"channels"];
        [currentInstallation saveInBackground];
        pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK];
    } else {
        pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_ERROR];
    }

    [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
}


@end
