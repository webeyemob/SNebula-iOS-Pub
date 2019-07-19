Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_GoogleAds"
  spec.version      = "7.42.2.3"
  spec.summary      = "GoogleAds Adapters for mediating through WeSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "googleads-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_GoogleAds/#{spec.version}/WeMobMediation_GoogleAds.framework"
  spec.dependency "Google-Mobile-Ads-SDK", "7.42.2"
  spec.dependency "WeMobSdk"
end