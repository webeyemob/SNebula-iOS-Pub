Pod::Spec.new do |spec|
  spec.name         = "WeMobSdk"
  spec.version      = "1.2.2.1"
  spec.summary      = "WeMobSdk is Mobile Ad SDK."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "WeSdk"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "wemobsdk-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobSdk/#{spec.version}/WeMobSdk.framework"
  spec.resource = "WeMobSdk/#{spec.version}/WeMobSDK.bundle"
end