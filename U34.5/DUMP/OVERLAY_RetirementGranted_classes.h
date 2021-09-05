// WidgetBlueprintGeneratedClass OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C
// Size: 0x298 (Inherited: 0x230)
struct UOVERLAY_RetirementGranted_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* IconOutro; // 0x238(0x08)
	UWidgetAnimation* IconIntro; // 0x240(0x08)
	UWidgetAnimation* Enter; // 0x248(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_1; // 0x250(0x08)
	UImage* BGgradientBottom; // 0x258(0x08)
	UImage* BGgradientTop; // 0x260(0x08)
	UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon; // 0x268(0x08)
	UCanvasPanel* PlayerIconScaler; // 0x270(0x08)
	UTextBlock* Text_Mission; // 0x278(0x08)
	UTextBlock* Text_MissionStatus; // 0x280(0x08)
	FMulticastInlineDelegate OnFinished; // 0x288(0x10)

	void PreConstruct(bool IsDesignTime);
	void Play(APlayerCharacter* CharacterClass, int32_t RetirementCount);
	void Construct();
	void OnEnterFinished();
	void OnIntroFinished();
	void PlayOutro(float Duration);
	void ExecuteUbergraph_OVERLAY_RetirementGranted(int32_t EntryPoint);
	void OnFinished__DelegateSignature();
};

