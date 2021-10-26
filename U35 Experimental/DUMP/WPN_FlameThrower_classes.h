// BlueprintGeneratedClass WPN_FlameThrower.WPN_FlameThrower_C
// Size: 0x920 (Inherited: 0x8a8)
struct AWPN_FlameThrower_C : AFlameThrowerItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x8a8(0x08)
	UStaticMeshComponent* TP_Mag; // 0x8b0(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x8b8(0x08)
	UWeaponImpactComponent* WeaponImpact; // 0x8c0(0x08)
	UParticleSystemComponent* ParticleSystemR; // 0x8c8(0x08)
	UParticleSystemComponent* ParticleSystemL; // 0x8d0(0x08)
	UPointLightComponent* PointLight1; // 0x8d8(0x08)
	UPointLightComponent* PointLight; // 0x8e0(0x08)
	UFirstPersonPointLightComponent* FirstPersonPointLight; // 0x8e8(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystemR; // 0x8f0(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystemL; // 0x8f8(0x08)
	UFirstPersonStaticMeshComponent* FirstPerson_Gauge; // 0x900(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x908(0x08)
	UPointLightComponent* MuzzleLight; // 0x910(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x918(0x08)

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

