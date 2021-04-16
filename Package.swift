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
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetrica-3.15.1-ios-spm-c89a5004-0c30-49d9-a81e-606aea8c4daa.zip",
                      checksum: "adce1c0abed9fcd5ed2b234bcbae834a59248dfbc1e0e422b2c14b70eb55bdfe"),
            .binaryTarget(name: "YandexMobileMetricaCrashes",
                      url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/50347/YandexMobileMetricaCrashes-3.15.1-ios-spm-7c1bc884-de01-43b4-91bc-ec9b63674d34.zip",
                      checksum: "ac445c257e31e30cc5320122e882c15bfee0f1ae19bddebc666d838b19a3e7b5"),
        ]
)
