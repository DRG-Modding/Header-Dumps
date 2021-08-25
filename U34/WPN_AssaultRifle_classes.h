// BlueprintGeneratedClass WPN_AssaultRifle.WPN_AssaultRifle_C
// Size: 0x700 (Inherited: 0x6b0)
struct AWPN_AssaultRifle_C : AAssaultRifle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b0(0x08)
	struct UStaticMeshComponent* TP_AnimationMag; // 0x6b8(0x08)
	struct UFirstPersonStaticMeshComponent* FP_AnimationMag; // 0x6c0(0x08)
	struct UDamageComponent* Damage; // 0x6c8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6d0(0x08)
	struct UStaticMeshComponent* TP_Mag; // 0x6d8(0x08)
	struct UFirstPersonStaticMeshComponent* FP_Mag; // 0x6e0(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x6e8(0x08)
	struct UHitscanComponent* HitScan; // 0x6f0(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6f8(0x08)

	struct UStaticMeshComponent* Receive_GetTPAnimationEventMesh(); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetTPAnimationEventMesh
	struct UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh(); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetFPAnimationEventMesh
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.UserConstructionScript
	void RecieveEquipped(); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.RecieveEquipped
	void Recieve_UpdateMeshses(bool IsFirstPerson); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.Recieve_UpdateMeshses
	void ReceiveBeginPlay(); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.ReceiveBeginPlay
	void Receive_ReloadBegin(); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadBegin
	void Receive_ReloadEnd(); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadEnd
	void OnSkinChanged(struct USkinEffect* Skin); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.OnSkinChanged
	void ExecuteUbergraph_WPN_AssaultRifle(int32_t EntryPoint); // Function WPN_AssaultRifle.WPN_AssaultRifle_C.ExecuteUbergraph_WPN_AssaultRifle
};

