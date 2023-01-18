#ifndef UE4SS_SDK_OBJ_Extraction_Base_HPP
#define UE4SS_SDK_OBJ_Extraction_Base_HPP

class UOBJ_Extraction_Base_C : public UResourceObjective
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
