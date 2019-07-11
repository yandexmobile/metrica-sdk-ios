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
