// WidgetBlueprintGeneratedClass ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_WeaponAndPerkInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Enter; // 0x238(0x08)
	UBasic_Window_CutCorner_Gradient_C* Basic_Window_CutCorner_Gradient; // 0x240(0x08)
	UITM_PerkInfoBox_C* ITM_PerkInfoBox; // 0x248(0x08)
	UITM_WeaponInfo_C* ITM_WeaponInfo; // 0x250(0x08)
	UITM_WeaponInfo_C* ITM_WeaponInfo_C_2; // 0x258(0x08)
	UITM_WeaponInfo_C* ITM_WeaponInfo_C_3; // 0x260(0x08)
	UITM_WeaponInfo_C* ITM_WeaponInfo_C_4; // 0x268(0x08)
	UITM_WeaponInfo_C* ITM_WeaponInfo_C_5; // 0x270(0x08)

	void Update();
	void PlayEnter();
	void PlayLeave();
	void EnterFinished();
	void ExecuteUbergraph_ITM_WeaponAndPerkInfo(int32_t EntryPoint);
};

