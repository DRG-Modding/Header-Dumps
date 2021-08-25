// WidgetBlueprintGeneratedClass WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C
// Size: 0x2b5 (Inherited: 0x250)
struct UWeaponDisplay_GatlingGun_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* AmmoLow; // 0x258(0x08)
	struct UTextBlock* AmmoCount; // 0x260(0x08)
	struct UImage* Image_162; // 0x268(0x08)
	struct UImage* Image_164; // 0x270(0x08)
	struct UImage* Image_328; // 0x278(0x08)
	struct UProgressBar* ProgressBar_1; // 0x280(0x08)
	struct UTextBlock* TEXT_Low; // 0x288(0x08)
	struct UTextBlock* TEXT_Rounds; // 0x290(0x08)
	struct UTextBlock* TextBlock_157; // 0x298(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2a0(0x08)
	int32_t CurrentClipCount; // 0x2a8(0x04)
	int32_t TotalClipCount; // 0x2ac(0x04)
	int32_t ClipCountTrailing; // 0x2b0(0x04)
	bool IsCounting; // 0x2b4(0x01)

	void AdjustPercentage(); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustPercentage
	void AnimateClipCount(); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AnimateClipCount
	void AdjustProgressBar(); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustProgressBar
	void SetClipCount(int32_t Value); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetClipCount
	void Check AmmoLow(); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Check AmmoLow
	void SetTotalCount(int32_t Value); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetTotalCount
	void SetMaxAmmo(int32_t Value); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetMaxAmmo
	void Construct(); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Construct
	void OnAmmoLowFinished(); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.OnAmmoLowFinished
	void ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount(int32_t EntryPoint); // Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount
};

