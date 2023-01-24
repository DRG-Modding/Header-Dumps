#ifndef UE4SS_SDK_OBJ_DD_Defense_HPP
#define UE4SS_SDK_OBJ_DD_Defense_HPP

class UOBJ_DD_Defense_C : public UDefenseObjective
{

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    FObjectiveMissionIcon GetMissionIcon();
    class UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLength);
};

#endif
