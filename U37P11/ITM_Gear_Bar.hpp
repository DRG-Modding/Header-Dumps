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

    void SetStageStatus(class UITM_DeepDive_StageIcon_C* Target, bool claimed);
    void SetDeepDiveProgress(class UDeepDive* Deep Dive);
    void SetActiveProgress();
    void SetCustomProgress(bool Stage1Complete, bool Stage2Complete, bool Stage3Complete);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Gear_Bar(int32 EntryPoint);
};

#endif
