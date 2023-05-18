Pod::Spec.new do |spec|
  spec.name         = "EmbededSdk"
  spec.version      = "1.2.5"
  spec.summary      = "EmbededSdk is SDK for track event."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "EmbededSdk_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/EmbededSdk/EmbededSdk_#{spec.version}.zip" }
  spec.vendored_frameworks  = "EmbededSdk_#{spec.version}/EmbededSdk.xcframework"
  spec.dependency   'SNebulaAds'
  spec.dependency   'EventsIOSdk'
end