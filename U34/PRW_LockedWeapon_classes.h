// BlueprintGeneratedClass PRW_LockedWeapon.PRW_LockedWeapon_C
// Size: 0x258 (Inherited: 0x220)
struct APRW_LockedWeapon_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* SM_Crate_B; // 0x228(0x08)
	struct UWidgetComponent* Widget; // 0x230(0x08)
	struct UStaticMeshComponent* Top; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct USceneComponent* Scaler; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function PRW_LockedWeapon.PRW_LockedWeapon_C.ReceiveBeginPlay
	void ExecuteUbergraph_PRW_LockedWeapon(int32_t EntryPoint); // Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon
};

