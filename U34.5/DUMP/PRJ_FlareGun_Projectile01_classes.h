// BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C
// Size: 0x394 (Inherited: 0x300)
struct APRJ_FlareGun_Projectile01_C : AFlareGunProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	UDamageComponent* Damage1; // 0x308(0x08)
	UStaticMeshComponent* Arrow; // 0x310(0x08)
	USpotLightComponent* SpotLight_Shadow_4; // 0x318(0x08)
	USpotLightComponent* SpotLight_Shadow_3; // 0x320(0x08)
	USpotLightComponent* SpotLight_Shadow_2; // 0x328(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x330(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x338(0x08)
	UStaticMeshComponent* StaticMesh; // 0x340(0x08)
	UPointLightComponent* PointLight_Dead; // 0x348(0x08)
	UPointLightComponent* PointLight_NoShadow; // 0x350(0x08)
	UBoxComponent* Box; // 0x358(0x08)
	float Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81; // 0x360(0x04)
	float Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81; // 0x364(0x04)
	enum class ETimelineDirection Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81; // 0x368(0x01)
	UTimelineComponent* Light_Anim; // 0x370(0x08)
	float LightIntensity_Point; // 0x378(0x04)
	float Damage; // 0x37c(0x04)
	FScaledEffect DamageEffect; // 0x380(0x10)
	float LightIntensity_Spot; // 0x390(0x04)

	void SpawnImpact();
	void UpdateShadowRadius();
	void StartFadeOut(float Time);
	void GetHealthBaseComponentFromActor(AActor* Actor, UHealthComponentBase* Health);
	void FallToGround();
	void Light_Anim__FinishedFunc();
	void Light_Anim__UpdateFunc();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void OnDroppodImpact(AMiningPod* DropPod);
	void HideAll();
	void OnFlareExtinguish();
	void OnUpdateShadowRadius();
	void ReleaseFlare();
	void ActivateFlare();
	void ExecuteUbergraph_PRJ_FlareGun_Projectile01(int32_t EntryPoint);
};

