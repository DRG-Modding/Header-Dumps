#ifndef UE4SS_SDK_OBJ_FindItems_Base_HPP
#define UE4SS_SDK_OBJ_FindItems_Base_HPP

class UOBJ_FindItems_Base_C : public UGatheItemsObjective
{
    FText ObjectiveDescription;

    bool IsObjectiveResource(class UResourceData* InResource);
    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    class UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLength);
};

#endif
