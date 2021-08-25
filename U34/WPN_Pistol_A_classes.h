// BlueprintGeneratedClass WPN_Pistol_A.WPN_Pistol_A_C
// Size: 0x700 (Inherited: 0x6a8)
struct AWPN_Pistol_A_C : ABasicPistol {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	struct UStaticMeshComponent* TP_Animation_Mag; // 0x6b0(0x08)
	struct UFirstPersonStaticMeshComponent* FP_Animation_Mag; // 0x6b8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6c0(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6c8(0x08)
	struct UDamageComponent* Damage; // 0x6d0(0x08)
	struct UFirstPersonStaticMeshComponent* FP_Mag; // 0x6d8(0x08)
	struct UStaticMeshComponent* TP_Mag; // 0x6e0(0x08)
	struct UPointLightComponent* MuzzlePointLight; // 0x6e8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6f0(0x08)
	struct UHitscanComponent* HitScan; // 0x6f8(0x08)

	struct UStaticMeshComponent* Receive_GetTPAnimationEventMesh(); // Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetTPAnimationEventMesh
	struct UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh(); // Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetFPAnimationEventMesh
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_Pistol_A.WPN_Pistol_A_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_Pistol_A.WPN_Pistol_A_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WPN_Pistol_A.WPN_Pistol_A_C.ReceiveBeginPlay
	void Receive_ReloadBegin(); // Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadBegin
	void Receive_ReloadEnd(); // Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadEnd
	void OnSkinChanged(struct USkinEffect* Skin); // Function WPN_Pistol_A.WPN_Pistol_A_C.OnSkinChanged
	void ExecuteUbergraph_WPN_Pistol_A(int32_t EntryPoint); // Function WPN_Pistol_A.WPN_Pistol_A_C.ExecuteUbergraph_WPN_Pistol_A
};

