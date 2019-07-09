Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_Facebook"
  spec.version      = "5.4.0.1"
  spec.summary      = "Facebook Adapters for mediating through WeSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "facebook-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_Facebook/#{spec.version}/WeMobMediation_Facebook.framework"
  spec.dependency 'FBAudienceNetwork', '5.4.0'
  spec.dependency "WeMobSdk", "~> 1.1.0"
end