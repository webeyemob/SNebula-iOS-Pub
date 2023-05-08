Pod::Spec.new do |spec|
  spec.name         = "SNebulaAdMediation_TikTok_CN"
  spec.version      = "4.9.0.6"
  spec.summary      = "TikTok CN Adapters for mediating through SNebula Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAdMediation_TikTok_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/SNebulaAdMediation_TikTok/SNebulaAdMediation_TikTok_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAdMediation_TikTok_#{spec.version}/SNebulaAdMediation_TikTok.xcframework"
  spec.dependency 'Ads-CN', '4.9.0.6'
  spec.dependency 'Ads-CN/BUAdSDK', '4.9.0.6'
  spec.dependency 'Ads-CN/BUAdSDK_Compatible', '4.9.0.6'
  spec.dependency 'Ads-CN/Dep_Accurate', '4.9.0.6'
  spec.dependency 'Ads-CN/Dep_Compatible', '4.9.0.6'
  spec.dependency "SNebulaAds"
end
