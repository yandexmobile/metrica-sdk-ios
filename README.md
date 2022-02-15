# Yandex AppMetrica SDK

## License
License agreement on use of Yandex AppMetrica SDK is available at [EULA site][LICENSE]

## Documentation
Documentation could be found at [AppMetrica official site][DOCUMENTATION]

## Sample project
Sample project to use is available at [GitHub][GitHubSAMPLE]

## AppStore submit notice
Starting from version 1.6.0 Yandex AppMetrica became also a tracking instrument and
uses Apple idfa to attribute installs. Because of that during submitting your
application to the AppStore you will be prompted with three checkboxes to state
your intentions for idfa usage.
As Yandex AppMetrica uses idfa for attributing app installations you need to select **Attribute this app installation to a previously served
advertisement**.

## Changelog

## Version 4.2.0
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-4.2.0-ios-e34502a2-1cdd-4226-b575-86d35844b33c.zip)

* Added API to send crashes from arbitrary plugins: protocols `YMMYandexMetricaPlugins` (to receive the object implementing this protocol invoke method `YMMYandexMetrica.getPluginExtension`), `YMMYandexMetricaPluginReporting` (to receive the object implementing this protocol invoke method `YMMYandexMetricaReporting.getPluginExtension`), as well as classes `YMMPluginErrorDetails`, `YMMStackTraceElement`.
* Added API for plugins that is required for full SDK functioning in terms of sessions auto-tracking when activated from plugins: `YMMYandexMetricaPlugins.handlePluginInitFinished`.
* Added the capability to send errors from reporters without main API key activation. In this case, the errors will not contain meta-information retrieved from KSCrash (system info).


### Version 4.0.0
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-4.0.0-ios-a3605663-b1ca-4851-b475-9a1074f7bd4d.zip)

* Added  `userProfileID` property to `YMMYandexMetricaConfiguration` for setting User Profile ID during activation.
* Added `appOpenTrackingEnabled` property to `YMMYandexMetricaConfiguration` property for auto-tracking app openings via deeplink. Enabled by default.
* Added `revenueAutoTrackingEnabled` property to `YMMYandexMetricaConfiguration` for auto-tracking in-app purchases. Enabled by default.
* Added  `userProfileID` property to `YMMReporterConfiguration` for setting User Profile ID during _repoter_ activation.
* Now you can use `[YMMYandexMetrica setUserProfileID:]` method for setting User Profile ID before activation.

### Version 3.17.0
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.17.0-ios-a24417a7-e726-4624-bbb0-83a3862a74a8.zip)

* Added support for iPhone and AppleTV simulators running on Apple Silicon Macs (M1).
* Fixed potential problem with Main thread checker in WebKit.

#### Notice
> CocoaPods 1.10 or Carthage 0.38 now required for `.xcframework`.
> `YandexMobileMetrica/Static-TV` and `YandexMobileMetrica/Dynamic-TV` subspecs are not available anymore. From now use the same subspec for tvOS as for iOS: `YandexMobileMetrica/Static` and `YandexMobileMetrica/Dynamic`.

### Version 3.16.0
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/117488/YandexMobileMetrica-3.16.0-ios-ee95b538-61ab-48d3-9a8c-67b01b2c3b01.zip)

* Added `+ initWebViewReporting:onFailure:` method to report events from `WKWebView`.

### Version 3.15.1
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.15.1-ios-8f5cb67f-5a16-43a0-b121-e20e39f43f53.zip)

* Improved Apple Search Ads attribution with AdServices framework. Upgrade to this version to preserve Apple Search Ads tracking on iOS 14.5+.

### Version 3.15.0
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.15.0-ios-a8616fa2-25a8-4a2f-8420-83b4cc90b176.zip)

* Added support for attributing installs on devices with iOS 14.5+ using SKAdNetwork. Conversion value transfer will be supported in upcoming updates.
* Added obtaining data required to attribute installs from Apple Search Ads using AdServices Framework (relevant for devices with iOS 14.3+). Attribution will be implemented server-side and doesn’t require further updates.

### Version 3.14.1
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.14.1-ios-2a54d492-92c0-43d4-a17e-b38e30a6c724.zip)

* Removed `user_target_xcconfig` attribute from Podspec.
* Minor improvements.

### Version 3.14.0
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.14.0-ios-972f25fa-9657-485c-a1a0-c14d2e8f5770.zip)

* Added Swift Package Manager distribution. 
* Stopped supporting iOS 8. 
* Fixed sessions binding for crash events.

### Version 3.12.0
SDK archive:
[**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-3.12.0-ios-d581da9f-e4de-4529-924e-1d1214c09780.zip)

* Added support for e-commerce events.

### Version 3.11.1
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-3.11.1-ios-2eac1f7f-25f1-4f25-b5c0-5978e4a21eca.zip)

