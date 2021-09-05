// BlueprintGeneratedClass EVENT_Defense_Base.EVENT_Defense_Base_C
// Size: 0x468 (Inherited: 0x358)
struct AEVENT_Defense_Base_C : AGameEvent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UAudioComponent* Audio; // 0x360(0x08)
	UStaticMeshComponent* SphereMesh; // 0x368(0x08)
	USphereComponent* Sphere; // 0x370(0x08)
	UStaticMeshComponent* OuterSphereMesh; // 0x378(0x08)
	UStaticMeshComponent* InnerSphereMesh; // 0x380(0x08)
	float Progress; // 0x388(0x04)
	float Duration; // 0x38c(0x04)
	float InitialProgress; // 0x390(0x04)
	TArray<APlayerCharacter*> DefendingPlayers; // 0x398(0x10)
	UEWC_Salvage_Defend_C* Wave; // 0x3a8(0x08)
	UHUD_Defend_Event_C* Event Widget; // 0x3b0(0x08)
	FText Event Text; // 0x3b8(0x18)
	FText Event Succeed Text; // 0x3d0(0x18)
	FText Event Failed Text; // 0x3e8(0x18)
	float Extra Defender Bonus; // 0x400(0x04)
	int32_t Defending player count; // 0x404(0x04)
	UDialogDataAsset* 75p Progress Shout; // 0x408(0x08)
	UDialogDataAsset* 50p Progress Shout; // 0x410(0x08)
	UDialogDataAsset* Event Start Shout; // 0x418(0x08)
	UDialogDataAsset* Event Fail Warning Shout; // 0x420(0x08)
	FMulticastInlineDelegate DefendSucceded; // 0x428(0x10)
	FMulticastInlineDelegate DefendFailed; // 0x438(0x10)
	FMulticastInlineDelegate ProgressUpdated; // 0x448(0x10)
	FMulticastInlineDelegate DefenderCountUpdate; // 0x458(0x10)

	void UpdateDefenderCount();
	void GetDefenderBonus(int32_t DefendingPlayerCount, float DefenseBonus);
	void AnyPlayersDefending(bool IsPlayersDefending);
	void OnRep_Defending player count();
	void OnRep_Progress();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void EventFailed();
	void EventSucceded();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ExecuteUbergraph_EVENT_Defense_Base(int32_t EntryPoint);
	void DefenderCountUpdate__DelegateSignature(int32_t DefenderCount);
	void ProgressUpdated__DelegateSignature(float NewProgress);
	void DefendFailed__DelegateSignature();
	void DefendSucceded__DelegateSignature();
};

