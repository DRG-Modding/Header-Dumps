// BlueprintGeneratedClass PRW_LockedWeapon.PRW_LockedWeapon_C
// Size: 0x258 (Inherited: 0x220)
struct APRW_LockedWeapon_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* SM_Crate_B; // 0x228(0x08)
	UWidgetComponent* Widget; // 0x230(0x08)
	UStaticMeshComponent* Top; // 0x238(0x08)
	UStaticMeshComponent* Cube; // 0x240(0x08)
	USceneComponent* Scaler; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_PRW_LockedWeapon(int32_t EntryPoint);
};

