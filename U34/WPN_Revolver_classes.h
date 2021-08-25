// BlueprintGeneratedClass WPN_Revolver.WPN_Revolver_C
// Size: 0x6f4 (Inherited: 0x6a8)
struct AWPN_Revolver_C : ARevoler {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6b0(0x08)
	struct UStaticMeshComponent* TP_Drum; // 0x6b8(0x08)
	struct UFirstPersonStaticMeshComponent* FP_Drum; // 0x6c0(0x08)
	struct UDamageComponent* Damage; // 0x6c8(0x08)
	struct UPointLightComponent* MuzzlePointLight; // 0x6d0(0x08)
	struct UFirstPersonStaticMeshComponent* Mesh_AmmoCounter; // 0x6d8(0x08)
	struct UHitscanComponent* HitScan; // 0x6e0(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6e8(0x08)
	float LastSpread; // 0x6f0(0x04)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_Revolver.WPN_Revolver_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_Revolver.WPN_Revolver_C.UserConstructionScript
	void Receive_ReloadBegin(); // Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadBegin
	void Receive_ReloadEnd(); // Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadEnd
	void ReceiveBeginPlay(); // Function WPN_Revolver.WPN_Revolver_C.ReceiveBeginPlay
	void OnSpreadChanged_Event_1(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function WPN_Revolver.WPN_Revolver_C.OnSpreadChanged_Event_1
	void OnSkinChanged(struct USkinEffect* Skin); // Function WPN_Revolver.WPN_Revolver_C.OnSkinChanged
	void ExecuteUbergraph_WPN_Revolver(int32_t EntryPoint); // Function WPN_Revolver.WPN_Revolver_C.ExecuteUbergraph_WPN_Revolver
};

