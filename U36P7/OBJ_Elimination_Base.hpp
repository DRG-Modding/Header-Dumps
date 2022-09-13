#ifndef UE4SS_SDK_OBJ_Elimination_Base_HPP
#define UE4SS_SDK_OBJ_Elimination_Base_HPP

class UOBJ_Elimination_Base_C : public UEliminationObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText Title;
    FText Description;

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    class UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLength);
    void ReceiveTargetKilled();
    void ReceiveTargetSpawned();
    void ExecuteUbergraph_OBJ_Elimination_Base(int32 EntryPoint);
};

#endif
