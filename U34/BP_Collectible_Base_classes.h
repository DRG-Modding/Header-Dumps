// BlueprintGeneratedClass BP_Collectible_Base.BP_Collectible_Base_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_Collectible_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UInstantUsable* InstantUsable; // 0x228(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	struct USphereComponent* UseTrigger; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct USoundBase* PickupSound; // 0x248(0x08)
	struct UParticleSystem* PickupParticles; // 0x250(0x08)
	struct UResourceData* Resource; // 0x258(0x08)
	bool IsActive; // 0x260(0x01)
	bool DestroyAfterPickedUp; // 0x261(0x01)
	char UnknownData_262[0x2]; // 0x262(0x02)
	float ResourcesToAdd; // 0x264(0x04)

	void OnRep_IsActive(); // Function BP_Collectible_Base.BP_Collectible_Base_C.OnRep_IsActive
	void PickedUp(); // Function BP_Collectible_Base.BP_Collectible_Base_C.PickedUp
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Collectible_Base.BP_Collectible_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_Collectible_Base.BP_Collectible_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UserCountChangedDelegate__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Collectible_Base.BP_Collectible_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_Collectible_Base(int32_t EntryPoint); // Function BP_Collectible_Base.BP_Collectible_Base_C.ExecuteUbergraph_BP_Collectible_Base
};

