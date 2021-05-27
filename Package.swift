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
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/48248/YandexMobileMetrica-3.16.0-ios-spm-9be2e518-c85e-4b9d-b534-a54a0a250683.zip",
                      checksum: "fe338fe28ef074a6a46876385e763dc8b4c4cb8bab376cf1a76851e79c9d355e"),
            .binaryTarget(name: "YandexMobileMetricaCrashes",
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/117488/YandexMobileMetricaCrashes-3.16.0-ios-spm-8b48ae1b-1f05-46be-8e8a-c725db8a4c76.zip",
                      checksum: "e7b9bd6920e34651f579dcd825e1c9d9e4ad82e855b456672b3d6846f1019b8b"),
        ]
)
