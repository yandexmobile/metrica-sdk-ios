/*
 *  YMMYandexMetrica.h
 *
 * This file is a part of the AppMetrica
 *
 * Version for iOS © 2015 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.com/metrica_termsofuse/
 */

#import <Foundation/Foundation.h>

@class CLLocation;

extern NSString *const kYMMYandexMetricaErrorDomain;

typedef NS_ENUM(NSInteger, YMMYandexMetricaEventErrorCode) {
    YMMYandexMetricaEventErrorCodeInitializationError = 1000,
    YMMYandexMetricaEventErrorCodeInvalidName = 1001,
    YMMYandexMetricaEventErrorCodeJsonSerializationError = 1002,
};

@interface YMMYandexMetrica : NSObject

/** Starting the statistics collection process.

 @param apiKey Application key that is issued during application registration in AppMetrica.
 */
+ (void)activateWithApiKey:(NSString *)apiKey;

/** Reporting custom event.

 @param message Short name or description of the event.
 @param onFailure Block to be executed if an error occurres while reporting, the error is passed as block argument.
 */
+ (void)reportEvent:(NSString *)message
          onFailure:(void (^)(NSError *error))onFailure;

/** Reporting custom event with additional parameters.

 @param message Short name or description of the event.
 @param params Dictionary of name/value pairs that should be sent to the server.
 @param onFailure Block to be executed if an error occurres while reporting, the error is passed as block argument.
 */
+ (void)reportEvent:(NSString *)message
         parameters:(NSDictionary *)params
          onFailure:(void (^)(NSError *error))onFailure;

/** Reporting custom error messages.

 @param message Short name or description of the error
 @param exception Exception contains an NSException object that must be passed to the server. It can take the nil value.
 @param onFailure Block to be executed if an error occurres while reporting, the error is passed as block argument.
 */
+ (void)reportError:(NSString *)message
          exception:(NSException *)exception
          onFailure:(void (^)(NSError *error))onFailure;

/**
 Enable/disable location reporting to AppMetrica.
 If enabled and location set via setLocation: method - that location would be used.
 If enabled and location is not set via setLocation,
 but application has appropriate permission - CLLocationManager would be used to acquire location data.
 
 @param enabled Flag indicating if reporting location to AppMetrica enabled
 Enabled by default.
 */
+ (void)setTrackLocationEnabled:(BOOL)enabled;

/** Set location to AppMetrica
 To enable AppMetrica to use this location trackLocationEnabled should be 'YES'
 
 @param location Custom device location to be reported.
 */
+ (void)setLocation:(CLLocation *)location;

/** Setting session timeout (in seconds).

 @param sessionTimeoutSeconds Time limit before the application is considered inactive.
 By default, the session times out if the application is in background for 10 seconds.
 Minimum accepted value is 10 seconds. All passed values below 10 seconds automatically become 10 seconds.
 */
+ (void)setSessionTimeout:(NSUInteger)sessionTimeoutSeconds;

/** Tracking app crashes.

 @param enabled Boolean value to enable or disable collecting and sending crash reports.
 By default, reports on application crashes are sent, meaning enabled=true.
 To disable crash tracking, set the parameter value to enabled=false.
 */
+ (void)setReportCrashesEnabled:(BOOL)enabled;

/** Setting the arbitrary application version.

 @param appVersion Application version to be reported.
 By default, the application version is set in the app configuration file Info.plist (CFBundleShortVersionString).
 */
+ (void)setCustomAppVersion:(NSString *)appVersion;

/** Enable or disable logging.

 @param isEnabled Boolean value to enable or disable logging. By default logging is disabled.
 */
+ (void)setLoggingEnabled:(BOOL)isEnabled;

/** Setting key-value pair to be reported along with crash info.
    If value is nil previously set key-value is removed, does nothing if key hasn't been added.

 @param value The value for key.
 @param key The key for value.
 */
+ (void)setEnvironmentValue:(NSString *)value forKey:(NSString *)key;

/** Retrieves current version of library.
 */
+ (NSString *)libraryVersion;

@end

@interface YMMYandexMetrica (YMMYandexMetricaDeprecatedOrUnavailable)

+ (void)startWithAPIKey:(NSString *)apiKey  __attribute__((unavailable("activateWithApiKey: must be used instead.")));

@end
