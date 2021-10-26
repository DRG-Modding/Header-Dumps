// BlueprintGeneratedClass BP_HackingPod.BP_HackingPod_C
// Size: 0x504 (Inherited: 0x2e0)
struct ABP_HackingPod_C : AFacilityHackingPod {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	UChildActorComponent* BP_OxygenTankSound; // 0x2e8(0x08)
	UChildActorComponent* BP_OxygenTank1; // 0x2f0(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x2f8(0x08)
	UChildActorComponent* BP_OxygenTank; // 0x300(0x08)
	USphereComponent* TriggerOnOffOutline; // 0x308(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x310(0x08)
	UBillboardComponent* JunkSpawnPoint; // 0x318(0x08)
	UPointLightComponent* PointLight1; // 0x320(0x08)
	UPointLightComponent* PointLight3; // 0x328(0x08)
	UPointLightComponent* PointLight2; // 0x330(0x08)
	UPointLightComponent* PointLight; // 0x338(0x08)
	USphereComponent* Sphere; // 0x340(0x08)
	USphereComponent* PettingUseSphere; // 0x348(0x08)
	USingleUsableComponent* PettingUsable; // 0x350(0x08)
	USkeletalMeshComponent* Drill; // 0x358(0x08)
	UAudioComponent* HackingPodHackingIdle; // 0x360(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x368(0x08)
	UPointLightComponent* Light_FanRGB03; // 0x370(0x08)
	UPointLightComponent* Light_FanRGB02; // 0x378(0x08)
	UPointLightComponent* Light_FanRGB01; // 0x380(0x08)
	UCapsuleComponent* BodyCollision; // 0x388(0x08)
	UPointLightComponent* Light_Monitor; // 0x390(0x08)
	UWidgetComponent* Widget_MonitorTop; // 0x398(0x08)
	UWidgetComponent* Widget_MonitorRight; // 0x3a0(0x08)
	UWidgetComponent* Widget_MonitorMiddle; // 0x3a8(0x08)
	UWidgetComponent* Widget_MonitorLeft; // 0x3b0(0x08)
	UWidgetComponent* UseButtonWidget; // 0x3b8(0x08)
	UAutoCarverComponent* AutoCarver; // 0x3c0(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x3c8(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x3d0(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3d8(0x08)
	UOutlineComponent* outline; // 0x3e0(0x08)
	UChildActorComponent* DispenserActor; // 0x3e8(0x08)
	USkeletalMeshComponent* Base; // 0x3f0(0x08)
	USingleUsableComponent* ActivateUsable; // 0x3f8(0x08)
	USingleUsableComponent* ReviveUsable; // 0x400(0x08)
	UCapsuleComponent* UseCapsule; // 0x408(0x08)
	UObjectAttackerPositioning* ObjectAttackerPositioning; // 0x410(0x08)
	UFriendlyHealthComponent* FriendlyHealth; // 0x418(0x08)
	UTetherComponent* Tether; // 0x420(0x08)
	TArray<AActor*> ChildTethers; // 0x428(0x10)
	TArray<FLinearColor> Fans_StartColor; // 0x438(0x10)
	TArray<FLinearColor> Fans_EndColor; // 0x448(0x10)
	TArray<FLinearColor> Fans_ColorArray; // 0x458(0x10)
	TArray<FLinearColor> LightColors; // 0x468(0x10)
	FTimerHandle ResizeCarverTimer; // 0x478(0x08)
	bool IsFacilityMission; // 0x480(0x01)
	float OutlineTime; // 0x484(0x04)
	float LightMonitorIntensity; // 0x488(0x04)
	FMulticastInlineDelegate OpenChanged; // 0x490(0x10)
	bool Open; // 0x4a0(0x01)
	bool HackingStarted; // 0x4a1(0x01)
	bool HackingOver; // 0x4a2(0x01)
	enum class ETetherDispenserState DispenserState; // 0x4a3(0x01)
	FMulticastInlineDelegate StateChanged; // 0x4a8(0x10)
	USingleUsableComponent* NewVar_1; // 0x4b8(0x08)
	UParticleSystemComponent* ThrusterParticles; // 0x4c0(0x08)
	UAudioComponent* ThrusterSound; // 0x4c8(0x08)
	TArray<APlayerCharacter*> PlayersInside; // 0x4d0(0x10)
	bool HasActivated; // 0x4e0(0x01)
	UMaterialInstanceDynamic* CornerColors; // 0x4e8(0x08)
	TArray<AActor*> JunkActors; // 0x4f0(0x10)
	int32_t MaxJunkSpawns; // 0x500(0x04)

	bool GetIsTargetable();
	FVector GetTargetCenterMass();
	UHealthComponentBase* GetTargetHealthComponent();
	void EnableScreens(bool ScreensActive);
	void FanColorsIntact(bool FansIntact);
	void HackingInProgress(bool NewParam);
	void ReconnectTethers();
	void SetUsable(bool Usable);
	void GetDispenser(ABP_TetherDispenser_C* AsBP Tether Dispenser);
	void GetIgnoreTethers(TArray<AActor*> ChildTethers);
	void UserConstructionScript();
	void OnTick_4437D92344C73CCB9F96AB832CABCA51(float DeltaTime, float NormalizedTime);
	void Completed_4437D92344C73CCB9F96AB832CABCA51(float DeltaTime, float NormalizedTime);
	void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
	void ReceiveBeginPlay();
	void OnDroppodImpact();
	void BndEvt__Tether_K2Node_ComponentBoundEvent_0_TeherMessage_Delegate__DelegateSignature(FName Message);
	void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
	void BndEvt__ActivateUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void SetLightColor(int32_t Index);
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_7_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
	void ManageOutlines();
	void OnDropStarted();
	void DeployAnimations();
	void OnDroppodCloseToImpact();
	void ResizeCarver();
	void UpdateUseIcon();
	void BndEvt__ReviveUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
	void StartFanColoring();
	void BndEvt__ActivateUsable_K2Node_ComponentBoundEvent_9_UsableChangedSignature__DelegateSignature(bool CanUse);
	void TakeOff();
	void BndEvt__PettingUsable_K2Node_ComponentBoundEvent_4_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnBoscoSalute_Event_1(APlayerCharacter* ShoutingPlayer);
	void Pet();
	void OnEnterState(enum class EHackingPodState NextState);
	void OnExitState(enum class EHackingPodState oldState);
	void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ExecuteUbergraph_BP_HackingPod(int32_t EntryPoint);
	void StateChanged__DelegateSignature(enum class ETetherDispenserState State);
	void OpenChanged__DelegateSignature(bool Open);
};

