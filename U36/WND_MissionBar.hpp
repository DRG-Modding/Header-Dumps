#ifndef UE4SS_SDK_WND_MissionBar_HPP
#define UE4SS_SDK_WND_MissionBar_HPP

class UWND_MissionBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasRoot;

    void SetMissionType(bool IsSingleMission);
    void SetGeneratedMission(class UGeneratedMission* InMission);
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WND_MissionBar(int32 EntryPoint);
};

#endif
