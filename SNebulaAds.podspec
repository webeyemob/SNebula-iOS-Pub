Pod::Spec.new do |spec|
  spec.name         = "SNebulaAds"
  spec.version      = "2.1.10"
  spec.summary      = "SNebula Ads is Mobile Ad SDK."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAds_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "11.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/SNebulaAds/SNebulaAds_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAds_#{spec.version}/SNebulaAds.xcframework"
  spec.resource     = "SNebulaAds_#{spec.version}/SNebulaAds.bundle"
  spec.dependency 'NathAds', '~> 1.1.9'
  spec.dependency 'DataFlyer'
  spec.dependency 'EventsIOSdk'
end
