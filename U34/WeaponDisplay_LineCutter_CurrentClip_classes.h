// WidgetBlueprintGeneratedClass WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C
// Size: 0x288 (Inherited: 0x250)
struct UWeaponDisplay_LineCutter_CurrentClip_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Fire; // 0x258(0x08)
	struct UTextBlock* AmmoCount; // 0x260(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x268(0x08)
	struct UImage* Image_89; // 0x270(0x08)
	struct UProgressBar* ProgressBar_1; // 0x278(0x08)
	struct UTextBlock* TextBlock_1; // 0x280(0x08)

	void SetClipCount(int32_t Value); // Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetClipCount
	void SetTotalCount(int32_t Value); // Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetTotalCount
	void PreConstruct(bool IsDesignTime); // Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.PreConstruct
	void ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip(int32_t EntryPoint); // Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip
};

