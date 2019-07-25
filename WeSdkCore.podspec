Pod::Spec.new do |spec|
  spec.name         = "WeSdkCore"
  spec.version      = "1.2.1"
  spec.summary      = "WeSdk is Mobile Ad SDK."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "WeSdk"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "wesdkcore-#{spec.version}" }
  spec.vendored_frameworks  = "WeSdkCore/#{spec.version}/WeMobSdk.framework"
  spec.resource = "WeSdkCore/#{spec.version}/WeMobSdk.bundle"
end