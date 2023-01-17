#ifndef UE4SS_SDK_OBJ_1st_Escort_HPP
#define UE4SS_SDK_OBJ_1st_Escort_HPP

class UOBJ_1st_Escort_C : public UEscortObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftClassPtr<UObject> GarageBeacon;
    bool MuleClass;
    FSoftObjectPath EscortMuleClass;
    bool MuleDead;

    int32 GetObjectiveAmount(float missionLength);
    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionText();
    class UTexture2D* GetObjectiveIcon();
    void ReceiveBeginPlay();
    void OnEscortMuleSpawnedEvent();
    void OnMuleDied(class UHealthComponentBase* HealthComponent);
    void SpawnGarage();
    void OnAllDwarvesDown();
    void ExecuteUbergraph_OBJ_1st_Escort(int32 EntryPoint);
};

#endif
