// WidgetBlueprintGeneratedClass ITM_BossFightContainer.ITM_BossFightContainer_C
// Size: 0x338 (Inherited: 0x230)
struct UITM_BossFightContainer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* IntroAnim; // 0x238(0x08)
	UWidgetAnimation* DisengagedAnim; // 0x240(0x08)
	UWidgetAnimation* DeathAnim; // 0x248(0x08)
	UImage* BG_Left_2; // 0x250(0x08)
	UImage* BG_Middle; // 0x258(0x08)
	UImage* BG_Middle_3; // 0x260(0x08)
	UImage* BG_Middle_4; // 0x268(0x08)
	UImage* BG_Middle_5; // 0x270(0x08)
	UImage* BG_Right_2; // 0x278(0x08)
	UTextBlock* EnemyName; // 0x280(0x08)
	UImage* IconLeft; // 0x288(0x08)
	UImage* IconRight; // 0x290(0x08)
	UNamedSlot* LeftContent; // 0x298(0x08)
	UNamedSlot* MiddleBottomContent; // 0x2a0(0x08)
	UImage* OutlineLeftBottom; // 0x2a8(0x08)
	UImage* OutlineLeftDiagonal; // 0x2b0(0x08)
	UImage* OutlineLeftTop; // 0x2b8(0x08)
	UImage* OutlineMiddleBottom; // 0x2c0(0x08)
	UImage* OutlineMiddleTop; // 0x2c8(0x08)
	UImage* OutlineRightBottom; // 0x2d0(0x08)
	UImage* OutlineRightDiagonal; // 0x2d8(0x08)
	UImage* OutlineRightTop; // 0x2e0(0x08)
	UImage* RedGlow; // 0x2e8(0x08)
	UNamedSlot* RightContent; // 0x2f0(0x08)
	FMulticastInlineDelegate OnDeathAnimFinished; // 0x2f8(0x10)
	FMulticastInlineDelegate OnDisengagedAnimFinished; // 0x308(0x10)
	FLinearColor OutlimeColor; // 0x318(0x10)
	USoundBase* Sound_OnDeath; // 0x328(0x08)
	USoundBase* Sound_AnimIn; // 0x330(0x08)

	void PreConstruct(bool IsDesignTime);
	void PlayIntro();
	void PlayDeath();
	void PlayDisengaged();
	void Construct();
	void OnDeath();
	void OnDisengaged();
	void SetHeader(FText Name, UTexture2D* Icon);
	void ExecuteUbergraph_ITM_BossFightContainer(int32_t EntryPoint);
	void OnDisengagedAnimFinished__DelegateSignature();
	void OnDeathAnimFinished__DelegateSignature();
};

