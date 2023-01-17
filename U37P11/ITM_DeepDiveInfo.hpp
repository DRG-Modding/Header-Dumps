#ifndef UE4SS_SDK_ITM_DeepDiveInfo_HPP
#define UE4SS_SDK_ITM_DeepDiveInfo_HPP

class UITM_DeepDiveInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UITM_WarningAndMutator_C* DeepDive_WarningAndMutator;
    class UHorizontalBox* DeepDiveStage;
    class UBasic_Label_C* DeepDiveStageNumber;
    class UTextBlock* MissionName;
    class UTextBlock* TextBlock_Codename;

    void Update(class UGeneratedMission* mission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveInfo(int32 EntryPoint);
};

#endif
