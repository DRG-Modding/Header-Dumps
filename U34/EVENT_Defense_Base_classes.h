// BlueprintGeneratedClass EVENT_Defense_Base.EVENT_Defense_Base_C
// Size: 0x468 (Inherited: 0x358)
struct AEVENT_Defense_Base_C : AGameEvent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UAudioComponent* Audio; // 0x360(0x08)
	struct UStaticMeshComponent* SphereMesh; // 0x368(0x08)
	struct USphereComponent* Sphere; // 0x370(0x08)
	struct UStaticMeshComponent* OuterSphereMesh; // 0x378(0x08)
	struct UStaticMeshComponent* InnerSphereMesh; // 0x380(0x08)
	float Progress; // 0x388(0x04)
	float Duration; // 0x38c(0x04)
	float InitialProgress; // 0x390(0x04)
	char UnknownData_394[0x4]; // 0x394(0x04)
	struct TArray<struct APlayerCharacter*> DefendingPlayers; // 0x398(0x10)
	struct UEWC_Salvage_Defend_C* Wave; // 0x3a8(0x08)
	struct UHUD_Defend_Event_C* Event Widget; // 0x3b0(0x08)
	struct FText Event Text; // 0x3b8(0x18)
	struct FText Event Succeed Text; // 0x3d0(0x18)
	struct FText Event Failed Text; // 0x3e8(0x18)
	float Extra Defender Bonus; // 0x400(0x04)
	int32_t Defending player count; // 0x404(0x04)
	struct UDialogDataAsset* 75p Progress Shout; // 0x408(0x08)
	struct UDialogDataAsset* 50p Progress Shout; // 0x410(0x08)
	struct UDialogDataAsset* Event Start Shout; // 0x418(0x08)
	struct UDialogDataAsset* Event Fail Warning Shout; // 0x420(0x08)
	struct FMulticastInlineDelegate DefendSucceded; // 0x428(0x10)
	struct FMulticastInlineDelegate DefendFailed; // 0x438(0x10)
	struct FMulticastInlineDelegate ProgressUpdated; // 0x448(0x10)
	struct FMulticastInlineDelegate DefenderCountUpdate; // 0x458(0x10)

	void UpdateDefenderCount(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.UpdateDefenderCount
	void GetDefenderBonus(int32_t DefendingPlayerCount, float DefenseBonus); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.GetDefenderBonus
	void AnyPlayersDefending(bool IsPlayersDefending); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.AnyPlayersDefending
	void OnRep_Defending player count(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.OnRep_Defending player count
	void OnRep_Progress(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.OnRep_Progress
	void UserConstructionScript(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.ReceiveTick
	void EventFailed(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.EventFailed
	void EventSucceded(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.EventSucceded
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void ExecuteUbergraph_EVENT_Defense_Base(int32_t EntryPoint); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.ExecuteUbergraph_EVENT_Defense_Base
	void DefenderCountUpdate__DelegateSignature(int32_t DefenderCount); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.DefenderCountUpdate__DelegateSignature
	void ProgressUpdated__DelegateSignature(float NewProgress); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.ProgressUpdated__DelegateSignature
	void DefendFailed__DelegateSignature(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.DefendFailed__DelegateSignature
	void DefendSucceded__DelegateSignature(); // Function EVENT_Defense_Base.EVENT_Defense_Base_C.DefendSucceded__DelegateSignature
};

