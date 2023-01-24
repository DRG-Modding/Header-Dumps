#ifndef UE4SS_SDK_OBJ_WRN_Plague_HPP
#define UE4SS_SDK_OBJ_WRN_Plague_HPP

class UOBJ_WRN_Plague_C : public UPlagueObjective
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnRep_CurrPlagueCount();
    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionText();
    class UTexture2D* GetObjectiveIcon();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_OBJ_WRN_Plague(int32 EntryPoint);
};

#endif
