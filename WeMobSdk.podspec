Pod::Spec.new do |spec|
  spec.name         = "WeMobSdk"
  spec.version      = "1.0.8"
  spec.summary      = "WeMobSdk is Access Mobile Ad SDK."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "6.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks  = "WeMobSdk/#{spec.version}/WeMobSdk.framework"
  spec.resource = "WeMobSdk/#{spec.version}/WeMobSDK.bundle"
end