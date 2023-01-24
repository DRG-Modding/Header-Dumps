#ifndef UE4SS_SDK_ITM_MisSel_MissionCount_HPP
#define UE4SS_SDK_ITM_MisSel_MissionCount_HPP

class UITM_MisSel_MissionCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATAMissionCount;
    class UImage* Image_0;
    TArray<class UGeneratedMission*> missions;

    void SetMissionCount(TArray<class UGeneratedMission*>& missions, TArray<FBlueprintSessionResult>& SeachResults);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ServerUpdate();
    void ExecuteUbergraph_ITM_MisSel_MissionCount(int32 EntryPoint);
};

#endif
