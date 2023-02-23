#ifndef UE4SS_SDK_BP_Salvage_Point_HPP
#define UE4SS_SDK_BP_Salvage_Point_HPP

class ABP_Salvage_Point_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    uint8 SalvageState;
    class ADropPod* DropPod;

    void SetSalvagePointState(uint8 State);
    void OnRep_State();
    void OnDefenseComplete();
    void OnDefenseStart();
    void EnableRepair();
    void OnDefenseFail();
    void ExecuteUbergraph_BP_Salvage_Point(int32 EntryPoint);
};

#endif
