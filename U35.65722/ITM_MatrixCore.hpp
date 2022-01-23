#ifndef UE4SS_SDK_ITM_MatrixCore_HPP
#define UE4SS_SDK_ITM_MatrixCore_HPP

class UITM_MatrixCore_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimRewardSchematic;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* BackgroundImage;
    class UImage* Category_CanisterBG;
    class UITM_Overclock_Icon_C* CoreIcon;
    class USizeBox* RewardSizer;
    float IconSize;
    bool ShowToolTip;
    class USchematic* Schematic;

    class UWidget* GetMatrixCoreToolTip(class UTOOLTIP_MatrixCore_C* ToolTip, bool CallFunc_IsValid_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_MatrixCore_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void FromReward(class USchematic* InReward, ESchematicType InRewardType, FSchematicType TypeData, class USchematicCategory* Temp_object_Variable, class USchematicCategory* Temp_object_Variable_1, class USchematicCategory* Temp_object_Variable_2, class USchematicCategory* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue, ESchematicType Temp_byte_Variable, class USchematicCategory* K2Node_Select_Default);
    void FromDeepDiveStage(int32 stageIndex, class USchematic* Reward, class UDeepDive* DeepDive, ESchematicType CallFunc_GetStageRewardType_ReturnValue, FDeepDiveRewardItem CallFunc_GetGivenRewardAtStage_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue);
    void SetIconSize(float IconSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MatrixCore(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
