Pod::Spec.new do |s|
  s.name = "YandexMobileMetrica"
  s.version = "1.8.2"
  s.summary = "This library is designed to be a part of mobile apps and provide app usage stats to Yandex.Metrica"

  s.homepage = "http://appmetrica.yandex.com/"
  s.license = { :type => 'PROPRIETARY', :file => 'LICENSE.txt' }
  s.authors = { "Andrey Shender" => "ashender@yandex-team.ru", "Yury Vasileuski" => "vasileuski@yandex-team.ru", "Kanstantsin Charnukha" => "xardas@yandex-team.ru" }
  s.platform = :ios, '6.0'
  s.source = { :git => "https://github.com/yandexmobile/metrica-sdk-ios.git", :tag => s.version.to_s }

  s.source_files = 'YandexMobileMetrica/**/*.h'
  s.header_mappings_dir = 'YandexMobileMetrica'
  s.public_header_files = "YandexMobileMetrica/**/*.h"

  s.vendored_library = 'libYandexMobileMetrica.a'
  s.libraries = 'z', 'sqlite3'

  s.dependency 'KSCrash/Recording', '~>0.0.3'
  s.dependency 'KSCrash/Reporting/Filters/AppleFmt', '~>0.0.3'
  s.dependency 'FMDB', '~> 2.2'
  s.dependency 'protobuf-c', '~> 1.0.1'
  s.frameworks = 'SystemConfiguration', 'UIKit', 'Foundation', 'CoreTelephony', 'CoreLocation', 'CoreGraphics', 'AdSupport'

  s.requires_arc = true
end
