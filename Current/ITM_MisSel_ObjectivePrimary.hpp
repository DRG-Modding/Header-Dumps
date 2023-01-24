#ifndef UE4SS_SDK_ITM_MisSel_ObjectivePrimary_HPP
#define UE4SS_SDK_ITM_MisSel_ObjectivePrimary_HPP

class UITM_MisSel_ObjectivePrimary_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATAPrimaryObjective;
    class UTextBlock* DATAReward_PrimaryObjective;
    class UImage* Image_0;

    void SetData(TSubclassOf<class UObjective> Objective, float MissionScale, float HazardBonus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_ObjectivePrimary(int32 EntryPoint);
};

#endif
