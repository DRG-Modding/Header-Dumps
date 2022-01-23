#ifndef UE4SS_SDK_ITM_Gear_Bar_HPP
#define UE4SS_SDK_ITM_Gear_Bar_HPP

class UITM_Gear_Bar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* ItemBar;
    class UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon;
    class UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon_C_0;
    class UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon_C_1;
    bool ShowClaimText;

    void SetStageStatus(class UITM_DeepDive_StageIcon_C* Target, bool claimed, bool CallFunc_BooleanAND_ReturnValue);
    void SetDeepDiveProgress(class UDeepDive* Deep Dive, FDeepDiveRewardItem CallFunc_GetGivenRewardAtStage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDeepDiveRewardItem CallFunc_GetGivenRewardAtStage_ReturnValue_1, FDeepDiveRewardItem CallFunc_GetGivenRewardAtStage_ReturnValue_2);
    void SetActiveProgress(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue);
    void SetCustomProgress(bool Stage1Complete, bool Stage2Complete, bool Stage3Complete);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Gear_Bar(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
