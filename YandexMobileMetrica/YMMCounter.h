/*
 *  YMMCounter.h
 *
 * This file is a part of the Yandex.Metrica for Apps.
 *
 * Version for iOS © 2013 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.com/metrica_termsofuse/
 */

#import <CoreLocation/CoreLocation.h>

extern NSString *const kYMMCounterErrorDomain;

typedef enum {
	YMMCounterErrorCodeDatabaseError = 0,
    YMMCounterErrorCodeEventNameTooLong = 1,
    YMMCounterErrorCodeInvalidName = 2,
    YMMCounterErrorCodeCrashReportDecoderError = 3,
    YMMCounterErrorCodeInitializationError = 4
} YMMCounterErrorCode;

@interface YMMCounter : NSObject

/** Starting the statistics collection process.

 @param apiKey is a unique numeric application ID that is issued during ​application registration​ in Metrica.
 */
+ (void)startWithAPIKey:(NSUInteger)apiKey;

/** Sending a custom event.

 @param ​message​ is a short name or description of the event.
 @param failure contains a description of an error that occurred during message registration. It can take the ​nil​ value.
 @return result of operation.
 */
+ (BOOL)reportEvent:(NSString *)message failure:(NSError * __autoreleasing *)failure;

/** Sending custom error messages.

 @param message​  contains a short name or description of the error
 @param exception​ contains an ​NSException​ object that must be passed to the server. It can take the ​nil​ value.
 @param ​failure​ contains a description of an error that occurred during message registration. It can take the ​nil​ value.
 @return result of operation.
 */
+ (BOOL)reportError:(NSString *)message exception:(NSException *)exception failure:(NSError * __autoreleasing *)failure;

/** Sending all stored events.

 Forces sending all events that have accumulated in storage, without waiting for them to be sent automatically.
 @return result of operation.
 */
+ (BOOL)sendEvents;

/** Starting a new session.

 Use this method to interrupt current session and start a new one.
 */
+ (void)startNewSessionManually;

/** Automatic location detection is unavailable.

 @param location is a custom device location to be reported.
 If you want to track device location, set it manually by providing any location.
 */
+ (void)setLocation:(CLLocation *)location;

/** Setting the custom dispatch period.

 @param dispatchPeriod is the interval in seconds between sending events to the server.
 By default, 90 seconds.
 */
+ (void)setDispatchPeriod:(NSTimeInterval)dispatchPeriod;
+ (NSTimeInterval)dispatchPeriod;

/** Setting the maximum number of stored events.

 @param maxEventsCount is the maximum number of cashed events to send.
 By default, events are sent when there are at least 7 items in the storage.
 */
+ (void)setMaxReportsCount:(NSUInteger)maxReportsCount;
+ (NSUInteger)maxReportsCount;

/** Setting session length (in seconds).

 @param sessionTimeoutSeconds is the time limit before the application is considered inactive.
 By default, the session times out if the application is in backround for 10 minutes.
 */
+ (void)setSessionTimeout:(NSUInteger)sessionTimeoutSeconds;
+ (NSUInteger)sessionTimeout;

/** Setting proxy url.

 @param host is proxy url to send reports.
 */
+ (void)setCustomReportUrl:(NSString *)host;
+ (NSString *)customReportUrl;

/** Enabling/disabling sending reports.

 @param enabled is boolean value to enable or disable sending reports.
 By default, sending reports is enabled. When disabled, reports about app crashes will still be sent.
 */
+ (void)setReportsEnabled:(BOOL)enabled;
+ (BOOL)isReportsEnabled;

/** Tracking app crashes.

 @param enabled is boolean value to enable or disable collecting and sending crash reports.
 By default, reports on application crashes are sent, meaning ​enabled=true​.
 To disable crash tracking, set the parameter value to ​enabled=false​.
 */
+ (void)setReportCrashesEnabled:(BOOL)enabled;
+ (BOOL)isReportCrashesEnabled;

/** Setting the arbitrary application version.

 @param appVersion is application version to be reported.
 By default, the application version is set in the app configuration file ​Info.plist (CFBundleShortVersionString)​.
 */
+ (void)setCustomAppVersion:(NSString *)appVersion;

@end
