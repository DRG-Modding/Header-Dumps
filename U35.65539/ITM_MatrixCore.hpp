#ifndef UE4SS_SDK_ITM_MatrixCore_HPP
#define UE4SS_SDK_ITM_MatrixCore_HPP

class UITM_MatrixCore_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimRewardSchematic;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UImage* BackgroundImage;
    UImage* Category_CanisterBG;
    UITM_Overclock_Icon_C* CoreIcon;
    USizeBox* RewardSizer;
    float IconSize;
    bool ShowToolTip;
    USchematic* Schematic;

    UWidget* GetMatrixCoreToolTip(UTOOLTIP_MatrixCore_C* ToolTip, bool CallFunc_IsValid_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UTOOLTIP_MatrixCore_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void FromReward(USchematic* InReward, ESchematicType InRewardType, FSchematicType TypeData, USchematicCategory* Temp_object_Variable, USchematicCategory* Temp_object_Variable_1, USchematicCategory* Temp_object_Variable_2, USchematicCategory* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue, ESchematicType Temp_byte_Variable, USchematicCategory* K2Node_Select_Default);
    void FromDeepDiveStage(int32 stageIndex, USchematic* Reward, UDeepDive* DeepDive, ESchematicType CallFunc_GetStageRewardType_ReturnValue, FDeepDiveRewardItem CallFunc_GetGivenRewardAtStage_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue);
    void SetIconSize(float IconSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MatrixCore(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
