#ifndef UE4SS_SDK_OBJ_DD_RepairMinimules_HPP
#define UE4SS_SDK_OBJ_DD_RepairMinimules_HPP

class UOBJ_DD_RepairMinimules_C : public URepairObjective
{

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    FObjectiveMissionIcon GetMissionIcon();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLength);
    class UTexture2D* GetObjectiveIcon();
};

#endif
