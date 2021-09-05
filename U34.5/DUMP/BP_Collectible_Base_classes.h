// BlueprintGeneratedClass BP_Collectible_Base.BP_Collectible_Base_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_Collectible_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UInstantUsable* InstantUsable; // 0x228(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	USphereComponent* UseTrigger; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	USoundBase* PickupSound; // 0x248(0x08)
	UParticleSystem* PickupParticles; // 0x250(0x08)
	UResourceData* Resource; // 0x258(0x08)
	bool IsActive; // 0x260(0x01)
	bool DestroyAfterPickedUp; // 0x261(0x01)
	float ResourcesToAdd; // 0x264(0x04)

	void OnRep_IsActive();
	void PickedUp();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UserCountChangedDelegate__DelegateSignature(int32_t userCount);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_Collectible_Base(int32_t EntryPoint);
};

