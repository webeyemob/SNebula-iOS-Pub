Pod::Spec.new do |spec|
  spec.name         = "WeMobSdk"
  spec.version      = "1.0.3"
  spec.summary      = "WeMobSdk is Access Mobile Ad SDK."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "6.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "1.0.3" }
  spec.vendored_frameworks  = "WeMobSdk/1.0.3/WeMobSdk.framework"
end