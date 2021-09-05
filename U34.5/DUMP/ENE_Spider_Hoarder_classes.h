// BlueprintGeneratedClass ENE_Spider_Hoarder.ENE_Spider_Hoarder_C
// Size: 0x594 (Inherited: 0x4b4)
struct AENE_Spider_Hoarder_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UPointLightComponent* PointLight3; // 0x4c0(0x08)
	UPointLightComponent* PointLight2; // 0x4c8(0x08)
	UPhysicalAnimationComponent* PhysicalAnimation; // 0x4d0(0x08)
	USkeletalMeshComponent* SK_HoarderHead_A; // 0x4d8(0x08)
	USkeletalMeshComponent* SK_HoarderBack_A; // 0x4e0(0x08)
	UPointLightComponent* PointLight1; // 0x4e8(0x08)
	UAudioComponent* AudioScaredEnd; // 0x4f0(0x08)
	UAudioComponent* AudioScaredLoop; // 0x4f8(0x08)
	UAudioComponent* AudioScaredBegin; // 0x500(0x08)
	UBP_BurrowComponent_C* BP_BurrowComponent; // 0x508(0x08)
	USphereComponent* Sphere; // 0x510(0x08)
	float Timeline_2_Light_IntensityB_BC447F934BD2DA41ABECE685727C08B5; // 0x518(0x04)
	float Timeline_2_Light_Intensity_G_BC447F934BD2DA41ABECE685727C08B5; // 0x51c(0x04)
	float Timeline_2_Light_Intensity_R_BC447F934BD2DA41ABECE685727C08B5; // 0x520(0x04)
	enum class ETimelineDirection Timeline_2__Direction_BC447F934BD2DA41ABECE685727C08B5; // 0x524(0x01)
	UTimelineComponent* Timeline_3; // 0x528(0x08)
	float Timeline_0_Light_Intensity_05D4ADFF47FD2761700DC0BF63BC24DC; // 0x530(0x04)
	enum class ETimelineDirection Timeline_0__Direction_05D4ADFF47FD2761700DC0BF63BC24DC; // 0x534(0x01)
	UTimelineComponent* Timeline_1; // 0x538(0x08)
	TArray<UResourceData*> Loot; // 0x540(0x10)
	FVector2D ChunkCountRange; // 0x550(0x08)
	TArray<UResourceData*> ResourceTypes; // 0x558(0x10)
	float DamageLootDropChance; // 0x568(0x04)
	float DamageLootDropCooldown; // 0x56c(0x04)
	float LastLootDrop; // 0x570(0x04)
	FVector2D ChunkValueRange; // 0x574(0x08)
	AActor* TargetActor; // 0x580(0x08)
	bool IsScared; // 0x588(0x01)
	bool IsAlive; // 0x589(0x01)
	float AlertedSpeed; // 0x58c(0x04)
	int32_t DamageTimes; // 0x590(0x04)

	void UpdateTarget(float MaxDistance, bool OutTargetChanged);
	void HasLoot(bool Has Loot);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnRagdoll();
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void DropLoot();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrowComplete__DelegateSignature(bool IsEmerging);
	void HandleTargetServerside();
	void OnUpdateTarget();
	void BndEvt__AudioScaredBegin_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
	void BndEvt__AudioScaredLoop_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature();
	void All_ScaredChanged(bool InScared);
	void HandleScaredAnim();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void ExecuteUbergraph_ENE_Spider_Hoarder(int32_t EntryPoint);
};