* Added the API to report non-fatals: NSError, custom errors.
* Added the error environment to be reported with crashes and errors.
* Added the configuration property `maxReportsInDatabaseCount` to control DB limits.
* Fixed tvOS support.
* Added the configuration property `appForKids` for applications from App Store Kids' Category.
* Improved stability and performance.

### Version 3.9.4
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/48248/YandexMobileMetrica-3.9.4-ios-9d093f38-8a48-434a-bc01-5226212f2b07.zip)

* Fixed possible crashes which affected the AppMetrica SDK versions 3.9.0 to 3.9.3.

### Version 3.9.2
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.9.2-ios-2a9196d3-c8d5-4db0-bda6-a72beb9d0026.zip)

* Fixed the issue with invalid `appmetrica_device_id` generation.
* Fixed possible deadlock during activation.

### Version 3.9.1

* Fixed the reportReferralUrl method. It is no longer deprecated.
* Fixed getting information about code and subcode for Mach exceptions.
* Fixed framework for tvOS.
* Improved stability and performance.

### Version 3.8.2
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.8.2-ios-fd6bf496-ed60-4d84-978a-a8f9a818b566.zip)

* Fixed an issue with serialization of revenue decimal price.

### Version 3.8.1
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.8.1-ios-05f06e48-1975-4ece-9947-1562868bfc84.zip)

* Fixed an issue with "helper" command line tool in dynamic frameworks.

### Version 3.8.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.8.0-ios-4a829c81-8941-4676-9136-48a22f386501.zip)

* Added a command line tool for dSYM uploading.

### Version 3.7.1
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.7.1-ios-066381b6-39c3-4794-949f-2391e0ea618f.zip)

* Added support of NSDecimalNumber for a price in YMMRevenueInfo.
* Added the API to control sessions manually (see the sessionsAutoTracking property of YMMYandexMetricaConfiguration).
* Added the configuration flag to handle activation as a session start (see handleActivationAsSessionStart of YMMYandexMetricaConfiguration).
* Stopped supporting the reportReferralUrl method. The method is deprecated.
* Stopped supporting the double type for the price field in the YMMRevenueInfo class. The field is deprecated.
* Fixed an issue with additional information in crash logs (active_time_since_launch, active_time_since_last_crash etc).

### Version 3.6.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.6.0-ios-702bb3c2-76a5-4b77-9dd3-b743d5996080.zip)

* Fixed possible loss of crash reports on devices with a 32-bit processor.
* Fixed possible crashes which affected the AppMetrica SDK versions 3.1.0 to 3.5.0.
* Improved performance and quality of statistics.

### Version 3.5.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-3.5.0-ios-a29e7edc-5396-454c-ac51-32593097e680.zip)

* Added tvOS support (subspecs `Static-TV` and `Dynamic-TV`).
* Improved performance and quality of statistics.

### Version 3.4.1
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.4.1-ios-17403b29-3ad3-494b-9793-f2c38628edc7.zip)

* Fixed Swift support(#76).

### Version 3.4.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.4.0-ios-73e951f2-134a-46a4-953a-7054bf97d1fb.zip)

* Separated the library into two frameworks: core and crash-handling. See documentation for more info.
* Fixed the sendEventsBuffer method to work correctly in the background.
* Improved performance and memory usage.

### Version 3.3.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.3.0-ios-5cd81fc3-f157-438b-bfd2-5f73229fecbe.zip)

* Improved the API for reporting profiles and revenue.
* Improved performance and quality of statistics.

### Version 3.2.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/48248/YandexMobileMetrica-3.2.0-ios-01b73b00-e52c-4a1a-94d8-937704818158.zip)

* Added a method to disable statistics sending.
* Added a method to retrieve the AppMetrica device ID.
* Added a method to force stored events sending.
* Improved quality of statistics and attribution.

### Version 3.1.2
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.1.2-ios-0ed40305-b027-4c82-9401-865906c14d3f.zip)

* Improved stability and performance.

### Version 3.1.1

* Fixed internal SDK data loss problem.

### Version 3.1.0

* Improved quality of statistics and attribution.
* Fixed possible deadlock which affected AppMetrica 3.0.0 and 3.0.1.

### Version 3.0.1

* Improved stability and performance.

### Version 3.0.0

* Added user profiles.
* Added revenue tracking.
* Unified and revised the API.
* Changed the app version and build number order in crash reports to match the Apple format.
* Extended logging of events flow.
* Stopped supporting iOS 6 and iOS 7.
* Improved performance and quality of statistics.

### Version 2.9.8
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/117488/YandexMobileMetrica-2.9.8-ios-71d8155b-cd35-4d5b-a382-2e737d3029d4.zip)

* Improved performance and quality of statistics.

### Version 2.9.6

* Improved performance and quality of statistics.

### Version 2.9.4

* Fixed possible crashes on simulator.
* Improved performance and quality of statistics.

### Version 2.9.1

