// BlueprintGeneratedClass PRJ_Bomber_Fire.PRJ_Bomber_Fire_C
// Size: 0x374 (Inherited: 0x330)
struct APRJ_Bomber_Fire_C : APRJ_BomberGoo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPointLightComponent* AreaLight; // 0x338(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_0_1; // 0x340(0x10)
	bool HasExploded; // 0x350(0x01)
	char UnknownData_351[0x7]; // 0x351(0x07)
	struct UAudioComponent* AlarmSound; // 0x358(0x08)
	struct UParticleSystem* Explosion Particles; // 0x360(0x08)
	struct USoundBase* ExplosionSound; // 0x368(0x08)
	float TimeToExplode; // 0x370(0x04)

	void OnRep_HasExploded(); // Function PRJ_Bomber_Fire.PRJ_Bomber_Fire_C.OnRep_HasExploded
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Bomber_Fire.PRJ_Bomber_Fire_C.OnImpacted
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function PRJ_Bomber_Fire.PRJ_Bomber_Fire_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	void ReceiveBeginPlay(); // Function PRJ_Bomber_Fire.PRJ_Bomber_Fire_C.ReceiveBeginPlay
	void ExecuteUbergraph_PRJ_Bomber_Fire(int32_t EntryPoint); // Function PRJ_Bomber_Fire.PRJ_Bomber_Fire_C.ExecuteUbergraph_PRJ_Bomber_Fire
	void NewEventDispatcher_0_0__DelegateSignature(); // Function PRJ_Bomber_Fire.PRJ_Bomber_Fire_C.NewEventDispatcher_0_0__DelegateSignature
};

