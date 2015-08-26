# Yandex.Metrica for Apps SDK

## License
License agreement on use of Yandex.Metrica for Apps SDK is available at [EULA site] [LICENSE] 

## Documentation
Documentation could be found at [metrica official site] [DOCUMENTATION]

## Sample project
Sample project to use is available at [GitHub] [GitHubSAMPLE]

## AppStore submit notice
Starting from version 1.6.0 YandexMetrica became also a tracking instrument and 
uses Apple idfa to attribute installs. Because of that during submitting your 
application to the AppStore you will be prompted with three checkboxes to state 
your intentions for idfa usage.
As YandexMetrica uses idfa for attributing app installations you need to select **Attribute this app installation to a previously served 
advertisement**.

## Changelog

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


[LICENSE]: http://legal.yandex.ru/metrica_termsofuse/ "Yandex.Metrica agreement"
[DOCUMENTATION]: http://api.yandex.com/metrica-mobile-sdk/ "Yandex.Metrica for Apps documentation"
[GitHubSAMPLE]:https://github.com/yandexmobile/metrica-sample-ios/
[idfa]:https://developer.apple.com/LIBRARY/ios/documentation/AdSupport/Reference/ASIdentifierManager_Ref/index.html#//apple_ref/occ/instp/ASIdentifierManager/advertisingTrackingEnabled

