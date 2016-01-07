#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>

#define PROP_KEY_LEANCLOUD_APP_ID @"leancloud-appid"
#define PROP_KEY_LEANCLOUD_APP_KEY @"leancloud-appkey"

@interface CDVLeanSocial:CDVPlugin


@property (nonatomic, strong) NSString *leancloudAppId;
@property (nonatomic, strong) NSString *leancloudAppKey;

- (void)share:(CDVInvokedUrlCommand *)command;

@end