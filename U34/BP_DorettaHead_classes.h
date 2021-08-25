// BlueprintGeneratedClass BP_DorettaHead.BP_DorettaHead_C
// Size: 0x2e8 (Inherited: 0x258)
struct ABP_DorettaHead_C : ADorrettaHead {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UNiagaraComponent* NiagaraNoBlinking; // 0x260(0x08)
	struct USphereComponent* SphereTrigger; // 0x268(0x08)
	struct UNiagaraComponent* Niagara; // 0x270(0x08)
	struct UStaticMeshComponent* SM_Doretta; // 0x278(0x08)
	struct USceneComponent* DorettaHeadRoot; // 0x280(0x08)
	struct USceneComponent* SoundSpawnPoint; // 0x288(0x08)
	struct USphereComponent* Sphere1; // 0x290(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x298(0x08)
	struct UBoxComponent* Box; // 0x2a0(0x08)
	struct USphereComponent* SphereUsable; // 0x2a8(0x08)
	struct FVector JIggle_Jiggle_4D1EF936403F1B634C819C8AC37A7DE1; // 0x2b0(0x0c)
	char JIggle__Direction_4D1EF936403F1B634C819C8AC37A7DE1; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* Jiggle; // 0x2c0(0x08)
	struct FVector ThrowForce; // 0x2c8(0x0c)
	bool IsPickedUp; // 0x2d4(0x01)
	char UnknownData_2D5[0x3]; // 0x2d5(0x03)
	float LastSoundPlayTime; // 0x2d8(0x04)
	float MinTimeBetweenSounds; // 0x2dc(0x04)
	struct USoundCue* ImpactSound; // 0x2e0(0x08)

	void JIggle__FinishedFunc(); // Function BP_DorettaHead.BP_DorettaHead_C.JIggle__FinishedFunc
	void JIggle__UpdateFunc(); // Function BP_DorettaHead.BP_DorettaHead_C.JIggle__UpdateFunc
	void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature(); // Function BP_DorettaHead.BP_DorettaHead_C.BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature
	void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature(); // Function BP_DorettaHead.BP_DorettaHead_C.BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	void Throw(struct FVector force); // Function BP_DorettaHead.BP_DorettaHead_C.Throw
	void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_DorettaHead.BP_DorettaHead_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_DorettaHead.BP_DorettaHead_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	void PlayDorettaSound(struct USoundBase* Sound); // Function BP_DorettaHead.BP_DorettaHead_C.PlayDorettaSound
	void ReceiveBeginPlay(); // Function BP_DorettaHead.BP_DorettaHead_C.ReceiveBeginPlay
	void PlaySound(); // Function BP_DorettaHead.BP_DorettaHead_C.PlaySound
	void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_DorettaHead.BP_DorettaHead_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
	void ExecuteUbergraph_BP_DorettaHead(int32_t EntryPoint); // Function BP_DorettaHead.BP_DorettaHead_C.ExecuteUbergraph_BP_DorettaHead
};

