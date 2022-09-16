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
            .binaryTarget(
                name: "YandexMobileMetrica",
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-4.4.0-ios-spm-fc805483-bdaa-48be-9163-6c1c401828f8.zip",
                checksum: "fa97a38a3e56007e0ee4d878a2e17dba267b3ae844ea91e172bc0a6d862aa8ea"
            ),
            .binaryTarget(
                name: "YandexMobileMetricaCrashes",
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/117488/YandexMobileMetricaCrashes-4.4.0-ios-spm-2a890baa-e41a-41d6-b460-36514190f4f9.zip",
                checksum: "d6b98466f6d3905b1722977b8dbb7f506179bc8efc19c755bf69e92168bca2ea"
            ),
        ]
)
