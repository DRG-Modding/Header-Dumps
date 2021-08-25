// BlueprintGeneratedClass ITM_BaseFlare.ITM_BaseFlare_C
// Size: 0x31c (Inherited: 0x2b0)
struct AITM_BaseFlare_C : AFlare {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UPointLightComponent* Light_AfterGlow; // 0x2b8(0x08)
	struct UPointLightComponent* Light_NoShadow; // 0x2c0(0x08)
	struct USpotLightComponent* SpotLight_Shadow_4; // 0x2c8(0x08)
	struct USpotLightComponent* SpotLight_Shadow_3; // 0x2d0(0x08)
	struct USpotLightComponent* SpotLight_Shadow_2; // 0x2d8(0x08)
	struct UUpgradableGearComponent* UpgradableGear; // 0x2e0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x2e8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2f0(0x08)
	struct UBoxComponent* Box; // 0x2f8(0x08)
	float Timeline_0_BrightnessShadows_14DB2CD947ED9EE06017768CF842D625; // 0x300(0x04)
	float Timeline_0_Brightness_14DB2CD947ED9EE06017768CF842D625; // 0x304(0x04)
	char Timeline_0__Direction_14DB2CD947ED9EE06017768CF842D625; // 0x308(0x01)
	char UnknownData_309[0x7]; // 0x309(0x07)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)
	float BaseIntensity; // 0x318(0x04)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry
	void UpdateShadowRadius(); // Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius
	void StartFadeOut(float Time); // Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut
	void Timeline_0__FinishedFunc(); // Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay
	void OnFlareExtinguish(); // Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish
	void OnFlareIgnite(); // Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite
	void OnUpdateShadowRadius(); // Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius
	void ActivateFlare(); // Function ITM_BaseFlare.ITM_BaseFlare_C.ActivateFlare
	void ExecuteUbergraph_ITM_BaseFlare(int32_t EntryPoint); // Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare
};

