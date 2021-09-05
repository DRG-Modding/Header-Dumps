// BlueprintGeneratedClass PRJ_Bomber_Fire.PRJ_Bomber_Fire_C
// Size: 0x374 (Inherited: 0x330)
struct APRJ_Bomber_Fire_C : APRJ_BomberGoo_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	UPointLightComponent* AreaLight; // 0x338(0x08)
	FMulticastInlineDelegate NewEventDispatcher_0_1; // 0x340(0x10)
	bool HasExploded; // 0x350(0x01)
	UAudioComponent* AlarmSound; // 0x358(0x08)
	UParticleSystem* Explosion Particles; // 0x360(0x08)
	USoundBase* ExplosionSound; // 0x368(0x08)
	float TimeToExplode; // 0x370(0x04)

	void OnRep_HasExploded();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PRJ_Bomber_Fire(int32_t EntryPoint);
	void NewEventDispatcher_0_0__DelegateSignature();
};

