Pod::Spec.new do |spec|
  spec.name         = "SNebulaAdMediation_TikTok_CN"
  spec.version      = "5.2.0.5"
  spec.summary      = "TikTok Cn Adapters for mediating through SNebula Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAdMediation_TikTok_CN_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/SNebulaAdMediation_TikTok_CN/SNebulaAdMediation_TikTok_CN_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAdMediation_TikTok_CN_#{spec.version}/SNebulaAdMediation_TikTok_CN.xcframework"
  spec.dependency 'Ads-CN', '5.2.0.5'
  spec.dependency 'Ads-CN/BUAdSDK', '5.2.0.5'
  spec.dependency 'Ads-CN/BUAdSDK_Compatible', '5.2.0.5'
  spec.dependency 'Ads-CN/Dep_Accurate', '5.2.0.5'
  spec.dependency 'Ads-CN/Dep_Compatible', '5.2.0.5'
  spec.dependency "SNebulaAds"
end
