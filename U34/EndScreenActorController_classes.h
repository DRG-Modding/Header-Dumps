// BlueprintGeneratedClass EndScreenActorController.EndScreenActorController_C
// Size: 0x170 (Inherited: 0xb0)
struct UEndScreenActorController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPlayerTPAnimInstance* AnimInstance; // 0xb8(0x08)
	float WalkPlayRate; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	struct ABP_MisComp_FXspawner_C* FX; // 0xc8(0x08)
	struct FRandomStream RandomStream; // 0xd0(0x08)
	struct AActor* AttachmentClass; // 0xd8(0x08)
	struct AActor* AttachmentActor; // 0xe0(0x08)
	float PosePlayRate; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct FTransform SpawnTransfrom; // 0xf0(0x30)
	bool IsLooping; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)
	struct FEndScreenMove ActiveMoveSet; // 0x128(0x48)

	void Reset(); // Function EndScreenActorController.EndScreenActorController_C.Reset
	void SpawnAttachmentIfNeeded(); // Function EndScreenActorController.EndScreenActorController_C.SpawnAttachmentIfNeeded
	void Cleanup(); // Function EndScreenActorController.EndScreenActorController_C.Cleanup
	void InitFXLights(struct FTransform SpawnTransform, bool Survived); // Function EndScreenActorController.EndScreenActorController_C.InitFXLights
	void RandomAnimElement(struct TArray<struct UAnimSequence*> Array, struct UAnimSequence* Output); // Function EndScreenActorController.EndScreenActorController_C.RandomAnimElement
	void ReceiveBeginPlay(); // Function EndScreenActorController.EndScreenActorController_C.ReceiveBeginPlay
	void Play(struct APlayerCharacter* PlayerCharacter, bool SurvivedInPod, struct FTransform SpawnTransform, struct FEndScreenMove ESMoveSet, int32_t Seed); // Function EndScreenActorController.EndScreenActorController_C.Play
	void PoseFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.PoseFinished
	void BreakFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.BreakFinished
	void WalkFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.WalkFinished
	void PropPoseDone(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.PropPoseDone
	void CustomEvent_1(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.CustomEvent_1
	void ExecuteUbergraph_EndScreenActorController(int32_t EntryPoint); // Function EndScreenActorController.EndScreenActorController_C.ExecuteUbergraph_EndScreenActorController
};

