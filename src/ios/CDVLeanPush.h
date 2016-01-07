#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>

#define PROP_KEY_LEANCLOUD_APP_ID @"leancloud-appid"
#define PROP_KEY_LEANCLOUD_APP_KEY @"leancloud-appkey"

@interface CDVLeanPush:CDVPlugin
{
    NSDictionary *notificationMessage;
    BOOL    isInline;
    NSString *notificationCallbackId;
    NSString *callback;
    
    BOOL ready;
}

@property (nonatomic, copy) NSString *callbackId;
@property (nonatomic, copy) NSString *notificationCallbackId;
@property (nonatomic, copy) NSString *callback;

@property (nonatomic, strong) NSDictionary *notificationMessage;
@property BOOL                              isInline;

@property (nonatomic, strong) NSString *leancloudAppId;
@property (nonatomic, strong) NSString *leancloudAppKey;

- (void)subscribe:(CDVInvokedUrlCommand *)command;
- (void)unsubscribe:(CDVInvokedUrlCommand *)command;
- (void)clearSubscription:(CDVInvokedUrlCommand *)command;

- (void)notificationReceived;

@end