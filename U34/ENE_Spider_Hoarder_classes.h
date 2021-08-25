// BlueprintGeneratedClass ENE_Spider_Hoarder.ENE_Spider_Hoarder_C
// Size: 0x594 (Inherited: 0x4b4)
struct AENE_Spider_Hoarder_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UPointLightComponent* PointLight3; // 0x4c0(0x08)
	struct UPointLightComponent* PointLight2; // 0x4c8(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x4d0(0x08)
	struct USkeletalMeshComponent* SK_HoarderHead_A; // 0x4d8(0x08)
	struct USkeletalMeshComponent* SK_HoarderBack_A; // 0x4e0(0x08)
	struct UPointLightComponent* PointLight1; // 0x4e8(0x08)
	struct UAudioComponent* AudioScaredEnd; // 0x4f0(0x08)
	struct UAudioComponent* AudioScaredLoop; // 0x4f8(0x08)
	struct UAudioComponent* AudioScaredBegin; // 0x500(0x08)
	struct UBP_BurrowComponent_C* BP_BurrowComponent; // 0x508(0x08)
	struct USphereComponent* Sphere; // 0x510(0x08)
	float Timeline_2_Light_IntensityB_BC447F934BD2DA41ABECE685727C08B5; // 0x518(0x04)
	float Timeline_2_Light_Intensity_G_BC447F934BD2DA41ABECE685727C08B5; // 0x51c(0x04)
	float Timeline_2_Light_Intensity_R_BC447F934BD2DA41ABECE685727C08B5; // 0x520(0x04)
	char Timeline_2__Direction_BC447F934BD2DA41ABECE685727C08B5; // 0x524(0x01)
	char UnknownData_525[0x3]; // 0x525(0x03)
	struct UTimelineComponent* Timeline_3; // 0x528(0x08)
	float Timeline_0_Light_Intensity_05D4ADFF47FD2761700DC0BF63BC24DC; // 0x530(0x04)
	char Timeline_0__Direction_05D4ADFF47FD2761700DC0BF63BC24DC; // 0x534(0x01)
	char UnknownData_535[0x3]; // 0x535(0x03)
	struct UTimelineComponent* Timeline_1; // 0x538(0x08)
	struct TArray<struct UResourceData*> Loot; // 0x540(0x10)
	struct FVector2D ChunkCountRange; // 0x550(0x08)
	struct TArray<struct UResourceData*> ResourceTypes; // 0x558(0x10)
	float DamageLootDropChance; // 0x568(0x04)
	float DamageLootDropCooldown; // 0x56c(0x04)
	float LastLootDrop; // 0x570(0x04)
	struct FVector2D ChunkValueRange; // 0x574(0x08)
	char UnknownData_57C[0x4]; // 0x57c(0x04)
	struct AActor* TargetActor; // 0x580(0x08)
	bool IsScared; // 0x588(0x01)
	bool IsAlive; // 0x589(0x01)
	char UnknownData_58A[0x2]; // 0x58a(0x02)
	float AlertedSpeed; // 0x58c(0x04)
	int32_t DamageTimes; // 0x590(0x04)

	void UpdateTarget(float MaxDistance, bool OutTargetChanged); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.UpdateTarget
	void HasLoot(bool Has Loot); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.HasLoot
	void Timeline_0__FinishedFunc(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.Timeline_0__UpdateFunc
	void Timeline_2__FinishedFunc(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.Timeline_2__FinishedFunc
	void Timeline_2__UpdateFunc(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.Timeline_2__UpdateFunc
	void OnRagdoll(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.OnRagdoll
	void ReceiveBeginPlay(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.ReceiveBeginPlay
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void DropLoot(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.DropLoot
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrowComplete__DelegateSignature(bool IsEmerging); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrowComplete__DelegateSignature
	void HandleTargetServerside(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.HandleTargetServerside
	void OnUpdateTarget(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.OnUpdateTarget
	void BndEvt__AudioScaredBegin_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.BndEvt__AudioScaredBegin_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature
	void BndEvt__AudioScaredLoop_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.BndEvt__AudioScaredLoop_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature
	void All_ScaredChanged(bool InScared); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.All_ScaredChanged
	void HandleScaredAnim(); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.HandleScaredAnim
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_SeePawnDelegate__DelegateSignature
	void ExecuteUbergraph_ENE_Spider_Hoarder(int32_t EntryPoint); // Function ENE_Spider_Hoarder.ENE_Spider_Hoarder_C.ExecuteUbergraph_ENE_Spider_Hoarder
};

