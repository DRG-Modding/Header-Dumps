// BlueprintGeneratedClass ENE_Spider_Hoarder.ENE_Spider_Hoarder_C
// Size: 0x594 (Inherited: 0x4b4)
struct AENE_Spider_Hoarder_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPhysicalAnimationComponent* PhysicalAnimation; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_HoarderHead_A; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_HoarderBack_A; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioScaredEnd; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioScaredLoop; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioScaredBegin; 
	UPROPERTY(BlueprintReadWrite) UBP_BurrowComponent_C* BP_BurrowComponent; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) float Timeline_2_Light_IntensityB_BC447F934BD2DA41ABECE685727C08B5; 
	UPROPERTY(BlueprintReadWrite) float Timeline_2_Light_Intensity_G_BC447F934BD2DA41ABECE685727C08B5; 
	UPROPERTY(BlueprintReadWrite) float Timeline_2_Light_Intensity_R_BC447F934BD2DA41ABECE685727C08B5; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_2__Direction_BC447F934BD2DA41ABECE685727C08B5; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_3; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_Light_Intensity_05D4ADFF47FD2761700DC0BF63BC24DC; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_05D4ADFF47FD2761700DC0BF63BC24DC; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) TArray<UResourceData*> Loot; 
	UPROPERTY(BlueprintReadWrite) FVector2D ChunkCountRange; 
	UPROPERTY(BlueprintReadWrite) TArray<UResourceData*> ResourceTypes; 
	UPROPERTY(BlueprintReadWrite) float DamageLootDropChance; 
	UPROPERTY(BlueprintReadWrite) float DamageLootDropCooldown; 
	UPROPERTY(BlueprintReadWrite) float LastLootDrop; 
	UPROPERTY(BlueprintReadWrite) FVector2D ChunkValueRange; 
	UPROPERTY(BlueprintReadWrite) AActor* TargetActor; 
	UPROPERTY(BlueprintReadWrite) bool IsScared; 
	UPROPERTY(BlueprintReadWrite) bool IsAlive; 
	UPROPERTY(BlueprintReadWrite) float AlertedSpeed; 
	UPROPERTY(BlueprintReadWrite) int32_t DamageTimes; 

	UFUNCTION(BlueprintCallable) void UpdateTarget(float MaxDistance, bool OutTargetChanged);
	UFUNCTION(BlueprintCallable) void HasLoot(bool Has Loot);
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_2__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_2__UpdateFunc();
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void DropLoot();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrowComplete__DelegateSignature(bool IsEmerging);
	UFUNCTION(BlueprintCallable) void HandleTargetServerside();
	UFUNCTION(BlueprintCallable) void OnUpdateTarget();
	UFUNCTION(BlueprintCallable) void BndEvt__AudioScaredBegin_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__AudioScaredLoop_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature();
	UFUNCTION(BlueprintCallable) void All_ScaredChanged(bool InScared);
	UFUNCTION(BlueprintCallable) void HandleScaredAnim();
	UFUNCTION(BlueprintCallable) void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Hoarder(int32_t EntryPoint);
};

