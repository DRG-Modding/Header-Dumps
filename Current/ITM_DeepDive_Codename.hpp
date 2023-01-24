#ifndef UE4SS_SDK_ITM_DeepDive_Codename_HPP
#define UE4SS_SDK_ITM_DeepDive_Codename_HPP

class UITM_DeepDive_Codename_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_MissionBiome;
    class UTextBlock* DATA_MissionName;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;

    void SetData(class UDeepDive* DeepDive);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_Codename(int32 EntryPoint);
};

#endif
