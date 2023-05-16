Pod::Spec.new do |spec|
  spec.name         = "EventsIOSdk"
  spec.version      = "1.3.0"
  spec.summary      = "EventsIOSdk is SDK for track event."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "EventsIOSdk_#{spec.version}/LICENSE" }
  spec.author       = "SNebule"
  spec.platform     = :ios, "9.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/EventsIOSdk/EventsIOSdk_#{spec.version}.zip" }
  spec.vendored_frameworks  = "EventsIOSdk_#{spec.version}/EventsIOSdk.framework"
  spec.frameworks       = 'SystemConfiguration'
  spec.weak_frameworks  = 'CoreTelephony', 'AdSupport','iAd'
  spec.pod_target_xcconfig = { 'BITCODE_GENERATION_MODE' => 'bitcode', 'OTHER_LDFLAGS' => '-lObjC' }
end