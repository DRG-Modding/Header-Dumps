// BlueprintGeneratedClass BP_Refinery_Depositor.BP_Refinery_Depositor_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Refinery_Depositor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAudioComponent* AudioDepositing1; // 0x228(0x08)
	UCapsuleComponent* OpenTrigger; // 0x230(0x08)
	UResourceBank* ResourceBank; // 0x238(0x08)
	UCapsuleComponent* ResourceBankCollider; // 0x240(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	TArray<APlayerCharacter*> NearbyPlayers; // 0x258(0x10)
	bool DepositorOpen; // 0x268(0x01)
	FMulticastInlineDelegate OnDepositorOpenChanged; // 0x270(0x10)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void UpdateOpenAnim();
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_Refinery_Depositor(int32_t EntryPoint);
	void OnDepositorOpenChanged__DelegateSignature(bool InOpen);
};

