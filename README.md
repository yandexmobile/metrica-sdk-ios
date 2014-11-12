# Yandex.Metrica for Apps SDK

## License
License agreement on use of Yandex.Metrica for Apps SDK is available at [EULA site] [LICENSE] 

## Documentation
Documentation could be found at [metrica official site] [DOCUMENTATION]

## Sample project
Sample project to use is available at [GitHub] [GitHubSAMPLE]

## Changelog

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

