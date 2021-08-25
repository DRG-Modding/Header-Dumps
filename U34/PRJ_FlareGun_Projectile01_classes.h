// BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C
// Size: 0x394 (Inherited: 0x300)
struct APRJ_FlareGun_Projectile01_C : AFlareGunProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UDamageComponent* Damage1; // 0x308(0x08)
	struct UStaticMeshComponent* Arrow; // 0x310(0x08)
	struct USpotLightComponent* SpotLight_Shadow_4; // 0x318(0x08)
	struct USpotLightComponent* SpotLight_Shadow_3; // 0x320(0x08)
	struct USpotLightComponent* SpotLight_Shadow_2; // 0x328(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x330(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x338(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x340(0x08)
	struct UPointLightComponent* PointLight_Dead; // 0x348(0x08)
	struct UPointLightComponent* PointLight_NoShadow; // 0x350(0x08)
	struct UBoxComponent* Box; // 0x358(0x08)
	float Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81; // 0x360(0x04)
	float Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81; // 0x364(0x04)
	char Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81; // 0x368(0x01)
	char UnknownData_369[0x7]; // 0x369(0x07)
	struct UTimelineComponent* Light_Anim; // 0x370(0x08)
	float LightIntensity_Point; // 0x378(0x04)
	float Damage; // 0x37c(0x04)
	struct FScaledEffect DamageEffect; // 0x380(0x10)
	float LightIntensity_Spot; // 0x390(0x04)

	void SpawnImpact(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.SpawnImpact
	void UpdateShadowRadius(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius
	void StartFadeOut(float Time); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut
	void GetHealthBaseComponentFromActor(struct AActor* Actor, struct UHealthComponentBase* Health); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor
	void FallToGround(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround
	void Light_Anim__FinishedFunc(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc
	void Light_Anim__UpdateFunc(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void OnDroppodImpact(struct AMiningPod* DropPod); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact
	void HideAll(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll
	void OnFlareExtinguish(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish
	void OnUpdateShadowRadius(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius
	void ReleaseFlare(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReleaseFlare
	void ActivateFlare(); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ActivateFlare
	void ExecuteUbergraph_PRJ_FlareGun_Projectile01(int32_t EntryPoint); // Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01
};

