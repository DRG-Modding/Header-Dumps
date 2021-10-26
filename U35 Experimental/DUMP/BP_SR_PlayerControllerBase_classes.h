// BlueprintGeneratedClass BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C
// Size: 0x7f8 (Inherited: 0x7f0)
struct ABP_SR_PlayerControllerBase_C : ABP_PlayerControllerBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7f0(0x08)

	void GetMissionSelect(UWindowWidget* Widget);
	void GetPopupCrafting(UWindowWidget* Widget);
	void GetCrafting(UWindowWidget* Widget);
	void ShowCharacterSelectionBackground(bool resetToDefaultWeapon, enum class ECharselectionCameraLocation cameraLocation);
	void ShowForgeWorkshop();
	void ExecuteUbergraph_BP_SR_PlayerControllerBase(int32_t EntryPoint);
};

