#ifndef UE4SS_SDK_BP_Salvage_Point_HPP
#define UE4SS_SDK_BP_Salvage_Point_HPP

class ABP_Salvage_Point_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    uint8 SalvageState;

    void SetSalvagePointState(uint8 State);
    void OnRep_State(int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
    void OnDefenseComplete();
    void OnDefenseStart();
    void EnableRepair();
    void OnDefenseFail();
    void ExecuteUbergraph_BP_Salvage_Point(int32 EntryPoint);
};

#endif
