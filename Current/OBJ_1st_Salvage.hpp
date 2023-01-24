#ifndef UE4SS_SDK_OBJ_1st_Salvage_HPP
#define UE4SS_SDK_OBJ_1st_Salvage_HPP

class UOBJ_1st_Salvage_C : public USalvageObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    FOBJ_1st_Salvage_COnAllActorsSalvaged OnAllActorsSalvaged;
    void OnAllActorsSalvaged();

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLength);
    class UTexture2D* GetObjectiveIcon();
    void AllActorsSalvaged();
    void ExecuteUbergraph_OBJ_1st_Salvage(int32 EntryPoint);
    void OnAllActorsSalvaged__DelegateSignature();
};

#endif
