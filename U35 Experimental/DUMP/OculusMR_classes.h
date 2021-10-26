// Class OculusMR.OculusMR_BoundaryActor
// Size: 0x228 (Inherited: 0x220)
struct AOculusMR_BoundaryActor : AActor {
	UOculusMR_BoundaryMeshComponent* BoundaryMeshComponent; // 0x220(0x08)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
// Size: 0x440 (Inherited: 0x420)
struct UOculusMR_BoundaryMeshComponent : UMeshComponent {
	enum class EOculusMR_BoundaryType BoundaryType; // 0x418(0x01)
	float BottomZ; // 0x41c(0x04)
	float TopZ; // 0x420(0x04)
	UMaterial* WhiteMaterial; // 0x428(0x08)
	AOculusMR_CastingCameraActor* CastingCameraActor; // 0x430(0x08)
};

// Class OculusMR.OculusMR_CastingCameraActor
// Size: 0x330 (Inherited: 0x238)
struct AOculusMR_CastingCameraActor : ASceneCapture2D {
	UVRNotificationsComponent* VRNotificationComponent; // 0x238(0x08)
	UTexture2D* CameraColorTexture; // 0x240(0x08)
	UTexture2D* CameraDepthTexture; // 0x248(0x08)
	UOculusMR_PlaneMeshComponent* PlaneMeshComponent; // 0x250(0x08)
	UMaterial* ChromaKeyMaterial; // 0x258(0x08)
	UMaterial* ChromaKeyLitMaterial; // 0x260(0x08)
	UMaterial* OpaqueColoredMaterial; // 0x268(0x08)
	UMaterialInstanceDynamic* ChromaKeyMaterialInstance; // 0x270(0x08)
	UMaterialInstanceDynamic* ChromaKeyLitMaterialInstance; // 0x278(0x08)
	UMaterialInstanceDynamic* CameraFrameMaterialInstance; // 0x280(0x08)
	UMaterialInstanceDynamic* BackdropMaterialInstance; // 0x288(0x08)
	AOculusMR_BoundaryActor* BoundaryActor; // 0x290(0x08)
	ASceneCapture2D* BoundarySceneCaptureActor; // 0x298(0x08)
	UTexture2D* DefaultTexture_White; // 0x2a0(0x08)
	TArray<UTextureRenderTarget2D*> BackgroundRenderTargets; // 0x2f8(0x10)
	ASceneCapture2D* ForegroundCaptureActor; // 0x308(0x08)
	TArray<UTextureRenderTarget2D*> ForegroundRenderTargets; // 0x310(0x10)
	UOculusMR_Settings* MRSettings; // 0x320(0x08)
	UOculusMR_State* MRState; // 0x328(0x08)
};

// Class OculusMR.OculusMR_PlaneMeshComponent
// Size: 0x430 (Inherited: 0x420)
struct UOculusMR_PlaneMeshComponent : UMeshComponent {

	bool SetCustomMeshTriangles(TArray<FOculusMR_PlaneMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<FOculusMR_PlaneMeshTriangle> Triangles);
};

// Class OculusMR.OculusMR_Settings
// Size: 0xc8 (Inherited: 0x28)
struct UOculusMR_Settings : UObject {
	enum class EOculusMR_ClippingReference ClippingReference; // 0x28(0x01)
	bool bUseTrackedCameraResolution; // 0x29(0x01)
	int32_t WidthPerView; // 0x2c(0x04)
	int32_t HeightPerView; // 0x30(0x04)
	float CastingLatency; // 0x34(0x04)
	FColor BackdropColor; // 0x38(0x04)
	float HandPoseStateLatency; // 0x3c(0x04)
	FColor ChromaKeyColor; // 0x40(0x04)
	float ChromaKeySimilarity; // 0x44(0x04)
	float ChromaKeySmoothRange; // 0x48(0x04)
	float ChromaKeySpillRange; // 0x4c(0x04)
	enum class EOculusMR_VirtualGreenScreenType VirtualGreenScreenType; // 0x50(0x01)
	float DynamicLightingDepthSmoothFactor; // 0x54(0x04)
	float DynamicLightingDepthVariationClampingValue; // 0x58(0x04)
	enum class EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects; // 0x5c(0x01)
	bool bIsCasting; // 0x5d(0x01)
	enum class EOculusMR_CompositionMethod CompositionMethod; // 0x5e(0x01)
	enum class EOculusMR_CameraDeviceEnum CapturingCamera; // 0x5f(0x01)
	bool bUseDynamicLighting; // 0x60(0x01)
	enum class EOculusMR_DepthQuality DepthQuality; // 0x61(0x01)

	void SetUseDynamicLighting(bool Val);
	void SetIsCasting(bool Val);
	void SetDepthQuality(enum class EOculusMR_DepthQuality Val);
	void SetCompositionMethod(enum class EOculusMR_CompositionMethod Val);
	void SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val);
	void SaveToIni();
	void LoadFromIni();
	bool GetUseDynamicLighting();
	bool GetIsCasting();
	enum class EOculusMR_DepthQuality GetDepthQuality();
	enum class EOculusMR_CompositionMethod GetCompositionMethod();
	enum class EOculusMR_CameraDeviceEnum GetCapturingCamera();
	int32_t GetBindToTrackedCameraIndex();
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex);
};

// Class OculusMR.OculusMR_State
// Size: 0xb0 (Inherited: 0x28)
struct UOculusMR_State : UObject {
	FTrackedCamera TrackedCamera; // 0x28(0x70)
	USceneComponent* TrackingReferenceComponent; // 0x98(0x08)
	double ScalingFactor; // 0xa0(0x08)
	bool ChangeCameraStateRequested; // 0xac(0x01)
	bool BindToTrackedCameraIndexRequested; // 0xad(0x01)
};

// Class OculusMR.OculusMRFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusMRFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetTrackingReferenceComponent(USceneComponent* Component);
	bool SetMrcScalingFactor(float ScalingFactor);
	bool IsMrcEnabled();
	bool IsMrcActive();
	USceneComponent* GetTrackingReferenceComponent();
	UOculusMR_Settings* GetOculusMRSettings();
	float GetMrcScalingFactor();
};

