// BlueprintGeneratedClass WPN_FlameThrower.WPN_FlameThrower_C
// Size: 0x8c8 (Inherited: 0x850)
struct AWPN_FlameThrower_C : AFlameThrowerItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x850(0x08)
	struct UStaticMeshComponent* TP_Mag; // 0x858(0x08)
	struct UFirstPersonStaticMeshComponent* FP_Mag; // 0x860(0x08)
	struct UWeaponImpactComponent* WeaponImpact; // 0x868(0x08)
	struct UParticleSystemComponent* ParticleSystemR; // 0x870(0x08)
	struct UParticleSystemComponent* ParticleSystemL; // 0x878(0x08)
	struct UPointLightComponent* PointLight1; // 0x880(0x08)
	struct UPointLightComponent* PointLight; // 0x888(0x08)
	struct UFirstPersonPointLightComponent* FirstPersonPointLight; // 0x890(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystemR; // 0x898(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystemL; // 0x8a0(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPerson_Gauge; // 0x8a8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x8b0(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x8b8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x8c0(0x08)

	struct UStaticMeshComponent* Receive_GetTPAnimationEventMesh(); // Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetTPAnimationEventMesh
	struct UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh(); // Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetFPAnimationEventMesh
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay
	void RecieveEquipped(); // Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped
	void RecieveUnequipped(); // Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped
	void Receive_ReloadBegin(); // Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin
	void Receive_ReloadEnd(); // Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd
	void Recieve_UpdateMeshses(bool IsFirstPerson); // Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses
	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature(); // Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	void OnSkinChanged(struct USkinEffect* Skin); // Function WPN_FlameThrower.WPN_FlameThrower_C.OnSkinChanged
	void ExecuteUbergraph_WPN_FlameThrower(int32_t EntryPoint); // Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower
};

