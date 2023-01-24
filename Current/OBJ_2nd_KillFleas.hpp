#ifndef UE4SS_SDK_OBJ_2nd_KillFleas_HPP
#define UE4SS_SDK_OBJ_2nd_KillFleas_HPP

class UOBJ_2nd_KillFleas_C : public UKillEnemiesObjective
{
    FText MissionText;

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    FObjectiveMissionIcon GetMissionIcon();
    class UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLength);
};

#endif
