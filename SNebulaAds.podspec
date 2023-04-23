Pod::Spec.new do |spec|
  spec.name         = "SNebulaAds"
  spec.version      = "2.1.9"
  spec.summary      = "SNebula Ads is Mobile Ad SDK."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAds_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/SNebulaAds/SNebulaAds_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAds_#{spec.version}/SNebulaAds.xcframework"
  spec.resource     = "SNebulaAds_#{spec.version}/SNebulaAds.bundle"
  spec.dependency 'NathAds', '~> 1.1.9'
  spec.dependency 'DataFlyer'
  spec.dependency 'EventsIOSdk'
  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
