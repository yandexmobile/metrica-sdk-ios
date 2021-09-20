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
                          url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/175948/YandexMobileMetrica-4.0.0-ios-spm-b3084425-dea2-4f7f-8d60-f591d7f2ce70.zip",
                          checksum: "c0a3d76ccd65c326aa6510eafd1b091cd7563b2719fb386bb03c089317aff4df"),
            .binaryTarget(name: "YandexMobileMetricaCrashes",
                          url: "https://storage.mds.yandex.net/get-appmetrica-mobile-sdk/128534/YandexMobileMetricaCrashes-4.0.0-ios-spm-53b1a15a-ee8e-48b9-b931-85b96fd426fa.zip",
                          checksum: "a1687be372eb3b4ad0d7e62fe37ee6961bf03151ad9ac8cf0112ba9edb9d1efd"),
        ]
)
