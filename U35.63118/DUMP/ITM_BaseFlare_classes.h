// BlueprintGeneratedClass ITM_BaseFlare.ITM_BaseFlare_C
// Size: 0x32c (Inherited: 0x2c0)
struct AITM_BaseFlare_C : AFlare {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	UPointLightComponent* Light_AfterGlow; // 0x2c8(0x08)
	UPointLightComponent* Light_NoShadow; // 0x2d0(0x08)
	USpotLightComponent* SpotLight_Shadow_4; // 0x2d8(0x08)
	USpotLightComponent* SpotLight_Shadow_3; // 0x2e0(0x08)
	USpotLightComponent* SpotLight_Shadow_2; // 0x2e8(0x08)
	UUpgradableGearComponent* UpgradableGear; // 0x2f0(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x2f8(0x08)
	UStaticMeshComponent* StaticMesh; // 0x300(0x08)
	UBoxComponent* Box; // 0x308(0x08)
	float Timeline_0_BrightnessShadows_14DB2CD947ED9EE06017768CF842D625; // 0x310(0x04)
	float Timeline_0_Brightness_14DB2CD947ED9EE06017768CF842D625; // 0x314(0x04)
	enum class ETimelineDirection Timeline_0__Direction_14DB2CD947ED9EE06017768CF842D625; // 0x318(0x01)
	UTimelineComponent* Timeline_1; // 0x320(0x08)
	float BaseIntensity; // 0x328(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UpdateShadowRadius();
	void StartFadeOut(float Time);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void OnFlareExtinguish();
	void OnFlareIgnite();
	void OnUpdateShadowRadius();
	void ActivateFlare();
	void ExecuteUbergraph_ITM_BaseFlare(int32_t EntryPoint);
};

