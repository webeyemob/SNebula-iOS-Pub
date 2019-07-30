Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_AppLovin"
  spec.version      = "2.2.17.1"
  spec.summary      = "AppLovin Adapters for mediating through WeSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "WeSdk"
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "amazon-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_AppLovin/#{spec.version}/WeMobMediation_AppLovin.framework"
  spec.dependency 'AmazonAdSDK', '2.0.16'
  spec.dependency "WeMobSdk", "~> 1.2.1"
end