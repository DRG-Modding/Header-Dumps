// WidgetBlueprintGeneratedClass ITM_BossFightContainer.ITM_BossFightContainer_C
// Size: 0x328 (Inherited: 0x230)
struct UITM_BossFightContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x238(0x08)
	struct UWidgetAnimation* DisengagedAnim; // 0x240(0x08)
	struct UWidgetAnimation* DeathAnim; // 0x248(0x08)
	struct UImage* BG_Left_2; // 0x250(0x08)
	struct UImage* BG_Middle; // 0x258(0x08)
	struct UImage* BG_Middle_3; // 0x260(0x08)
	struct UImage* BG_Middle_4; // 0x268(0x08)
	struct UImage* BG_Middle_5; // 0x270(0x08)
	struct UImage* BG_Right_2; // 0x278(0x08)
	struct UTextBlock* EnemyName; // 0x280(0x08)
	struct UImage* IconLeft; // 0x288(0x08)
	struct UImage* IconRight; // 0x290(0x08)
	struct UNamedSlot* LeftContent; // 0x298(0x08)
	struct UNamedSlot* MiddleBottomContent; // 0x2a0(0x08)
	struct UImage* OutlineLeftBottom; // 0x2a8(0x08)
	struct UImage* OutlineLeftDiagonal; // 0x2b0(0x08)
	struct UImage* OutlineLeftTop; // 0x2b8(0x08)
	struct UImage* OutlineMiddleBottom; // 0x2c0(0x08)
	struct UImage* OutlineMiddleTop; // 0x2c8(0x08)
	struct UImage* OutlineRightBottom; // 0x2d0(0x08)
	struct UImage* OutlineRightDiagonal; // 0x2d8(0x08)
	struct UImage* OutlineRightTop; // 0x2e0(0x08)
	struct UImage* RedGlow; // 0x2e8(0x08)
	struct UNamedSlot* RightContent; // 0x2f0(0x08)
	struct FMulticastInlineDelegate OnDeathAnimFinished; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnDisengagedAnimFinished; // 0x308(0x10)
	struct FLinearColor OutlimeColor; // 0x318(0x10)

	void PreConstruct(bool IsDesignTime); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.PreConstruct
	void PlayIntro(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.PlayIntro
	void PlayDeath(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.PlayDeath
	void PlayDisengaged(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.PlayDisengaged
	void Construct(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.Construct
	void OnDeath(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.OnDeath
	void OnDisengaged(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.OnDisengaged
	void SetHeader(struct FText Name, struct UTexture2D* Icon); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.SetHeader
	void ExecuteUbergraph_ITM_BossFightContainer(int32_t EntryPoint); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.ExecuteUbergraph_ITM_BossFightContainer
	void OnDisengagedAnimFinished__DelegateSignature(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.OnDisengagedAnimFinished__DelegateSignature
	void OnDeathAnimFinished__DelegateSignature(); // Function ITM_BossFightContainer.ITM_BossFightContainer_C.OnDeathAnimFinished__DelegateSignature
};

