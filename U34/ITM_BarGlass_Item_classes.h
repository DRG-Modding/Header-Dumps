// BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C
// Size: 0x3c0 (Inherited: 0x370)
struct AITM_BarGlass_Item_C : ADrinkableItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UParticleSystemComponent* TPParticleSystem; // 0x378(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x380(0x08)
	struct UAudioComponent* SparkleDrink; // 0x388(0x08)
	bool IsFull; // 0x390(0x01)
	char UnknownData_391[0x7]; // 0x391(0x07)
	struct ABar_Glass_Physics_C* PhysicsActor; // 0x398(0x08)
	struct UAnimMontage* TPMontage; // 0x3a0(0x08)
	struct UAnimMontage* FPMontage; // 0x3a8(0x08)
	bool Visible; // 0x3b0(0x01)
	char UnknownData_3B1[0x7]; // 0x3b1(0x07)
	struct ABar_Glass_Physics_C* ThrownGlass; // 0x3b8(0x08)

	void OnRep_ThrownGlass(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass
	void OnRep_Visible(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible
	void OnRep_IsFull(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull
	bool CheckCanSalute(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute
	void IsDrinking(bool IsDrinking); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking
	float PlayThrow(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow
	float PlayDrink(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrink
	void UserConstructionScript(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript
	void RecieveStartUsing(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing
	void Server_Use(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use
	void All_Drink(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink
	void All_Throw(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw
	void SetEmpty(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay
	void SkinThrownGlass(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass
	void ExecuteUbergraph_ITM_BarGlass_Item(int32_t EntryPoint); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item
};

