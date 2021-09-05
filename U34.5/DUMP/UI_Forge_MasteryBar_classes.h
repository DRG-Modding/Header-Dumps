// WidgetBlueprintGeneratedClass UI_Forge_MasteryBar.UI_Forge_MasteryBar_C
// Size: 0x2c8 (Inherited: 0x230)
struct UUI_Forge_MasteryBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimResetReward; // 0x238(0x08)
	UWidgetAnimation* AnimRewardPopUp; // 0x240(0x08)
	UWidgetAnimation* AnimCount; // 0x248(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x250(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_2; // 0x258(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_3; // 0x260(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_4; // 0x268(0x08)
	UBorder* BorderProgressBarXP; // 0x270(0x08)
	UITM_MatrixCore_C* ForgeLevelReward; // 0x278(0x08)
	UProgressBar* GhostProgressBar; // 0x280(0x08)
	UProgressBar* LevelProgressBar; // 0x288(0x08)
	UHorizontalBox* MasteryBarBox; // 0x290(0x08)
	UUI_Forge_LevelIcon_C* PlayerForgeLevel; // 0x298(0x08)
	enum class ESchematicType Reward; // 0x2a0(0x01)
	float StartXP; // 0x2a4(0x04)
	float EndXP; // 0x2a8(0x04)
	float LerpProgress; // 0x2ac(0x04)
	bool LevelIncreased; // 0x2b0(0x01)
	FMulticastInlineDelegate OnCountingFinished; // 0x2b8(0x10)

	UWidget* Get_MasteryBarBox_ToolTipWidget_1();
	void StartCounting(int32_t InStartLevel, float InStartXP);
	void SetLerpProgress(float Value);
	void SetFromSaveGame(bool animate);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void PlayRewardAnim();
	void RewardPopUpStarted();
	void FinishedCounting();
	void ResetReward();
	void ExecuteUbergraph_UI_Forge_MasteryBar(int32_t EntryPoint);
	void OnCountingFinished__DelegateSignature(char Reward);
};

