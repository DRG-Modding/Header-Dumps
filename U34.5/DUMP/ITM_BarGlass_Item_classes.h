// BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C
// Size: 0x3c0 (Inherited: 0x370)
struct AITM_BarGlass_Item_C : ADrinkableItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	UParticleSystemComponent* TPParticleSystem; // 0x378(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x380(0x08)
	UAudioComponent* SparkleDrink; // 0x388(0x08)
	bool IsFull; // 0x390(0x01)
	ABar_Glass_Physics_C* PhysicsActor; // 0x398(0x08)
	UAnimMontage* TPMontage; // 0x3a0(0x08)
	UAnimMontage* FPMontage; // 0x3a8(0x08)
	bool Visible; // 0x3b0(0x01)
	ABar_Glass_Physics_C* ThrownGlass; // 0x3b8(0x08)

	void OnRep_ThrownGlass();
	void OnRep_Visible();
	void OnRep_IsFull();
	bool CheckCanSalute();
	void IsDrinking(bool IsDrinking);
	float PlayThrow();
	float PlayDrink();
	void UserConstructionScript();
	void RecieveStartUsing();
	void Server_Use();
	void All_Drink();
	void All_Throw();
	void SetEmpty();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset);
	void ReceiveBeginPlay();
	void SkinThrownGlass();
	void ExecuteUbergraph_ITM_BarGlass_Item(int32_t EntryPoint);
};

