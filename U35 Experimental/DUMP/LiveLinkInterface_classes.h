// Class LiveLinkInterface.LiveLinkSourceFactory
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkSourceFactory : UObject {
};

// Class LiveLinkInterface.LiveLinkRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkRole : UObject {
};

// Class LiveLinkInterface.LiveLinkBasicRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkBasicRole : ULiveLinkRole {
};

// Class LiveLinkInterface.LiveLinkAnimationRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkAnimationRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkTransformRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkTransformRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkCameraRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkCameraRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkController
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkController : UObject {
};

// Class LiveLinkInterface.LiveLinkSourceSettings
// Size: 0x98 (Inherited: 0x28)
struct ULiveLinkSourceSettings : UObject {
	UPROPERTY(BlueprintReadWrite) enum class ELiveLinkSourceMode Mode; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkSourceBufferManagementSettings BufferSettings; 
	UPROPERTY(BlueprintReadWrite) FString ConnectionString; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkSourceFactory* Factory; 
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// Size: 0xe8 (Inherited: 0x98)
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	UPROPERTY(BlueprintReadWrite) FLiveLinkCurveConversionSettings CurveConversionSettings; 
};

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFrameInterpolationProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFramePreProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFrameTranslator
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFrameTranslator : UObject {
};

// Class LiveLinkInterface.LiveLinkLightRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkLightRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// Size: 0x58 (Inherited: 0x28)
struct ULiveLinkSubjectSettings : UObject {
	UPROPERTY(BlueprintReadWrite) TArray<ULiveLinkFramePreProcessor*> PreProcessors; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; 
	UPROPERTY(BlueprintReadWrite) TArray<ULiveLinkFrameTranslator*> Translators; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkRole* Role; 
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
// Size: 0xd8 (Inherited: 0x28)
struct ULiveLinkVirtualSubject : UObject {
	UPROPERTY(BlueprintReadWrite) ULiveLinkRole* Role; 
	UPROPERTY(BlueprintReadWrite) TArray<FLiveLinkSubjectName> Subjects; 
	UPROPERTY(BlueprintReadWrite) TArray<ULiveLinkFrameTranslator*> FrameTranslators; 
};

