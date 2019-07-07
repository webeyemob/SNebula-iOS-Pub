Pod::Spec.new do |spec|
  spec.name         = "WeSdkCore"
  spec.version      = "1.0.8"
  spec.summary      = "WeSdkCore is Mobile Ad SDK."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "6.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "wesdkcore-#{spec.version}" }
  spec.vendored_frameworks  = "WeSdkCore/#{spec.version}/WeMobSdk.framework"
  spec.resource = "WeSdkCore/#{spec.version}/WeMobSDK.bundle"
end