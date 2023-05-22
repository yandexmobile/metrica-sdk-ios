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
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-4.5.2-ios-spm-4cf9781b-4e3e-4674-bbb3-5ab28cc9869a.zip",
                checksum: "c861e56a53e4b7cbd9d9a8649c8c1defc3e61a203870254b4ba221c373e7629b"
            ),
            .binaryTarget(
                name: "YandexMobileMetricaCrashes",
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetricaCrashes-4.5.2-ios-spm-3ac18632-911c-404d-8f4d-4d2a496ee5b7.zip",
                checksum: "35f83521c388eef8c3bb5cb7b5a3c37e517aaeb1c14d1b12b1dc904322577db9"
            ),
        ]
)
