#ifndef UE4SS_SDK_OBJ_Gather_Gems_Base_HPP
#define UE4SS_SDK_OBJ_Gather_Gems_Base_HPP

class UOBJ_Gather_Gems_Base_C : public UGatherGemsObjective
{
    FText ObjectiveDescription;

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    class UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLength);
    bool IsObjectiveResource(class UResourceData* InResource);
};

#endif
