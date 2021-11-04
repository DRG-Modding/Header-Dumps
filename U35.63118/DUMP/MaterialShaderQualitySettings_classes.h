// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x58 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x3]; // 0x28(0x1b)
};

