// BlueprintGeneratedClass EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C
// Size: 0x450 (Inherited: 0x358)
struct AEVENT_DropPodDefense_Base_C : AGameEvent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UAudioComponent* Audio; // 0x360(0x08)
	UStaticMeshComponent* SphereInner1; // 0x368(0x08)
	UStaticMeshComponent* SphereInner2; // 0x370(0x08)
	USphereComponent* Sphere; // 0x378(0x08)
	UStaticMeshComponent* Sphere1; // 0x380(0x08)
	float Progress; // 0x388(0x04)
	float Duration; // 0x38c(0x04)
	float InitialProgress; // 0x390(0x04)
	TArray<APlayerCharacter*> DefendingPlayers; // 0x398(0x10)
	FMulticastInlineDelegate DefendSucceded; // 0x3a8(0x10)
	FMulticastInlineDelegate DefendFailed; // 0x3b8(0x10)
	FMulticastInlineDelegate ProgressUpdated; // 0x3c8(0x10)
	UEWC_Salvage_Defend_C* Wave; // 0x3d8(0x08)
	UHUD_Salvage_Defend_C* Event Widget; // 0x3e0(0x08)
	FText EventText; // 0x3e8(0x18)
	float ExtraDefenderBonus; // 0x400(0x04)
	int32_t DefendingPlayerCount; // 0x404(0x04)
	FMulticastInlineDelegate DefenderCountUpdated; // 0x408(0x10)
	FText EventSuccedText; // 0x418(0x18)
	UDialogDataAsset* EventStartShout; // 0x430(0x08)
	UDialogDataAsset* EventFailWarningShout; // 0x438(0x08)
	UDialogDataAsset* 75pProgressShout; // 0x440(0x08)
	UDialogDataAsset* 50pProgressShout; // 0x448(0x08)

	void OnRep_DefendingPlayerCount();
	void UpdateDefenderCount();
	float GetDefenderBonus(int32_t DefendingPlayers);
	bool AnyPlayersDefending();
	void OnRep_Progress();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void EventSucceded();
	void EventFailed();
	void ExecuteUbergraph_EVENT_DropPodDefense_Base(int32_t EntryPoint);
	void DefenderCountUpdated__DelegateSignature(int32_t DefenderCount);
	void ProgressUpdated__DelegateSignature(float NewProgress);
	void DefendFailed__DelegateSignature();
	void DefendSucceded__DelegateSignature();
};

