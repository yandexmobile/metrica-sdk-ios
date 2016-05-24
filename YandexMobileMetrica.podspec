Pod::Spec.new do |s|
  s.name = 'YandexMobileMetrica'
  s.version = '2.5.0'
  s.summary = 'This library is designed to be a part of mobile apps and provide app usage stats to Yandex AppMetrica'

  s.homepage = 'http://appmetrica.yandex.com/'
  s.license = { :type => 'PROPRIETARY', :file => 'LICENSE.txt' }
  s.authors = { "Yandex LLC" => "appmetrica@yandex-team.com" }
  s.platform = :ios, '6.0'
  s.source = { :git => "https://github.com/yandexmobile/metrica-sdk-ios.git", :tag => s.version.to_s }

  s.preserve_paths       = 'YandexMobileMetrica.framework'
  s.public_header_files  = 'YandexMobileMetrica.framework/Versions/A/Headers/*.h'
  s.vendored_frameworks  = 'YandexMobileMetrica.framework'

  s.libraries = 'c++', 'z', 'sqlite3'
  s.frameworks = 'SystemConfiguration', 'UIKit', 'Foundation', 'CoreTelephony', 'CoreLocation', 'CoreGraphics', 'AdSupport'
  s.weak_frameworks = 'SafariServices'

  s.requires_arc = true
end
