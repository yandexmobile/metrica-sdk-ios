/*
 *  YMMYandexMetrica
 *
 * This file is a part of the Yandex.Metrica for Apps.
 *
 * Version for iOS © 2015 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.com/metrica_termsofuse/
 */

#import <Foundation/Foundation.h>

@class CLLocation;

extern NSString *const kYMMYandexMetricaErrorDomain;

typedef enum {
	YMMYandexMetricaErrorCodeDatabaseError = 0,
    YMMYandexMetricaErrorCodeInvalidName = 2,
    YMMYandexMetricaErrorCodeCrashReportDecoderError = 3,
    YMMYandexMetricaErrorCodeInitializationError = 4,
    YMMYandexMetricaErrorCodeJsonSerializationError = 5
} YMMYandexMetricaErrorCode;

@interface YMMYandexMetrica : NSObject

/** Starting the statistics collection process.

 @param apiKey Unique numeric application ID that is issued during application registration in Metrica.
 */
+ (void)startWithAPIKey:(NSString *)apiKey;

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

/** Sending all stored events.

 Forces sending all events that have accumulated in storage, without waiting for them to be sent automatically.
 */
+ (void)sendEventsBuffer;

/** Starting a new session.

 Use this method to interrupt current session and start a new one.
 */
+ (void)startNewSessionManually;

/**
 Enable/disable location reporting to Metrica.
 If enabled and location set via setLocation: method - that location would be used.
 If enabled and location is not set via setLocation,
 but application has appropriate permission - CLLocationManager would be used to acquire location data.
 
 @param enabled Flag indicating if reporting location to Metrica enabled
 Enabled by default.
 */
+ (void)setTrackLocationEnabled:(BOOL)enabled;
+ (BOOL)isTrackLocationEnabled;


/** Set location to Metrica
 To enable Metrica to use this location trackLocationEnabled should be 'YES'
 
 @param location Custom device location to be reported.
 */
+ (void)setLocation:(CLLocation *)location;

/** Setting the custom dispatch period.

 @param dispatchPeriod Interval in seconds between sending events to the server.
 By default, 90 seconds. Passing 0 seconds prevents library from sending events automatically using timer.
 */
+ (void)setDispatchPeriod:(NSUInteger)dispatchPeriodSeconds;
+ (NSUInteger)dispatchPeriod;

/** Setting the maximum number of stored events.

 @param maxReportsCount Minimum number of cached events that causes reports to be automatically sent.
 By default, events are sent automatically when there are at least 7 items in the storage.
 Passing 0 value prevents library from sending events automatically upon reaching specified number of events in the storage.
 */
+ (void)setMaxReportsCount:(NSUInteger)maxReportsCount;
+ (NSUInteger)maxReportsCount;

/** Setting session timeout (in seconds).

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
 By default, reports on application crashes are sent, meaning enabled=true.
 To disable crash tracking, set the parameter value to enabled=false.
 */
+ (void)setReportCrashesEnabled:(BOOL)enabled;
+ (BOOL)isReportCrashesEnabled;

/** Setting the arbitrary application version.

 @param appVersion Application version to be reported.
 By default, the application version is set in the app configuration file Info.plist (CFBundleShortVersionString).
 */
+ (void)setCustomAppVersion:(NSString *)appVersion;

/** Set maximum output log level.

 @param level One of ASL logging levels declared in <asl.h>. Enables logging for levels up to the passed value.
 */
+ (void)setLogLevel:(NSUInteger)level;

/** Seting key-value pair to be reported along with crash info.
    If value is nil previously set key-value is removed, does nothing if key hasn't been added.

 @param value The value for key.
 @param key The key for value.
 */
+ (void)setEnvironmentValue:(NSString *)value forKey:(NSString *)key;

@end
