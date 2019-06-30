Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_AdMob"
  spec.version      = "7.42.2.0"
  spec.summary      = "AdMob Adapters for mediating through Access WeMobSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "6.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "admob-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_AdMob/WeMobMediation_AdMob.framework"
end