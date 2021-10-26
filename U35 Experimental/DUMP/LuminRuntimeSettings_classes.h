// Class LuminRuntimeSettings.LuminRuntimeSettings
// Size: 0x148 (Inherited: 0x28)
struct ULuminRuntimeSettings : UObject {
	UPROPERTY(BlueprintReadWrite) FString PackageName; 
	UPROPERTY(BlueprintReadWrite) FString ApplicationDisplayName; 
	UPROPERTY(BlueprintReadWrite) enum class ELuminFrameTimingHint FrameTimingHint; 
	UPROPERTY(BlueprintReadWrite) bool bProtectedContent; 
	UPROPERTY(BlueprintReadWrite) bool bManualCallToAppReady; 
	UPROPERTY(BlueprintReadWrite) bool bUseMobileRendering; 
	UPROPERTY(BlueprintReadWrite) bool bUseVulkan; 
	UPROPERTY(BlueprintReadWrite) FFilePath Certificate; 
	UPROPERTY(BlueprintReadWrite) FDirectoryPath IconModelPath; 
	UPROPERTY(BlueprintReadWrite) FDirectoryPath IconPortalPath; 
	UPROPERTY(BlueprintReadWrite) FLocalizedIconInfos LocalizedIconInfos; 
	UPROPERTY(BlueprintReadWrite) int32_t VersionCode; 
	UPROPERTY(BlueprintReadWrite) int32_t MinimumAPILevel; 
	UPROPERTY(BlueprintReadWrite) TArray<enum class ELuminPrivilege> AppPrivileges; 
	UPROPERTY(BlueprintReadWrite) TArray<FLuminComponentSubElement> ExtraComponentSubElements; 
	UPROPERTY(BlueprintReadWrite) TArray<FLuminComponentElement> ExtraComponentElements; 
	UPROPERTY(BlueprintReadWrite) FString SpatializationPlugin; 
	UPROPERTY(BlueprintReadWrite) FString ReverbPlugin; 
	UPROPERTY(BlueprintReadWrite) FString OcclusionPlugin; 
	UPROPERTY(BlueprintReadWrite) int32_t SoundCueCookQualityIndex; 
	UPROPERTY(BlueprintReadWrite) bool bRemoveDebugInfo; 
	UPROPERTY(BlueprintReadWrite) FDirectoryPath VulkanValidationLayerLibs; 
	UPROPERTY(BlueprintReadWrite) bool bFrameVignette; 
	UPROPERTY(BlueprintReadWrite) TArray<FLocalizedAppName> LocalizedAppNames; 
};

