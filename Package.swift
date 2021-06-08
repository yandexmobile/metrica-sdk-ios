// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "YandexMobileMetrica",
    platforms: [
        .iOS(.v9), .tvOS(.v9)
    ],
    
    products: [
            .library(name: "YandexMobileMetrica", targets: ["YandexMobileMetrica"]),
            .library(name: "YandexMobileMetricaCrashes", targets: ["YandexMobileMetricaCrashes"]),
        ],
    
    targets: [
            .binaryTarget(name: "YandexMobileMetrica",
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.17.0-ios-spm-0ce48b19-0093-431c-89ee-8666420b9650.zip",
                      checksum: "2b79ddc482b2851225fbce678a57fcac2f3aa27b5300f3b71d9c4e82d251e0df"),
            .binaryTarget(name: "YandexMobileMetricaCrashes",
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetricaCrashes-3.17.0-ios-spm-8341da09-2473-4471-abd1-fa783da5228f.zip",
                      checksum: "1aafe6a99e3ae928dc82df313713fd0842f1b5bdb17d0f8cea5f445c00c6d8a8"),
        ]
)
