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
    YMMCounterErrorCodeInitializationError = 4,
    YMMCounterErrorCodeJsonSerializationError = 5
} YMMCounterErrorCode;

@interface YMMCounter : NSObject

/** Starting the statistics collection process.

 @param apiKey Unique numeric application ID that is issued during ​application registration​ in Metrica.
 */
+ (void)startWithAPIKey:(NSUInteger)apiKey;

/** Sending a custom event.

 @param ​message​ Short name or description of the event.
 @param failure Failure contains a description of an error that occurred during message registration. It can take the ​nil​ value.
 @return Result of operation.
 */
+ (BOOL)reportEvent:(NSString *)message failure:(NSError * __autoreleasing *)failure;

/** Sending custom error messages.

 @param message​ Short name or description of the error
 @param exception​ Exception contains an ​NSException​ object that must be passed to the server. It can take the ​nil​ value.
 @param ​failure​ Failure contains a description of an error that occurred during message registration. It can take the ​nil​ value.
 @return Result of the operation.
 */
+ (BOOL)reportError:(NSString *)message exception:(NSException *)exception failure:(NSError * __autoreleasing *)failure;

/** Sending all stored events.

 Forces sending all events that have accumulated in storage, without waiting for them to be sent automatically.
 @return Result of operation.
 */
+ (BOOL)sendEvents;

/** Starting a new session.

 Use this method to interrupt current session and start a new one.
 */
+ (void)startNewSessionManually;

/** Automatic location detection is unavailable.

 @param location Custom device location to be reported.
 If you want to track device location, set it manually by providing any location.
 */
+ (void)setLocation:(CLLocation *)location;

/** Setting the custom dispatch period.

 @param dispatchPeriod Interval in seconds between sending events to the server.
 By default, 90 seconds. Passing 0 seconds prevents library from sending events automatically using timer.
 */
+ (void)setDispatchPeriod:(NSUInteger)dispatchPeriodSeconds;
+ (NSUInteger)dispatchPeriod;

/** Setting the maximum number of stored events.

 @param maxEventsCount Minimum number of cached events that causes reports to be automatically sent.
 By default, events are sent automatically when there are at least 7 items in the storage.
 Passing 0 value prevents library from sending events automatically upon reaching specified number of events in the storage.
 */
+ (void)setMaxReportsCount:(NSUInteger)maxReportsCount;
+ (NSUInteger)maxReportsCount;

/** Setting session length (in seconds).

 @param sessionTimeoutSeconds Time limit before the application is considered inactive.
 By default, the session times out if the application is in background for 10 minutes.
 Minimum accepted value is 10 seconds. All passed values below 10 seconds automatically become 10 seconds.
 */
+ (void)setSessionTimeout:(NSUInteger)sessionTimeoutSeconds;
+ (NSUInteger)sessionTimeout;

/** Enabling/disabling sending reports.

 @param enabled Boolean value to enable or disable sending reports.
 By default, sending reports is enabled. When disabled, reports about app crashes will still be sent.
 */
+ (void)setReportsEnabled:(BOOL)enabled;
+ (BOOL)isReportsEnabled;

/** Tracking app crashes.

 @param enabled Boolean value to enable or disable collecting and sending crash reports.
 By default, reports on application crashes are sent, meaning ​enabled=true​.
 To disable crash tracking, set the parameter value to ​enabled=false​.
 */
+ (void)setReportCrashesEnabled:(BOOL)enabled;
+ (BOOL)isReportCrashesEnabled;

/** Setting the arbitrary application version.

 @param appVersion Application version to be reported.
 By default, the application version is set in the app configuration file ​Info.plist (CFBundleShortVersionString)​.
 */
+ (void)setCustomAppVersion:(NSString *)appVersion;

/** Set maximum output log level.

 @param level One of ASL logging levels declared in <asl.h>. Enables logging for levels up to the passed value.
 */
+ (void)setLogLevel:(NSUInteger)level;

/** Set idfa to metrica, if application has access to it. Metrica will use it to calculate device statistics.
 @param idfa idfa is Apple's identifier for advertising.
 */
+ (void)setIDFA:(NSString *)idfa;

@end
