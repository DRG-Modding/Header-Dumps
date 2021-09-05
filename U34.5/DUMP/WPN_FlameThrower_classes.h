// BlueprintGeneratedClass WPN_FlameThrower.WPN_FlameThrower_C
// Size: 0x8c8 (Inherited: 0x850)
struct AWPN_FlameThrower_C : AFlameThrowerItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x850(0x08)
	UStaticMeshComponent* TP_Mag; // 0x858(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x860(0x08)
	UWeaponImpactComponent* WeaponImpact; // 0x868(0x08)
	UParticleSystemComponent* ParticleSystemR; // 0x870(0x08)
	UParticleSystemComponent* ParticleSystemL; // 0x878(0x08)
	UPointLightComponent* PointLight1; // 0x880(0x08)
	UPointLightComponent* PointLight; // 0x888(0x08)
	UFirstPersonPointLightComponent* FirstPersonPointLight; // 0x890(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystemR; // 0x898(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystemL; // 0x8a0(0x08)
	UFirstPersonStaticMeshComponent* FirstPerson_Gauge; // 0x8a8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x8b0(0x08)
	UPointLightComponent* MuzzleLight; // 0x8b8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x8c0(0x08)

	UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
	UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RecieveEquipped();
	void RecieveUnequipped();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
	void OnSkinChanged(USkinEffect* Skin);
	void ExecuteUbergraph_WPN_FlameThrower(int32_t EntryPoint);
};

