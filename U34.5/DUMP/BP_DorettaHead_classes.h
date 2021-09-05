// BlueprintGeneratedClass BP_DorettaHead.BP_DorettaHead_C
// Size: 0x2e8 (Inherited: 0x258)
struct ABP_DorettaHead_C : ADorrettaHead {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UNiagaraComponent* NiagaraNoBlinking; // 0x260(0x08)
	USphereComponent* SphereTrigger; // 0x268(0x08)
	UNiagaraComponent* Niagara; // 0x270(0x08)
	UStaticMeshComponent* SM_Doretta; // 0x278(0x08)
	USceneComponent* DorettaHeadRoot; // 0x280(0x08)
	USceneComponent* SoundSpawnPoint; // 0x288(0x08)
	USphereComponent* Sphere1; // 0x290(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x298(0x08)
	UBoxComponent* Box; // 0x2a0(0x08)
	USphereComponent* SphereUsable; // 0x2a8(0x08)
	FVector JIggle_Jiggle_4D1EF936403F1B634C819C8AC37A7DE1; // 0x2b0(0x0c)
	enum class ETimelineDirection JIggle__Direction_4D1EF936403F1B634C819C8AC37A7DE1; // 0x2bc(0x01)
	UTimelineComponent* Jiggle; // 0x2c0(0x08)
	FVector ThrowForce; // 0x2c8(0x0c)
	bool IsPickedUp; // 0x2d4(0x01)
	float LastSoundPlayTime; // 0x2d8(0x04)
	float MinTimeBetweenSounds; // 0x2dc(0x04)
	USoundCue* ImpactSound; // 0x2e0(0x08)

	void JIggle__FinishedFunc();
	void JIggle__UpdateFunc();
	void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
	void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void Throw(FVector force);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void PlayDorettaSound(USoundBase* Sound);
	void ReceiveBeginPlay();
	void PlaySound();
	void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ExecuteUbergraph_BP_DorettaHead(int32_t EntryPoint);
};

