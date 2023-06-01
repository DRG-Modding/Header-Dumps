#ifndef UE4SS_SDK_OBJ_1st_Facility_HPP
#define UE4SS_SDK_OBJ_1st_Facility_HPP

class UOBJ_1st_Facility_C : public UFacilityObjective
{
    FPointerToUberGraphFrame UberGraphFrame;

    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionCounterText();
    FText GetInMissionText();
    int32 GetObjectiveAmount(float missionLength);
    bool IsObjectiveResource(class UResourceData* InResource);
    class UTexture2D* GetInMissionCounterIcon();
    class UTexture2D* GetObjectiveIcon();
    void ReceiveBeginPlay();
    void OnCoreDeposited();
    void Receive_AddEnemies(class AProceduralSetup* Setup);
    void OBJ_Updated(class UObjective* Objective);
    void ExecuteUbergraph_OBJ_1st_Facility(int32 EntryPoint);
};

#endif
