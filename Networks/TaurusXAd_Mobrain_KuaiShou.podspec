Pod::Spec.new do |spec|
  spec.name         = "SNebulaAd_Mobrain_KuaiShou"
  spec.version      = "3.3.34.0"
  spec.summary      = "Mobrain-KuaiShou Adapters for mediating through TaurusX Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAd_Mobrain_KuaiShou_#{spec.version}/LICENSE" }
  spec.author       = "TaurusXAds"
  spec.platform     = :ios, "9.0"
  spec.source       = { :http => "https://github.com/webeyemob/TaurusXAds_iOS_Pub/raw/master/Networks/SNebulaAd_Mobrain_KuaiShou/SNebulaAd_Mobrain_KuaiShou_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAd_Mobrain_KuaiShou_#{spec.version}/ABUAdKsAdapter.framework"
end