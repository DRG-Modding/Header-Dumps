// WidgetBlueprintGeneratedClass OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C
// Size: 0x298 (Inherited: 0x230)
struct UOVERLAY_RetirementGranted_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* IconOutro; // 0x238(0x08)
	struct UWidgetAnimation* IconIntro; // 0x240(0x08)
	struct UWidgetAnimation* Enter; // 0x248(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_1; // 0x250(0x08)
	struct UImage* BGgradientBottom; // 0x258(0x08)
	struct UImage* BGgradientTop; // 0x260(0x08)
	struct UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon; // 0x268(0x08)
	struct UCanvasPanel* PlayerIconScaler; // 0x270(0x08)
	struct UTextBlock* Text_Mission; // 0x278(0x08)
	struct UTextBlock* Text_MissionStatus; // 0x280(0x08)
	struct FMulticastInlineDelegate OnFinished; // 0x288(0x10)

	void PreConstruct(bool IsDesignTime); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct
	void Play(struct APlayerCharacter* CharacterClass, int32_t RetirementCount); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play
	void Construct(); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct
	void OnEnterFinished(); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnEnterFinished
	void OnIntroFinished(); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnIntroFinished
	void PlayOutro(float Duration); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PlayOutro
	void ExecuteUbergraph_OVERLAY_RetirementGranted(int32_t EntryPoint); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted
	void OnFinished__DelegateSignature(); // Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature
};