* Added the ability to set referral url.

### Version 2.9.0

* Improved performance and quality of statistics.
* Added the ability to send statistics using an API key that differs from the app's API key.

### Version 2.8.3

* Fixed bitcode problems with Xcode 8.2.1

### Version 2.8.1

* Improved performance and quality of statistics.

### Version 2.8.0

* Fixed version/build number of application in crash reports.
* Fixed custom location setting.
* Improved performance and quality of statistics.

### Version 2.7.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/48248/YandexMobileMetrica-2.7.0-ios-7058b11a-d987-4519-8c64-028c75b67eab.zip)

* Added method to distinguish application updates from new intallations.
* Supported deeplink tracking.

### Version 2.6.5
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-2.6.5-ios-6c4350a9-024d-45f2-a9e7-253c72f413d0.zip)

* Fixed dynamic framework meta-information.

### Version 2.6.2
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-2.6.2-ios-51ddba1a-89bd-4da8-b4ae-771d60a317f0.zip)

* Improved performance and quality of statistics.

### Version 2.6.1
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-2.6.1-ios-64364d26-6106-4105-9f79-d18478e6e3b8.zip)

* Fixed iOS 6 support.

### Version 2.6.0
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-2.6.0-ios-962cb138-d9c6-4d0f-8d1d-55fc98d81d1d.zip)

* Improved iOS 10 support.
* Improved Swift support.
* Added dynamic framework.

### Version 2.5.1
SDK archive: [**download**](https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/117488/YandexMobileMetrica-2.5.1-ios-ec534922-a996-49c9-adef-96c781d33e07.zip)

* Framework archive moved to the Yandex cloud storage.
* Fixed [#41](https://github.com/yandexmobile/metrica-sdk-ios/issues/41).

### Version 2.5.0
* Improved performance and quality of statistics.

### Version 2.4.1

* Improved performance and quality of statistics.

### Version 2.4.0

* Supported referrer tracking method.
* Improved performance and quality of statistics.

### Version 2.3.1

* AppMetrica now also available as static framework.
* Removed explicit external dependencies.
* Improved error messages.
* Improved performance and quality of statistics.

### Version 2.3.0

* Added ability to activate AppMetrica with configuration.
* Added ability to track preloaded installs.
* Improved performance and quality of statistics.

### Version 2.1.1

* Added support for extensions.
* Added support for Bitcode.
* Improved error messages.

### Version 2.0.0

* The ApiKey format has been changed. The app ID in a new format is available in the AppMetrica web interface when the app editing mode is engaged.
* The method of initializing the library in the app has been renamed from [YMMYandexMetrica startWithAPIKey:(NSString *)apiKey]; to [YMMYandexMetrica activateWithApiKey:(NSString *)apiKey];.
* The session length has been changed. Now it is 10 seconds, by default.
* The library has been adapted for iOS 9.
* Improved quality of calculating statistics for app installations and devices identification for tracking.
* We have significantly improved performance and reduced the power consumption.
* The obsolete methods have been removed.

For more details see [official doc page](https://tech.yandex.com/metrica-mobile-sdk/doc/mobile-sdk-dg/concepts/ios-history-docpage/)

### Version 1.8.5

* Supported iOS 9

### Version 1.8.2

* Added ability to set crash environment

### Version 1.6.2

* Fixed crash reporting bugs

### Version 1.6.1

* Improved campaigns tracking accuracy

### Version 1.6.0
* Improved stability and performance
* Switched to reading [idfa] from AdSupport within library
* Added events with additional parameters
* Added free app install tracking support
* Renamed YMMCounter to YMMYandexMetrica
* Changed ApiKey type from integer to string
* Supported Xcode 6 and iOS 8
* Switched to min supported target iOS 6
* Improved location handling
* Switched to asynchronous error processing using blocks
* Optimised library start

### Version 1.2.3
 * Removed all references to idfa (AdSupport.framework) from library
 * Improved library stability


### Version 1.2
* Reduced size of library by half added to target app
* Optimised performance up to 30%
* Added arm64 and x86_64 slice to the library's binary
* Added arm64 crash handling
* Moved to protobuf-c
* Extracted FMDB as an external dependency
* Adjusted session length logic
* Added API for managing library logging
* Added jailbreak detection
* Improved library stability

### Version 1.0.1
* Removed private methods
* Extracted ProtobufObjC as an external dependency


[LICENSE]: https://yandex.com/legal/appmetrica_sdk_agreement/ "Yandex AppMetrica agreement"
[DOCUMENTATION]: https://tech.yandex.com/metrica-mobile-sdk/ "Yandex AppMetrica documentation"
[GitHubSAMPLE]: https://github.com/yandexmobile/metrica-sample-ios/
[idfa]: https://developer.apple.com/reference/adsupport/asidentifiermanager#//apple_ref/occ/instp/ASIdentifierManager/advertisingTrackingEnabled
