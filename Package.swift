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
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetrica-3.15.0-ios-spm-05dc9e29-dee8-41c1-8800-5efac63681de.zip",
                      checksum: "f964085c25434431e8ca399df9ca3139869329415bcb782fa5556c5e755dd6e2"),
        .binaryTarget(name: "YandexMobileMetricaCrashes",
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetricaCrashes-3.15.0-ios-spm-2bc875d4-800d-40c1-a88b-ab06caed6549.zip",
                      checksum: "575d1bfb57089502e40ad2d6a5d9a00b8a7272e8ba93ab1b9bc32ab471ba7ee9"),
    ]
)
