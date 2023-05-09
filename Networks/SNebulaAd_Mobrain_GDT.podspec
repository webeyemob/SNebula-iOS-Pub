Pod::Spec.new do |spec|
  spec.name         = "SNebulaAd_Mobrain_GDT"
  spec.version      = "4.14.01.0"
  spec.summary      = "Mobrain-GDT Adapters for mediating through SNebula Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAd_Mobrain_GDT_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "9.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/Networks/SNebulaAd_Mobrain_GDT/SNebulaAd_Mobrain_GDT_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAd_Mobrain_GDT_#{spec.version}/ABUAdGdtAdapter.framework"
end
