// BlueprintGeneratedClass EndScreenActorController.EndScreenActorController_C
// Size: 0x170 (Inherited: 0xb0)
struct UEndScreenActorController_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	UPlayerTPAnimInstance* AnimInstance; // 0xb8(0x08)
	float WalkPlayRate; // 0xc0(0x04)
	ABP_MisComp_FXspawner_C* FX; // 0xc8(0x08)
	FRandomStream RandomStream; // 0xd0(0x08)
	AActor* AttachmentClass; // 0xd8(0x08)
	AActor* AttachmentActor; // 0xe0(0x08)
	float PosePlayRate; // 0xe8(0x04)
	FTransform SpawnTransfrom; // 0xf0(0x30)
	bool IsLooping; // 0x120(0x01)
	FEndScreenMove ActiveMoveSet; // 0x128(0x48)

	void Reset();
	void SpawnAttachmentIfNeeded();
	void Cleanup();
	void InitFXLights(FTransform SpawnTransform, bool Survived);
	void RandomAnimElement(TArray<UAnimSequence*> Array, UAnimSequence* Output);
	void ReceiveBeginPlay();
	void Play(APlayerCharacter* PlayerCharacter, bool SurvivedInPod, FTransform SpawnTransform, FEndScreenMove ESMoveSet, int32_t Seed);
	void PoseFinished(UAnimMontage* Montage, bool bInterrupted);
	void BreakFinished(UAnimMontage* Montage, bool bInterrupted);
	void WalkFinished(UAnimMontage* Montage, bool bInterrupted);
	void PropPoseDone(UAnimMontage* Montage, bool bInterrupted);
	void CustomEvent_1(UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_EndScreenActorController(int32_t EntryPoint);
};

