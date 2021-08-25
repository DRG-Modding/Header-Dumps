// BlueprintGeneratedClass BP_Refinery_Depositor.BP_Refinery_Depositor_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Refinery_Depositor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* AudioDepositing1; // 0x228(0x08)
	struct UCapsuleComponent* OpenTrigger; // 0x230(0x08)
	struct UResourceBank* ResourceBank; // 0x238(0x08)
	struct UCapsuleComponent* ResourceBankCollider; // 0x240(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct TArray<struct APlayerCharacter*> NearbyPlayers; // 0x258(0x10)
	bool DepositorOpen; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct FMulticastInlineDelegate OnDepositorOpenChanged; // 0x270(0x10)

	void UserConstructionScript(); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.ReceiveBeginPlay
	void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void UpdateOpenAnim(); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.UpdateOpenAnim
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
	void ExecuteUbergraph_BP_Refinery_Depositor(int32_t EntryPoint); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.ExecuteUbergraph_BP_Refinery_Depositor
	void OnDepositorOpenChanged__DelegateSignature(bool InOpen); // Function BP_Refinery_Depositor.BP_Refinery_Depositor_C.OnDepositorOpenChanged__DelegateSignature
};

