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
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/48248/YandexMobileMetrica-4.5.0-ios-spm-740398ad-b43a-486f-ba68-138c9fc0cc2b.zip",
                checksum: "f1a6a851093559c440a037241f6571b4650a4aa0360859cc8849c9f77dc6e994"
            ),
            .binaryTarget(
                name: "YandexMobileMetricaCrashes",
                url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetricaCrashes-4.5.0-ios-spm-2481a5e3-b346-475d-8fec-0acd66431517.zip",
                checksum: "1970ba6acb2a4a480bb0c6b4d1e94e9f604a03bd93df18c5e0a3b6de16929b34"
            ),
        ]
)
