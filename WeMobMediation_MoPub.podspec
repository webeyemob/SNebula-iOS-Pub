Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_MoPub"
  spec.version      = "5.6.0.2"
  spec.summary      = "MoPub Adapters for mediating through WeSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "WeSdk"
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "mopub-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_MoPub/#{spec.version}/WeMobMediation_MoPub.framework"
  spec.dependency 'mopub-ios-sdk', '~> 5.6.0'
  spec.dependency "WeMobSdk", "~> 1.2.1"
end