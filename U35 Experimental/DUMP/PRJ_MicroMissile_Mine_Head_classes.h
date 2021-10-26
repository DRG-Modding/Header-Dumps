// BlueprintGeneratedClass PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C
// Size: 0x4c8 (Inherited: 0x3d4)
struct APRJ_MicroMissile_Mine_Head_C : APRJ_MicroMissile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	UBoxComponent* HitCollider; // 0x3e0(0x08)
	UEnemyHealthComponent* HealthComponent; // 0x3e8(0x08)
	UStaticMeshComponent* TriggerAreaDisplay; // 0x3f0(0x08)
	USphereComponent* Trigger_Sphere; // 0x3f8(0x08)
	float Timeline_1_Scale_6C1068EA404E3A854E26539704AD5A69; // 0x400(0x04)
	enum class ETimelineDirection Timeline_1__Direction_6C1068EA404E3A854E26539704AD5A69; // 0x404(0x01)
	UTimelineComponent* Timeline_2; // 0x408(0x08)
	bool Triggered; // 0x410(0x01)
	FHitResult LastHitResult; // 0x414(0x88)
	float LifeTime; // 0x49c(0x04)
	FGameplayTagContainer EnemyTag; // 0x4a0(0x20)
	float MineExplosionRadiusMultiplier; // 0x4c0(0x04)
	float MineExplosionDamageMultiplier; // 0x4c4(0x04)

	void OnRep_Triggered();
	void UserConstructionScript();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnInitialized();
	void DoTriggerAreaDisplay();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void TriggerExplosion();
	void BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ExecuteUbergraph_PRJ_MicroMissile_Mine_Head(int32_t EntryPoint);
};

