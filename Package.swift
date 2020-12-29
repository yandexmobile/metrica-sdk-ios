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
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-3.14.0-ios-spm-a107ab19-f228-4591-9ab8-43716714c502.zip",
                      checksum: "5bd9ca9f3e612c06eb7b491db83957d6b6033244002f3a4dd842bac29ee59774"),
        .binaryTarget(name: "YandexMobileMetricaCrashes",
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetricaCrashes-3.14.0-ios-spm-78c305f1-219d-4ace-b6aa-afaf2ced676d.zip",
                      checksum: "b142b2d55e6de04d1e5f7ea83dc77d25afccded94d4ba042fdafc2b7fd4c8cf1"),
    ]
)
