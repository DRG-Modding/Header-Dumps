// BlueprintGeneratedClass EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C
// Size: 0x450 (Inherited: 0x358)
struct AEVENT_DropPodDefense_Base_C : AGameEvent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UAudioComponent* Audio; // 0x360(0x08)
	struct UStaticMeshComponent* SphereInner1; // 0x368(0x08)
	struct UStaticMeshComponent* SphereInner2; // 0x370(0x08)
	struct USphereComponent* Sphere; // 0x378(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x380(0x08)
	float Progress; // 0x388(0x04)
	float Duration; // 0x38c(0x04)
	float InitialProgress; // 0x390(0x04)
	char UnknownData_394[0x4]; // 0x394(0x04)
	struct TArray<struct APlayerCharacter*> DefendingPlayers; // 0x398(0x10)
	struct FMulticastInlineDelegate DefendSucceded; // 0x3a8(0x10)
	struct FMulticastInlineDelegate DefendFailed; // 0x3b8(0x10)
	struct FMulticastInlineDelegate ProgressUpdated; // 0x3c8(0x10)
	struct UEWC_Salvage_Defend_C* Wave; // 0x3d8(0x08)
	struct UHUD_Salvage_Defend_C* Event Widget; // 0x3e0(0x08)
	struct FText EventText; // 0x3e8(0x18)
	float ExtraDefenderBonus; // 0x400(0x04)
	int32_t DefendingPlayerCount; // 0x404(0x04)
	struct FMulticastInlineDelegate DefenderCountUpdated; // 0x408(0x10)
	struct FText EventSuccedText; // 0x418(0x18)
	struct UDialogDataAsset* EventStartShout; // 0x430(0x08)
	struct UDialogDataAsset* EventFailWarningShout; // 0x438(0x08)
	struct UDialogDataAsset* 75pProgressShout; // 0x440(0x08)
	struct UDialogDataAsset* 50pProgressShout; // 0x448(0x08)

	void OnRep_DefendingPlayerCount(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount
	void UpdateDefenderCount(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount
	float GetDefenderBonus(int32_t DefendingPlayers); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus
	bool AnyPlayersDefending(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending
	void OnRep_Progress(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress
	void UserConstructionScript(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void EventSucceded(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded
	void EventFailed(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed
	void ExecuteUbergraph_EVENT_DropPodDefense_Base(int32_t EntryPoint); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base
	void DefenderCountUpdated__DelegateSignature(int32_t DefenderCount); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature
	void ProgressUpdated__DelegateSignature(float NewProgress); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature
	void DefendFailed__DelegateSignature(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature
	void DefendSucceded__DelegateSignature(); // Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature
};

