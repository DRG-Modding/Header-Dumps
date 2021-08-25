// WidgetBlueprintGeneratedClass UI_Forge_MasteryBar.UI_Forge_MasteryBar_C
// Size: 0x2c8 (Inherited: 0x230)
struct UUI_Forge_MasteryBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimResetReward; // 0x238(0x08)
	struct UWidgetAnimation* AnimRewardPopUp; // 0x240(0x08)
	struct UWidgetAnimation* AnimCount; // 0x248(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x250(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_2; // 0x258(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_3; // 0x260(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_4; // 0x268(0x08)
	struct UBorder* BorderProgressBarXP; // 0x270(0x08)
	struct UITM_MatrixCore_C* ForgeLevelReward; // 0x278(0x08)
	struct UProgressBar* GhostProgressBar; // 0x280(0x08)
	struct UProgressBar* LevelProgressBar; // 0x288(0x08)
	struct UHorizontalBox* MasteryBarBox; // 0x290(0x08)
	struct UUI_Forge_LevelIcon_C* PlayerForgeLevel; // 0x298(0x08)
	enum class ESchematicType Reward; // 0x2a0(0x01)
	char UnknownData_2A1[0x3]; // 0x2a1(0x03)
	float StartXP; // 0x2a4(0x04)
	float EndXP; // 0x2a8(0x04)
	float LerpProgress; // 0x2ac(0x04)
	bool LevelIncreased; // 0x2b0(0x01)
	char UnknownData_2B1[0x7]; // 0x2b1(0x07)
	struct FMulticastInlineDelegate OnCountingFinished; // 0x2b8(0x10)

	struct UWidget* Get_MasteryBarBox_ToolTipWidget_1(); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Get_MasteryBarBox_ToolTipWidget_1
	void StartCounting(int32_t InStartLevel, float InStartXP); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartCounting
	void SetLerpProgress(float Value); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetLerpProgress
	void SetFromSaveGame(bool animate); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetFromSaveGame
	void PreConstruct(bool IsDesignTime); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PreConstruct
	void Construct(); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Construct
	void PlayRewardAnim(); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PlayRewardAnim
	void RewardPopUpStarted(); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.RewardPopUpStarted
	void FinishedCounting(); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.FinishedCounting
	void ResetReward(); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ResetReward
	void ExecuteUbergraph_UI_Forge_MasteryBar(int32_t EntryPoint); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ExecuteUbergraph_UI_Forge_MasteryBar
	void OnCountingFinished__DelegateSignature(char Reward); // Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnCountingFinished__DelegateSignature
};

