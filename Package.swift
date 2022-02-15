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
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/1604631/YandexMobileMetrica-4.2.0-ios-spm-2e80e2e0-1324-4118-912e-3d48e3960d0c.zip",
                checksum: "60cd297c5f3ccc822aafc38fe389858e33f0d4d8677365eef7e9987e10c180ce"
            ),
            .binaryTarget(
                name: "YandexMobileMetricaCrashes",
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetricaCrashes-4.2.0-ios-spm-cd7453d4-54dc-4fe0-85c3-7906d29b6bf4.zip",
                checksum: "68304f77234a663d7a3c1da0430c02bdbd0957e5a67a0600301ccf21e2d012bd"
            ),
        ]
)
