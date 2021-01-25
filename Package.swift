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
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/48248/YandexMobileMetrica-3.14.1-ios-spm-6e041e9d-848f-4e2c-928e-ad89227c69b7.zip",
                      checksum: "f851afcc3e570272a404b3ac782f5f5be9d1a9fc595f41cfce755a765f229599"),
        .binaryTarget(name: "YandexMobileMetricaCrashes",
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/117488/YandexMobileMetricaCrashes-3.14.1-ios-spm-cff71a09-ff79-4e5f-93cb-1f9fc0588677.zip",
                      checksum: "fba8a6e43b24197ede43df6a0bbe42839b1c18e5379bfb9cb3ff3adb48a018f7"),
    ]
)
