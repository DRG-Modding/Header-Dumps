// WidgetBlueprintGeneratedClass ITM_MatrixCore.ITM_MatrixCore_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_MatrixCore_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimRewardSchematic; // 0x238(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x240(0x08)
	struct UImage* BackgroundImage; // 0x248(0x08)
	struct UImage* Category_CanisterBG; // 0x250(0x08)
	struct UITM_Overclock_Icon_C* CoreIcon; // 0x258(0x08)
	struct USizeBox* RewardSizer; // 0x260(0x08)
	float IconSize; // 0x268(0x04)
	bool ShowToolTip; // 0x26c(0x01)
	char UnknownData_26D[0x3]; // 0x26d(0x03)
	struct USchematic* Schematic; // 0x270(0x08)

	struct UWidget* GetMatrixCoreToolTip(); // Function ITM_MatrixCore.ITM_MatrixCore_C.GetMatrixCoreToolTip
	void FromReward(struct USchematic* InReward, enum class ESchematicType InRewardType); // Function ITM_MatrixCore.ITM_MatrixCore_C.FromReward
	void FromDeepDiveStage(int32_t StageIndex); // Function ITM_MatrixCore.ITM_MatrixCore_C.FromDeepDiveStage
	void SetIconSize(float IconSize); // Function ITM_MatrixCore.ITM_MatrixCore_C.SetIconSize
	void PreConstruct(bool IsDesignTime); // Function ITM_MatrixCore.ITM_MatrixCore_C.PreConstruct
	void ExecuteUbergraph_ITM_MatrixCore(int32_t EntryPoint); // Function ITM_MatrixCore.ITM_MatrixCore_C.ExecuteUbergraph_ITM_MatrixCore
};

