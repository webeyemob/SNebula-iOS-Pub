Pod::Spec.new do |spec|
  spec.name         = "SNebulaAd_Mobrain_TikTok"
  spec.version      = "4.9.0.6.0"
  spec.summary      = "Mobrain-TikTok Adapters for mediating through TaurusX Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAd_Mobrain_TikTok_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/Networks/SNebulaAd_Mobrain_TikTok/SNebulaAd_Mobrain_TikTok_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAd_Mobrain_TikTok_#{spec.version}/ABUAdCsjAdapter.framework"
end
